/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "interpreter.y"

#include <iostream>
#include <string>

/*******************************************/
/* NEW in example 5 */
/* pow */
#include <math.h>
/*******************************************/

/*******************************************/
/* NEW in example 6 */
/* Use for recovery of runtime errors */
#include <setjmp.h>
#include <signal.h>
/*******************************************/

/* Error recovery functions */
#include "../error/error.hpp"

/* Macros for the screen */
#include "../includes/macros.hpp"


/*******************************************/
/* 
  NEW in example 16
  AST class
  IMPORTANT: this file must be before init.hpp
*/
#include "../ast/ast.hpp"


/*******************************************/
/* NEW in example 7 */
/* Table of symbol */
#include "../table/table.hpp"
/*******************************************/

/*******************************************/
#include "../table/numericVariable.hpp"
/*******************************************/

/* NEW in example 15 */
#include "../table/logicalVariable.hpp"

/*******************************************/
/* NEW in example 11 */
#include "../table/numericConstant.hpp"
/*******************************************/

/*******************************************/
/* NEW in example 15 */
#include "../table/logicalConstant.hpp"
/*******************************************/

/*******************************************/
/* NEW in example 13 */
#include "../table/builtinParameter1.hpp"
/*******************************************/

/*******************************************/
/* NEW in example 14 */
#include "../table/builtinParameter0.hpp"
#include "../table/builtinParameter2.hpp"
/*******************************************/


/*******************************************/
/* NEW in example 10 */
#include "../table/init.hpp"
/*******************************************/

/*! 
	\brief  Lexical or scanner function
	\return int
	\note   C++ requires that yylex returns an int value
	\sa     yyparser
*/
int yylex();


extern int lineNumber; //!< External line counter


/* NEW in example 15 */
extern bool interactiveMode; //!< Control the interactive mode of execution of the interpreter

/* New in example 17 */
extern int control; //!< External: to control the interactive mode in "if" and "while" sentences 




/***********************************************************/
/* NEW in example 2 */
extern std::string progname; //!<  Program name
/***********************************************************/

/*******************************************/
/* NEW in example 6 */
/*
 jhmp_buf
    This is an array type capable of storing the information of a calling environment to be restored later.
   This information is filled by calling macro setjmp and can be restored by calling function longjmp.
*/
jmp_buf begin; //!<  It enables recovery of runtime errors 
/*******************************************/


/*******************************************/
/* NEW in example 7 */
extern lp::Table table; //!< Extern Table of Symbols

/*******************************************/
/* NEW in example 16 */
extern lp::AST *root; //!< External root of the abstract syntax tree AST


#line 190 "interpreter.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_INTERPRETER_TAB_H_INCLUDED
# define YY_YY_INTERPRETER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    PRINT = 259,
    PRINTSTRING = 260,
    READ = 261,
    READSTRING = 262,
    IF = 263,
    THEN = 264,
    ELSE = 265,
    ENDIF = 266,
    WHILE = 267,
    DO = 268,
    ENDWHILE = 269,
    REPEAT = 270,
    UNTIL = 271,
    FOR = 272,
    FROM = 273,
    ENDFOR = 274,
    STEP = 275,
    TO = 276,
    CASE = 277,
    VALUE = 278,
    DEFAULT = 279,
    ENDCASE = 280,
    COMENTARIO = 281,
    COMENTARIOSIMPLE = 282,
    CLEARSCREEN = 283,
    PLACE_T = 284,
    LETFCURLYBRACKET = 285,
    RIGHTCURLYBRACKET = 286,
    ASSIGNMENT = 287,
    COMMA = 288,
    COLON = 289,
    NUMBER = 290,
    BOOL = 291,
    VARIABLE = 292,
    CADENA = 293,
    UNDEFINED = 294,
    CONSTANT = 295,
    BUILTIN = 296,
    GREATER_OR_EQUAL = 297,
    LESS_OR_EQUAL = 298,
    GREATER_THAN = 299,
    LESS_THAN = 300,
    EQUAL = 301,
    NOT_EQUAL = 302,
    OR = 303,
    AND = 304,
    NOT = 305,
    PLUS = 306,
    MINUS = 307,
    MULTIPLICATION = 308,
    DIVISION = 309,
    DIVISION_ENTERA = 310,
    MODULO = 311,
    CONCATENATION = 312,
    LPAREN = 313,
    RPAREN = 314,
    UNARY = 315,
    POWER = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 141 "interpreter.y"

  double number;
  char * string; 				 /* NEW in example 7 */
  bool logic;						 /* NEW in example 15 */
  lp::ExpNode *expNode;  			 /* NEW in example 16 */
  std::list<lp::ExpNode *>  *parameters;    // New in example 16; NOTE: #include<list> must be in interpreter.l, init.cpp, interpreter.cpp
  std::list<lp::Statement *> *stmts; /* NEW in example 16 */
  lp::Statement *st;				 /* NEW in example 16 */
  lp::AST *prog;					 /* NEW in example 16 */
  std::list<lp::ValueNode *> *cases;  					 
  lp::ValueNode *individualCase;
  lp::DefaultNode *iCase;							
  lp::BlockCaseNode *sCase; 			

#line 319 "interpreter.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   860

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

#define YYUNDEFTOK  2
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   254,   254,   268,   273,   296,   307,   312,   317,   322,
     327,   332,   338,   344,   350,   356,   361,   366,   371,   376,
     385,   391,   396,   404,   412,   422,   433,   443,   453,   459,
     467,   472,   479,   487,   492,   498,   503,   509,   515,   522,
     528,   534,   539,   544,   549,   556,   563,   570,   577,   583,
     588,   595,   601,   607,   613,   620,   626,   632,   638,   644,
     650,   656,   662,   669,   675,   682,   689,   696,   702,   709,
     756,   762,   768,   774,   780,   786,   797,   802,   813,   818
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "PRINT", "PRINTSTRING",
  "READ", "READSTRING", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO",
  "ENDWHILE", "REPEAT", "UNTIL", "FOR", "FROM", "ENDFOR", "STEP", "TO",
  "CASE", "VALUE", "DEFAULT", "ENDCASE", "COMENTARIO", "COMENTARIOSIMPLE",
  "CLEARSCREEN", "PLACE_T", "LETFCURLYBRACKET", "RIGHTCURLYBRACKET",
  "ASSIGNMENT", "COMMA", "COLON", "NUMBER", "BOOL", "VARIABLE", "CADENA",
  "UNDEFINED", "CONSTANT", "BUILTIN", "GREATER_OR_EQUAL", "LESS_OR_EQUAL",
  "GREATER_THAN", "LESS_THAN", "EQUAL", "NOT_EQUAL", "OR", "AND", "NOT",
  "PLUS", "MINUS", "MULTIPLICATION", "DIVISION", "DIVISION_ENTERA",
  "MODULO", "CONCATENATION", "LPAREN", "RPAREN", "UNARY", "POWER",
  "$accept", "program", "stmtlist", "stmt", "clear_screen", "place",
  "block", "controlSymbol", "if", "while", "repeat", "for", "case",
  "valuelist", "value", "valueDefault", "cond", "asgn", "print",
  "print_string", "read", "read_string", "exp", "listOfExp",
  "restOfListOfExp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF (-39)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-38)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -39,    10,    94,   -39,   -39,   -39,   -34,   -29,   -28,   -26,
     -39,   -39,   -39,   -39,   -39,   -39,   -20,   -39,     7,     9,
      11,   -39,   -39,    39,   -39,   -39,   -39,   -39,   -39,   -39,
      41,    42,    46,    47,    48,    -4,    -4,   -33,   -22,    -5,
      -5,   365,    18,    14,    -4,   403,   642,   642,   642,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,    16,
      -4,    -4,    -4,    -4,   659,   679,    -3,    19,    21,    22,
      -4,    66,    64,   -39,    75,    -4,   592,   -39,     7,     9,
      11,   -39,   779,   -39,   779,   -39,   779,    -4,   112,    44,
      44,   699,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,   -39,    -4,   -39,
     -39,   -39,   -39,   -39,   719,   -39,   -39,    -5,    -4,   739,
      -4,   617,    23,   -39,   799,   799,   799,   799,   799,   799,
      35,   112,    72,    72,    44,    44,    44,    44,    44,    44,
     -39,   327,   441,   -39,   154,    84,   759,    -4,   -39,   -39,
     -39,   -39,   -39,    -4,   -32,    -2,    84,   -39,   617,   479,
      97,    74,    79,    80,    81,   -39,   -39,   -39,   -39,   -39,
      -4,   -39,   -39,   -39,   -39,    95,   517,   134,   213,   251,
     289,   555,   -39,   -39,   -39,   593,   -39
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     5,     6,     0,     0,     0,     0,
      23,    23,     3,    23,    23,    20,     0,     3,     0,     0,
       0,     4,    19,     0,    15,    12,    13,    16,    14,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       7,     8,     9,    10,    11,    51,    64,    52,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,    22,    64,    52,
      68,    40,    39,    42,    41,    44,    43,    76,    67,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    46,
      47,    48,    49,    50,     0,     3,     3,     0,     0,     0,
       0,    78,     0,    59,    71,    73,    70,    72,    74,    75,
      66,    65,    54,    55,    56,    57,    58,    62,    53,    63,
      38,     0,     0,    27,     0,    33,     0,     0,    77,    69,
       3,    24,    26,     0,     0,     0,    33,    21,    78,     0,
       0,     0,     0,     0,     0,    30,    32,    79,    25,     3,
       0,     3,     3,     3,     3,     0,     0,     0,     0,     0,
       0,     0,    31,    28,     3,     0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -12,   -39,   -39,   -39,   -39,     3,   -39,   -39,
     -39,   -39,   -39,   -37,   -39,   -39,   -38,   -27,   -39,   -39,
     -39,   -39,   -35,   -39,   -21
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    21,    22,    23,    24,    39,    25,    26,
      27,    28,    29,   155,   156,   175,    71,    30,    31,    32,
      33,    34,    64,   122,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    65,    72,   161,    66,    45,   162,    67,   163,    76,
       3,    82,    84,    86,    40,    68,    42,    43,    69,    81,
      83,    85,   164,   165,    35,    88,    89,    90,    91,    36,
      37,    55,    38,    56,    57,   114,    58,    59,    44,    46,
     119,    47,    49,    48,    50,    51,    60,    61,    62,    52,
      53,    54,   121,    70,    63,    74,   110,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    75,   139,    87,   115,   117,   116,   111,   143,
     112,   113,   149,   144,    99,   146,   100,   101,   102,   103,
     104,   105,   106,   118,    -2,     4,   108,     5,     6,     7,
       8,     9,    10,   141,   142,   108,    11,   154,   171,    12,
     169,    13,   158,   172,   173,   174,    14,   170,   160,   166,
     182,     0,    15,    16,    17,   102,   103,   104,   105,   106,
       0,    18,    19,   108,    20,   177,     0,   167,   159,    92,
      93,    94,    95,    96,    97,    98,    99,   184,   100,   101,
     102,   103,   104,   105,   106,     0,     0,   176,   108,   178,
     179,   180,   181,   100,   101,   102,   103,   104,   105,   106,
       0,     0,   185,   108,     0,   153,    92,    93,    94,    95,
      96,    97,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,     0,     0,     0,   108,    92,    93,    94,    95,
      96,    97,    98,    99,     0,   100,   101,   102,   103,   104,
     105,   106,     0,     0,     4,   108,     5,     6,     7,     8,
       9,    10,     0,     0,     0,    11,     0,     0,    12,     0,
      13,     0,     0,     0,     0,    14,   -34,   -34,   -34,     0,
       0,    15,    16,    17,     0,     0,     0,     0,     0,     0,
      18,    19,     4,    20,     5,     6,     7,     8,     9,    10,
       0,     0,     0,    11,     0,     0,    12,     0,    13,     0,
       0,     0,     0,    14,   -36,   -36,   -36,     0,     0,    15,
      16,    17,     0,     0,     0,     0,     0,     0,    18,    19,
       4,    20,     5,     6,     7,     8,     9,    10,     0,     0,
       0,    11,     0,     0,    12,     0,    13,     0,     0,     0,
       0,    14,   -35,   -35,   -35,     0,     0,    15,    16,    17,
       0,     0,     0,     0,     0,     0,    18,    19,     4,    20,
       5,     6,     7,     8,     9,    10,     0,   150,   151,    11,
       0,     0,    12,     0,    13,     0,     0,     0,     0,    14,
       0,     0,     0,     0,     0,    15,    16,    17,     0,     0,
       0,     0,     0,     0,    18,    19,     4,    20,     5,     6,
       7,     8,     9,    10,     0,     0,     0,    11,     0,     0,
      12,    73,    13,     0,     0,     0,     0,    14,     0,     0,
       0,     0,     0,    15,    16,    17,     0,     0,     0,     0,
       0,     0,    18,    19,     4,    20,     5,     6,     7,     8,
       9,    10,     0,     0,     0,    11,     0,     0,    12,     0,
      13,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,    15,    16,    17,    77,     0,     0,     0,     0,     0,
      18,    19,     4,    20,     5,     6,     7,     8,     9,    10,
       0,     0,     0,    11,     0,   152,    12,     0,    13,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,    15,
      16,    17,     0,     0,     0,     0,     0,     0,    18,    19,
       4,    20,     5,     6,     7,     8,     9,    10,     0,     0,
     168,    11,     0,     0,    12,     0,    13,     0,     0,     0,
       0,    14,     0,     0,     0,     0,     0,    15,    16,    17,
       0,     0,     0,     0,     0,     0,    18,    19,     4,    20,
       5,     6,     7,     8,     9,    10,     0,     0,     0,    11,
       0,     0,    12,     0,    13,     0,   183,     0,     0,    14,
       0,     0,     0,     0,     0,    15,    16,    17,     0,     0,
       0,     0,     0,     0,    18,    19,     4,    20,     5,     6,
       7,     8,     9,    10,     0,     0,     0,    11,     0,     0,
      12,     0,    13,     0,     0,     0,     0,    14,     0,     0,
     -37,     0,     0,    15,    16,    17,     0,     0,     0,     0,
       0,     0,    18,    19,     4,    20,     5,     6,     7,     8,
       9,    10,     0,     0,     0,    11,     0,     0,    12,     0,
      13,     0,   186,     0,     0,    14,     0,     0,     0,     0,
       0,    15,    16,    17,     0,   120,     0,     0,     0,     0,
      18,    19,     0,    20,    92,    93,    94,    95,    96,    97,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     147,     0,     0,   108,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,    97,    98,    99,     0,   100,   101,
     102,   103,   104,   105,   106,     0,     0,    55,   108,    78,
      79,     0,    80,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,    62,     0,     0,     0,     0,     0,
      63,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,     0,   107,     0,
     108,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,     0,   109,     0,
     108,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,     0,   123,     0,
     108,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,     0,   140,     0,
     108,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,     0,   145,     0,
     108,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,     0,   157,     0,
     108,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,     0,     0,     0,
     108,   -38,   -38,   -38,   -38,   -38,   -38,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,     0,     0,     0,
     108
};

static const yytype_int16 yycheck[] =
{
      12,    36,    40,    35,    37,    17,    38,    40,    40,    44,
       0,    46,    47,    48,    11,    37,    13,    14,    40,    46,
      47,    48,    24,    25,    58,    60,    61,    62,    63,    58,
      58,    35,    58,    37,    38,    70,    40,    41,    58,    32,
      75,    32,     3,    32,     3,     3,    50,    51,    52,     3,
       3,     3,    87,    58,    58,    37,    59,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    58,   108,    58,     9,    73,    13,    59,   117,
      59,    59,    59,   118,    49,   120,    51,    52,    53,    54,
      55,    56,    57,    18,     0,     1,    61,     3,     4,     5,
       6,     7,     8,   115,   116,    61,    12,    23,    34,    15,
      13,    17,   147,    34,    34,    34,    22,    20,   153,   156,
      25,    -1,    28,    29,    30,    53,    54,    55,    56,    57,
      -1,    37,    38,    61,    40,   170,    -1,   158,   150,    42,
      43,    44,    45,    46,    47,    48,    49,    13,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,   169,    61,   171,
     172,   173,   174,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,   184,    61,    -1,    21,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    61,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,     1,    61,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,     1,    40,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    -1,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
       1,    40,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    15,    -1,    17,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,     1,    40,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      -1,    -1,    15,    -1,    17,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,     1,    40,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,     1,    40,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,
      17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,     1,    40,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
       1,    40,     3,     4,     5,     6,     7,     8,    -1,    -1,
      11,    12,    -1,    -1,    15,    -1,    17,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,     1,    40,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      -1,    -1,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,     1,    40,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,
      15,    -1,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,     1,    40,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    -1,    33,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      33,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    35,    61,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      58,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    -1,
      61,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    -1,
      61,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    -1,
      61,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    -1,
      61,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    -1,
      61,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    -1,
      61,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      61,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    63,    64,     0,     1,     3,     4,     5,     6,     7,
       8,    12,    15,    17,    22,    28,    29,    30,    37,    38,
      40,    65,    66,    67,    68,    70,    71,    72,    73,    74,
      79,    80,    81,    82,    83,    58,    58,    58,    58,    69,
      69,    64,    69,    69,    58,    64,    32,    32,    32,     3,
       3,     3,     3,     3,     3,    35,    37,    38,    40,    41,
      50,    51,    52,    58,    84,    84,    37,    40,    37,    40,
      58,    78,    78,    16,    37,    58,    84,    31,    37,    38,
      40,    79,    84,    79,    84,    79,    84,    58,    84,    84,
      84,    84,    42,    43,    44,    45,    46,    47,    48,    49,
      51,    52,    53,    54,    55,    56,    57,    59,    61,    59,
      59,    59,    59,    59,    84,     9,    13,    69,    18,    84,
      33,    84,    85,    59,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      59,    64,    64,    78,    84,    59,    84,    33,    86,    59,
      10,    11,    14,    21,    23,    75,    76,    59,    84,    64,
      84,    35,    38,    40,    24,    25,    75,    86,    11,    13,
      20,    34,    34,    34,    34,    77,    64,    84,    64,    64,
      64,    64,    25,    19,    13,    64,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    67,    68,    69,    70,    70,    71,    72,    73,    73,
      74,    74,    75,    75,    76,    76,    76,    77,    78,    79,
      79,    79,    79,    79,    79,    80,    81,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     6,     3,     0,     6,     8,     6,     5,    10,    12,
       7,     9,     2,     0,     4,     4,     4,     2,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     1,     3,     3,     2,     1,     4,
       3,     3,     3,     3,     3,     3,     0,     2,     0,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 255 "interpreter.y"
                  { 
		    // Create a new AST
			(yyval.prog) = new lp::AST((yyvsp[0].stmts)); 

			// Assign the AST to the root
			root = (yyval.prog); 

			// End of parsing
			//	return 1;
		  }
#line 1766 "interpreter.tab.c"
    break;

  case 3:
#line 268 "interpreter.y"
                  { 
			// create a empty list of statements
			(yyval.stmts) = new std::list<lp::Statement *>(); 
		  }
#line 1775 "interpreter.tab.c"
    break;

  case 4:
#line 274 "interpreter.y"
                  { 
			// copy up the list and add the stmt to it
			(yyval.stmts) = (yyvsp[-1].stmts);
			(yyval.stmts)->push_back((yyvsp[0].st));

			// Control the interative mode of execution of the interpreter
			if (interactiveMode == true && control == 0)
 			{
				for(std::list<lp::Statement *>::iterator it = (yyval.stmts)->begin(); 
						it != (yyval.stmts)->end(); 
						it++)
				{
					(*it)->printAST();
					(*it)->evaluate();
					
				}

				// Delete the AST code, because it has already run in the interactive mode.
				(yyval.stmts)->clear();
			}
		}
#line 1801 "interpreter.tab.c"
    break;

  case 5:
#line 297 "interpreter.y"
      { 
			 // just copy up the stmtlist when an error occurs
			 (yyval.stmts) = (yyvsp[-1].stmts);

			 // The previous look-ahead token ought to be discarded with `yyclearin;'
			 yyclearin; 
       }
#line 1813 "interpreter.tab.c"
    break;

  case 6:
#line 308 "interpreter.y"
          {
		// Create a new empty statement node
		(yyval.st) = new lp::EmptyStmt(); 
	  }
#line 1822 "interpreter.tab.c"
    break;

  case 7:
#line 313 "interpreter.y"
          {
		// Default action
		// $$ = $1;
	  }
#line 1831 "interpreter.tab.c"
    break;

  case 8:
#line 318 "interpreter.y"
          {
		// Default action
		// $$ = $1;
	  }
#line 1840 "interpreter.tab.c"
    break;

  case 9:
#line 323 "interpreter.y"
          {
		// Default action
		// $$ = $1;
	  }
#line 1849 "interpreter.tab.c"
    break;

  case 10:
#line 328 "interpreter.y"
          {
		// Default action
		// $$ = $1;
	  }
#line 1858 "interpreter.tab.c"
    break;

  case 11:
#line 333 "interpreter.y"
          {
		// Default action
		// $$ = $1;
	  }
#line 1867 "interpreter.tab.c"
    break;

  case 12:
#line 339 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1876 "interpreter.tab.c"
    break;

  case 13:
#line 345 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1885 "interpreter.tab.c"
    break;

  case 14:
#line 351 "interpreter.y"
        {
		// Default action
		// $$ = $1;
	}
#line 1894 "interpreter.tab.c"
    break;

  case 15:
#line 357 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1903 "interpreter.tab.c"
    break;

  case 16:
#line 362 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1912 "interpreter.tab.c"
    break;

  case 17:
#line 367 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1921 "interpreter.tab.c"
    break;

  case 18:
#line 372 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1930 "interpreter.tab.c"
    break;

  case 19:
#line 377 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1939 "interpreter.tab.c"
    break;

  case 20:
#line 386 "interpreter.y"
                {
			(yyval.st)=new lp::Delete_WindowStmt();
		}
#line 1947 "interpreter.tab.c"
    break;

  case 21:
#line 392 "interpreter.y"
                {
			(yyval.st) = new lp::PlaceStmt((yyvsp[-3].expNode), (yyvsp[-1].expNode));
		}
#line 1955 "interpreter.tab.c"
    break;

  case 22:
#line 397 "interpreter.y"
                {
			// Create a new block of statements node
			(yyval.st) = new lp::BlockStmt((yyvsp[-1].stmts)); 
		}
#line 1964 "interpreter.tab.c"
    break;

  case 23:
#line 404 "interpreter.y"
                {
			// To control the interactive mode in "if" and "while" sentences
			control++;
		}
#line 1973 "interpreter.tab.c"
    break;

  case 24:
#line 413 "interpreter.y"
    {
		// Create a new if statement node
		(yyval.st) = new lp::IfStmt((yyvsp[-3].expNode), (yyvsp[-1].stmts));

		// To control the interactive mode
		control--;
	}
#line 1985 "interpreter.tab.c"
    break;

  case 25:
#line 423 "interpreter.y"
         {
		// Create a new if statement node
		(yyval.st) = new lp::IfStmt((yyvsp[-5].expNode), (yyvsp[-3].stmts), (yyvsp[-1].stmts));

		// To control the interactive mode
		control--;
	 }
#line 1997 "interpreter.tab.c"
    break;

  case 26:
#line 434 "interpreter.y"
                {
			// Create a new while statement node
			(yyval.st) = new lp::WhileStmt((yyvsp[-3].expNode), (yyvsp[-1].stmts));

			// To control the interactive mode
			control--;
    }
#line 2009 "interpreter.tab.c"
    break;

  case 27:
#line 444 "interpreter.y"
                {
			// Create a new repeat statement node
			(yyval.st) = new lp::RepeatStmt((yyvsp[0].expNode), (yyvsp[-3].stmts));

			// To control the interactive mode
			control--;
    }
#line 2021 "interpreter.tab.c"
    break;

  case 28:
#line 454 "interpreter.y"
                {
			(yyval.st) = new lp::ForStmt((yyvsp[-7].string), (yyvsp[-5].expNode), (yyvsp[-3].expNode), (yyvsp[-1].stmts));

			control --;
		}
#line 2031 "interpreter.tab.c"
    break;

  case 29:
#line 460 "interpreter.y"
                {
			(yyval.st) = new lp::ForStmt((yyvsp[-9].string), (yyvsp[-7].expNode), (yyvsp[-5].expNode), (yyvsp[-3].expNode), (yyvsp[-1].stmts));

			control --;
		}
#line 2041 "interpreter.tab.c"
    break;

  case 30:
#line 468 "interpreter.y"
                {
			(yyval.sCase) = new lp::BlockCaseNode((yyvsp[-3].expNode), (yyvsp[-1].cases));
			control--;
		}
#line 2050 "interpreter.tab.c"
    break;

  case 31:
#line 473 "interpreter.y"
                {
			(yyval.sCase) = new lp::BlockCaseNode((yyvsp[-5].expNode), (yyvsp[-3].cases), (yyvsp[-1].iCase));
			control--;
		}
#line 2059 "interpreter.tab.c"
    break;

  case 32:
#line 480 "interpreter.y"
                {

			(yyval.cases) = (yyvsp[0].cases);
			(yyval.cases)->push_back((yyvsp[-1].individualCase));
			
		}
#line 2070 "interpreter.tab.c"
    break;

  case 33:
#line 487 "interpreter.y"
                {
			(yyval.cases) = new std::list<lp::ValueNode *>(); 
		}
#line 2078 "interpreter.tab.c"
    break;

  case 34:
#line 493 "interpreter.y"
                {
			lp::ExpNode * exp = new lp::NumberNode((yyvsp[-2].number));
			(yyval.individualCase) = new lp::ValueNode(exp, (yyvsp[0].stmts));
		}
#line 2087 "interpreter.tab.c"
    break;

  case 35:
#line 499 "interpreter.y"
                {
			lp::ExpNode * exp = new lp::ConstantNode((yyvsp[-2].string));
			(yyval.individualCase) = new lp::ValueNode(exp, (yyvsp[0].stmts));
		}
#line 2096 "interpreter.tab.c"
    break;

  case 36:
#line 504 "interpreter.y"
                {
			lp::ExpNode * exp = new lp::CadenaNode((yyvsp[-2].string));
			(yyval.individualCase) = new lp::ValueNode(exp, (yyvsp[0].stmts));
		}
#line 2105 "interpreter.tab.c"
    break;

  case 37:
#line 510 "interpreter.y"
                {			
			(yyval.iCase) = new lp::DefaultNode((yyvsp[0].stmts));
		}
#line 2113 "interpreter.tab.c"
    break;

  case 38:
#line 516 "interpreter.y"
                { 
			(yyval.expNode) = (yyvsp[-1].expNode);
		}
#line 2121 "interpreter.tab.c"
    break;

  case 39:
#line 523 "interpreter.y"
                { 
			// Create a new assignment node
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), (yyvsp[0].expNode));
		}
#line 2130 "interpreter.tab.c"
    break;

  case 40:
#line 529 "interpreter.y"
                { 
			// Create a new assignment node
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), (lp::AssignmentStmt *) (yyvsp[0].st));
		}
#line 2139 "interpreter.tab.c"
    break;

  case 41:
#line 535 "interpreter.y"
                { 
			execerror("Semantic error in assignment: it is not allowed to modify a string ", (yyvsp[-2].string));
		}
#line 2147 "interpreter.tab.c"
    break;

  case 42:
#line 540 "interpreter.y"
                { 
			execerror("Semantic error in assignment: it is not allowed to modify a string ", (yyvsp[-2].string));
		}
#line 2155 "interpreter.tab.c"
    break;

  case 43:
#line 545 "interpreter.y"
                {   
 			execerror("Semantic error in assignment: it is not allowed to modify a constant ", (yyvsp[-2].string));
		}
#line 2163 "interpreter.tab.c"
    break;

  case 44:
#line 550 "interpreter.y"
                {   
 			execerror("Semantic error in multiple assignment: it is not allowed to modify a constant ",(yyvsp[-2].string));
		}
#line 2171 "interpreter.tab.c"
    break;

  case 45:
#line 557 "interpreter.y"
                {
			// Create a new print node
			 (yyval.st) = new lp::PrintStmt((yyvsp[-1].expNode));
		}
#line 2180 "interpreter.tab.c"
    break;

  case 46:
#line 564 "interpreter.y"
                {
			// Create a new print node
			 (yyval.st) = new lp::PrintStringStmt((yyvsp[-1].expNode));
		}
#line 2189 "interpreter.tab.c"
    break;

  case 47:
#line 571 "interpreter.y"
                {
			// Create a new read node
			 (yyval.st) = new lp::ReadStmt((yyvsp[-1].string));
		}
#line 2198 "interpreter.tab.c"
    break;

  case 48:
#line 578 "interpreter.y"
                {   
 			execerror("Semantic error in \"read statement\": it is not allowed to modify a constant ",(yyvsp[-1].string));
		}
#line 2206 "interpreter.tab.c"
    break;

  case 49:
#line 584 "interpreter.y"
                {
			// Create a new read node
			 (yyval.st) = new lp::ReadStringStmt((yyvsp[-1].string));
		}
#line 2215 "interpreter.tab.c"
    break;

  case 50:
#line 589 "interpreter.y"
                {   
 			execerror("Semantic error in \"read statement\": it is not allowed to modify a constant ",(yyvsp[-1].string));
		}
#line 2223 "interpreter.tab.c"
    break;

  case 51:
#line 596 "interpreter.y"
                { 
			// Create a new number node
			(yyval.expNode) = new lp::NumberNode((yyvsp[0].number));
		}
#line 2232 "interpreter.tab.c"
    break;

  case 52:
#line 602 "interpreter.y"
                {
		  // Create a new cadena node	
		  //printf(" Valor de cadena en exp -> CADENA : %s\n",$1);
		  (yyval.expNode) = new lp::CadenaNode((yyvsp[0].string));
		}
#line 2242 "interpreter.tab.c"
    break;

  case 53:
#line 608 "interpreter.y"
                                {
					(yyval.expNode) = new lp::ConcatenationNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
				}
#line 2250 "interpreter.tab.c"
    break;

  case 54:
#line 614 "interpreter.y"
                { 
			// Create a new plus node
			 (yyval.expNode) = new lp::PlusNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		 }
#line 2259 "interpreter.tab.c"
    break;

  case 55:
#line 621 "interpreter.y"
        {
			// Create a new minus node
			(yyval.expNode) = new lp::MinusNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2268 "interpreter.tab.c"
    break;

  case 56:
#line 627 "interpreter.y"
                { 
			// Create a new multiplication node
			(yyval.expNode) = new lp::MultiplicationNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2277 "interpreter.tab.c"
    break;

  case 57:
#line 633 "interpreter.y"
                {
		  // Create a new division node	
		  (yyval.expNode) = new lp::DivisionNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
	   }
#line 2286 "interpreter.tab.c"
    break;

  case 58:
#line 639 "interpreter.y"
                {
		  // Create a new division node	
		  (yyval.expNode) = new lp::DivisionENode((yyvsp[-2].expNode), (yyvsp[0].expNode));
	   }
#line 2295 "interpreter.tab.c"
    break;

  case 59:
#line 645 "interpreter.y"
        { 
		    // just copy up the expression node 
			(yyval.expNode) = (yyvsp[-1].expNode);
		 }
#line 2304 "interpreter.tab.c"
    break;

  case 60:
#line 651 "interpreter.y"
                { 
		  // Create a new unary plus node	
  		  (yyval.expNode) = new lp::UnaryPlusNode((yyvsp[0].expNode));
		}
#line 2313 "interpreter.tab.c"
    break;

  case 61:
#line 657 "interpreter.y"
                { 
		  // Create a new unary minus node	
  		  (yyval.expNode) = new lp::UnaryMinusNode((yyvsp[0].expNode));
		}
#line 2322 "interpreter.tab.c"
    break;

  case 62:
#line 663 "interpreter.y"
                {
		  // Create a new modulo node	

		  (yyval.expNode) = new lp::ModuloNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
       }
#line 2332 "interpreter.tab.c"
    break;

  case 63:
#line 670 "interpreter.y"
        { 
		  // Create a new power node	
  		  (yyval.expNode) = new lp::PowerNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2341 "interpreter.tab.c"
    break;

  case 64:
#line 676 "interpreter.y"
                {
		  // Create a new variable node	
		  (yyval.expNode) = new lp::VariableNode((yyvsp[0].string));
		}
#line 2350 "interpreter.tab.c"
    break;

  case 65:
#line 683 "interpreter.y"
                {
		  // Create a new "logic and" node	
 			(yyval.expNode) = new lp::AndNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2359 "interpreter.tab.c"
    break;

  case 66:
#line 690 "interpreter.y"
                                {
				// Create a new "logic or" node	
					(yyval.expNode) = new lp::OrNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
				}
#line 2368 "interpreter.tab.c"
    break;

  case 67:
#line 697 "interpreter.y"
                                {
				// Create a new "logic negation" node	
					(yyval.expNode) = new lp::NotNode((yyvsp[0].expNode));
				}
#line 2377 "interpreter.tab.c"
    break;

  case 68:
#line 703 "interpreter.y"
                {
		  // Create a new constant node	
		  (yyval.expNode) = new lp::ConstantNode((yyvsp[0].string));

		}
#line 2387 "interpreter.tab.c"
    break;

  case 69:
#line 710 "interpreter.y"
                {
			// Get the identifier in the table of symbols as Builtin
			lp::Builtin *f= (lp::Builtin *) table.getSymbol((yyvsp[-3].string));

			// Check the number of parameters 
			if (f->getNParameters() ==  (int) (yyvsp[-1].parameters)->size())
			{
				switch(f->getNParameters())
				{
					case 0:
						{
							// Create a new Builtin Function with 0 parameters node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_0((yyvsp[-3].string));
						}
						break;

					case 1:
						{
							// Get the expression from the list of expressions
							lp::ExpNode *e = (yyvsp[-1].parameters)->front();

							// Create a new Builtin Function with 1 parameter node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_1((yyvsp[-3].string),e);
						}
						break;

					case 2:
						{
							// Get the expressions from the list of expressions
							lp::ExpNode *e1 = (yyvsp[-1].parameters)->front();
							(yyvsp[-1].parameters)->pop_front();
							lp::ExpNode *e2 = (yyvsp[-1].parameters)->front();

							// Create a new Builtin Function with 2 parameters node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_2((yyvsp[-3].string),e1,e2);
						}
						break;

					default:
				  			 execerror("Syntax error: too many parameters for function ", (yyvsp[-3].string));
				} 
			}
			else
	  			 execerror("Syntax error: incompatible number of parameters for function", (yyvsp[-3].string));
		}
#line 2437 "interpreter.tab.c"
    break;

  case 70:
#line 757 "interpreter.y"
                {
		  // Create a new "greater than" node	
 			(yyval.expNode) = new lp::GreaterThanNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2446 "interpreter.tab.c"
    break;

  case 71:
#line 763 "interpreter.y"
                {
		  // Create a new "greater or equal" node	
 			(yyval.expNode) = new lp::GreaterOrEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2455 "interpreter.tab.c"
    break;

  case 72:
#line 769 "interpreter.y"
                {
		  // Create a new "less than" node	
 			(yyval.expNode) = new lp::LessThanNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2464 "interpreter.tab.c"
    break;

  case 73:
#line 775 "interpreter.y"
                {
		  // Create a new "less or equal" node	
 			(yyval.expNode) = new lp::LessOrEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2473 "interpreter.tab.c"
    break;

  case 74:
#line 781 "interpreter.y"
                {
		  // Create a new "equal" node	
 			(yyval.expNode) = new lp::EqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2482 "interpreter.tab.c"
    break;

  case 75:
#line 787 "interpreter.y"
                {
		  // Create a new "not equal" node	
 			(yyval.expNode) = new lp::NotEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2491 "interpreter.tab.c"
    break;

  case 76:
#line 797 "interpreter.y"
                        {
			    // Create a new list STL
				(yyval.parameters) = new std::list<lp::ExpNode *>(); 
			}
#line 2500 "interpreter.tab.c"
    break;

  case 77:
#line 803 "interpreter.y"
                        {
				(yyval.parameters) = (yyvsp[0].parameters);

				// Insert the expression in the list of expressions
				(yyval.parameters)->push_front((yyvsp[-1].expNode));
			}
#line 2511 "interpreter.tab.c"
    break;

  case 78:
#line 813 "interpreter.y"
                        {
			    // Create a new list STL
				(yyval.parameters) = new std::list<lp::ExpNode *>(); 
			}
#line 2520 "interpreter.tab.c"
    break;

  case 79:
#line 819 "interpreter.y"
                        {
				// Get the list of expressions
				(yyval.parameters) = (yyvsp[0].parameters);

				// Insert the expression in the list of expressions
				(yyval.parameters)->push_front((yyvsp[-1].expNode));
			}
#line 2532 "interpreter.tab.c"
    break;


#line 2536 "interpreter.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 830 "interpreter.y"




