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
    WRITE = 263,
    WRITESTRING = 264,
    IF = 265,
    THEN = 266,
    ELSE = 267,
    ENDIF = 268,
    WHILE = 269,
    DO = 270,
    ENDWHILE = 271,
    REPEAT = 272,
    UNTIL = 273,
    FOR = 274,
    FROM = 275,
    ENDFOR = 276,
    STEP = 277,
    TO = 278,
    CASE = 279,
    VALUE = 280,
    DEFAULT = 281,
    ENDCASE = 282,
    CADENA = 283,
    COMENTARIO = 284,
    COMENTARIOSIMPLE = 285,
    LETFCURLYBRACKET = 286,
    RIGHTCURLYBRACKET = 287,
    ASSIGNMENT = 288,
    COMMA = 289,
    NUMBER = 290,
    BOOL = 291,
    VARIABLE = 292,
    UNDEFINED = 293,
    CONSTANT = 294,
    BUILTIN = 295,
    OR = 296,
    AND = 297,
    GREATER_OR_EQUAL = 298,
    LESS_OR_EQUAL = 299,
    GREATER_THAN = 300,
    LESS_THAN = 301,
    EQUAL = 302,
    NOT_EQUAL = 303,
    NOT = 304,
    PLUS = 305,
    MINUS = 306,
    MULTIPLICATION = 307,
    DIVISION = 308,
    DIVISION_ENTERA = 309,
    MODULO = 310,
    LPAREN = 311,
    RPAREN = 312,
    UNARY = 313,
    POWER = 314
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

#line 313 "interpreter.tab.c"

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
typedef yytype_int8 yy_state_t;

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
#define YYLAST   410

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

#define YYUNDEFTOK  2
#define YYMAXUTOK   314


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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   241,   241,   255,   260,   283,   294,   299,   304,   309,
     315,   321,   326,   332,   337,   345,   353,   361,   371,   382,
     392,   402,   408,   419,   426,   432,   439,   444,   450,   457,
     464,   471,   477,   483,   489,   495,   501,   507,   513,   519,
     525,   532,   538,   544,   551,   598,   604,   610,   616,   622,
     628,   634,   640,   646,   656,   661,   672,   677
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "PRINT", "PRINTSTRING",
  "READ", "READSTRING", "WRITE", "WRITESTRING", "IF", "THEN", "ELSE",
  "ENDIF", "WHILE", "DO", "ENDWHILE", "REPEAT", "UNTIL", "FOR", "FROM",
  "ENDFOR", "STEP", "TO", "CASE", "VALUE", "DEFAULT", "ENDCASE", "CADENA",
  "COMENTARIO", "COMENTARIOSIMPLE", "LETFCURLYBRACKET",
  "RIGHTCURLYBRACKET", "ASSIGNMENT", "COMMA", "NUMBER", "BOOL", "VARIABLE",
  "UNDEFINED", "CONSTANT", "BUILTIN", "OR", "AND", "GREATER_OR_EQUAL",
  "LESS_OR_EQUAL", "GREATER_THAN", "LESS_THAN", "EQUAL", "NOT_EQUAL",
  "NOT", "PLUS", "MINUS", "MULTIPLICATION", "DIVISION", "DIVISION_ENTERA",
  "MODULO", "LPAREN", "RPAREN", "UNARY", "POWER", "$accept", "program",
  "stmtlist", "stmt", "block", "controlSymbol", "if", "while", "repeat",
  "for", "cond", "asgn", "print", "read", "exp", "listOfExp",
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF (-51)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -51,     6,   134,   -51,   -51,   -51,   -45,   -42,   -51,   -51,
     206,   -51,   -51,   -11,    -9,   -51,   -51,   -51,   -51,   -51,
     -51,    30,    33,    53,   178,   -27,     1,     1,    40,    23,
     153,   226,   226,   -51,   -51,   -51,   -51,   -51,   -51,     5,
     178,   178,   178,   178,   242,    14,    21,   178,   206,   206,
     -51,    59,   -51,   -11,    -9,   -51,   299,   -51,   299,   178,
     -25,    24,    24,   261,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   -51,   178,
     -51,   -51,   280,     8,    64,     1,   178,   205,    25,   -51,
     317,   334,   351,   351,   351,   351,   351,   351,   -50,   -50,
      24,    24,    24,    24,    24,   -51,   206,   -51,   -51,   -51,
     152,   178,   -51,   -51,    71,   178,   205,   -51,    77,   -51,
     206,   178,    65,    22,   -51,   206,    67,   -51
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     5,     6,     0,     0,    16,    16,
       0,    16,     3,     0,     0,     4,    13,    10,    11,    14,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,    31,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,    15,    42,    43,    25,    24,    27,    26,    54,
      53,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
      29,    30,     0,     0,     0,     0,     0,    56,     0,    37,
      52,    51,    46,    48,    45,    47,    49,    50,    32,    33,
      34,    35,    36,    40,    41,    23,     0,    17,    19,    20,
       0,     0,    55,    44,     0,     0,    56,    18,     0,    57,
       0,     0,     0,     0,    21,     0,     0,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -51,   -51,    73,   -10,   -51,     4,   -51,   -51,   -51,   -51,
     -26,     0,   -51,   -51,   -24,   -51,   -23
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    15,    16,    26,    17,    18,    19,    20,
      48,    21,    22,    23,    44,    88,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      28,    49,    74,    75,    76,    77,     3,    56,    58,    79,
      45,    24,    46,    27,    25,    29,    60,    61,    62,    63,
     106,   107,    31,    82,    32,    72,    73,    74,    75,    76,
      77,    55,    57,    33,    79,    87,    34,   125,    83,    84,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    85,   104,    35,    47,    50,   109,
      51,    59,   110,    64,    65,    66,    67,    68,    69,    70,
      71,    80,    72,    73,    74,    75,    76,    77,    81,    86,
     108,    79,   113,    79,   117,    30,   124,   116,   127,     0,
       0,   118,   120,   119,     0,     0,   114,   123,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,   126,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,     0,    72,    73,    74,
      75,    76,    77,     0,    -2,     4,    79,     5,     6,     0,
       7,     0,     0,     0,     8,     0,     0,     0,     9,     0,
       0,    10,     0,    11,     4,     0,     5,     6,     0,     7,
       0,     0,     0,     8,     0,    12,     0,     9,     0,     0,
      10,    13,    11,    14,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    52,     0,     0,     0,     0,
      13,     0,    14,    64,    65,    66,    67,    68,    69,    70,
      71,     0,    72,    73,    74,    75,    76,    77,     0,     5,
       6,    79,     7,    36,     0,    37,     8,    38,    39,     0,
       9,     0,     0,    10,     0,    11,     0,    40,    41,    42,
       0,     0,     0,     0,    43,     0,     0,    12,     0,   111,
       0,     0,     0,    13,     0,    14,    64,    65,    66,    67,
      68,    69,    70,    71,     0,    72,    73,    74,    75,    76,
      77,    36,     0,    53,    79,    54,    39,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,    42,     0,     0,
       0,     0,    43,    64,    65,    66,    67,    68,    69,    70,
      71,     0,    72,    73,    74,    75,    76,    77,     0,    78,
       0,    79,    64,    65,    66,    67,    68,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,     0,    89,     0,
      79,    64,    65,    66,    67,    68,    69,    70,    71,     0,
      72,    73,    74,    75,    76,    77,     0,   105,     0,    79,
      64,    65,    66,    67,    68,    69,    70,    71,     0,    72,
      73,    74,    75,    76,    77,     0,     0,     0,    79,    65,
      66,    67,    68,    69,    70,    71,     0,    72,    73,    74,
      75,    76,    77,     0,     0,     0,    79,    66,    67,    68,
      69,    70,    71,     0,    72,    73,    74,    75,    76,    77,
       0,     0,     0,    79,    -3,    -3,    -3,    -3,    -3,    -3,
       0,    72,    73,    74,    75,    76,    77,     0,     0,     0,
      79
};

static const yytype_int8 yycheck[] =
{
      10,    27,    52,    53,    54,    55,     0,    31,    32,    59,
      37,    56,    39,     9,    56,    11,    40,    41,    42,    43,
      12,    13,    33,    47,    33,    50,    51,    52,    53,    54,
      55,    31,    32,     3,    59,    59,     3,    15,    48,    49,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    50,    79,     3,    56,    18,    85,
      37,    56,    86,    41,    42,    43,    44,    45,    46,    47,
      48,    57,    50,    51,    52,    53,    54,    55,    57,    20,
      16,    59,    57,    59,    13,    12,    21,   111,    21,    -1,
      -1,   115,    15,   116,    -1,    -1,   106,   121,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,    -1,    -1,   125,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    -1,     0,     1,    59,     3,     4,    -1,
       6,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    -1,    19,     1,    -1,     3,     4,    -1,     6,
      -1,    -1,    -1,    10,    -1,    31,    -1,    14,    -1,    -1,
      17,    37,    19,    39,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      37,    -1,    39,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    -1,     3,
       4,    59,     6,    35,    -1,    37,    10,    39,    40,    -1,
      14,    -1,    -1,    17,    -1,    19,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    31,    -1,    34,
      -1,    -1,    -1,    37,    -1,    39,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    35,    -1,    37,    59,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    -1,    -1,
      -1,    -1,    56,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    -1,    57,
      -1,    59,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    -1,    57,    -1,
      59,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    -1,    57,    -1,    59,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    59,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    59,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    59,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    61,    62,     0,     1,     3,     4,     6,    10,    14,
      17,    19,    31,    37,    39,    63,    64,    66,    67,    68,
      69,    71,    72,    73,    56,    56,    65,    65,    63,    65,
      62,    33,    33,     3,     3,     3,    35,    37,    39,    40,
      49,    50,    51,    56,    74,    37,    39,    56,    70,    70,
      18,    37,    32,    37,    39,    71,    74,    71,    74,    56,
      74,    74,    74,    74,    41,    42,    43,    44,    45,    46,
      47,    48,    50,    51,    52,    53,    54,    55,    57,    59,
      57,    57,    74,    63,    63,    65,    20,    74,    75,    57,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    57,    12,    13,    16,    70,
      74,    34,    76,    57,    63,    23,    74,    13,    74,    76,
      15,    22,    63,    74,    21,    15,    63,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    64,    65,    66,    66,    67,
      68,    69,    69,    70,    71,    71,    71,    71,    72,    73,
      73,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    75,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     0,     5,     7,     5,
       5,    10,    12,     3,     3,     3,     3,     3,     4,     4,
       4,     1,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     1,     1,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     0,     2,     0,     3
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
#line 242 "interpreter.y"
                  { 
		    // Create a new AST
			(yyval.prog) = new lp::AST((yyvsp[0].stmts)); 

			// Assign the AST to the root
			root = (yyval.prog); 

			// End of parsing
			//	return 1;
		  }
#line 1641 "interpreter.tab.c"
    break;

  case 3:
#line 255 "interpreter.y"
                  { 
			// create a empty list of statements
			(yyval.stmts) = new std::list<lp::Statement *>(); 
		  }
#line 1650 "interpreter.tab.c"
    break;

  case 4:
#line 261 "interpreter.y"
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
#line 1676 "interpreter.tab.c"
    break;

  case 5:
#line 284 "interpreter.y"
      { 
			 // just copy up the stmtlist when an error occurs
			 (yyval.stmts) = (yyvsp[-1].stmts);

			 // The previous look-ahead token ought to be discarded with `yyclearin;'
			 yyclearin; 
       }
#line 1688 "interpreter.tab.c"
    break;

  case 6:
#line 295 "interpreter.y"
          {
		// Create a new empty statement node
		(yyval.st) = new lp::EmptyStmt(); 
	  }
#line 1697 "interpreter.tab.c"
    break;

  case 7:
#line 300 "interpreter.y"
          {
		// Default action
		// $$ = $1;
	  }
#line 1706 "interpreter.tab.c"
    break;

  case 8:
#line 305 "interpreter.y"
          {
		// Default action
		// $$ = $1;
	  }
#line 1715 "interpreter.tab.c"
    break;

  case 9:
#line 310 "interpreter.y"
          {
		// Default action
		// $$ = $1;
	  }
#line 1724 "interpreter.tab.c"
    break;

  case 10:
#line 316 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1733 "interpreter.tab.c"
    break;

  case 11:
#line 322 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1742 "interpreter.tab.c"
    break;

  case 12:
#line 327 "interpreter.y"
        {
		// Default action
		// $$ = $1;
	}
#line 1751 "interpreter.tab.c"
    break;

  case 13:
#line 333 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1760 "interpreter.tab.c"
    break;

  case 14:
#line 338 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1769 "interpreter.tab.c"
    break;

  case 15:
#line 346 "interpreter.y"
                {
			// Create a new block of statements node
			(yyval.st) = new lp::BlockStmt((yyvsp[-1].stmts)); 
		}
#line 1778 "interpreter.tab.c"
    break;

  case 16:
#line 353 "interpreter.y"
                {
			// To control the interactive mode in "if" and "while" sentences
			control++;
		}
#line 1787 "interpreter.tab.c"
    break;

  case 17:
#line 362 "interpreter.y"
    {
		// Create a new if statement node
		(yyval.st) = new lp::IfStmt((yyvsp[-2].expNode), (yyvsp[-1].st));

		// To control the interactive mode
		control--;
	}
#line 1799 "interpreter.tab.c"
    break;

  case 18:
#line 372 "interpreter.y"
         {
		// Create a new if statement node
		(yyval.st) = new lp::IfStmt((yyvsp[-4].expNode), (yyvsp[-3].st), (yyvsp[-1].st));

		// To control the interactive mode
		control--;
	 }
#line 1811 "interpreter.tab.c"
    break;

  case 19:
#line 383 "interpreter.y"
                {
			// Create a new while statement node
			(yyval.st) = new lp::WhileStmt((yyvsp[-2].expNode), (yyvsp[-1].st));

			// To control the interactive mode
			control--;
    }
#line 1823 "interpreter.tab.c"
    break;

  case 20:
#line 393 "interpreter.y"
                {
			// Create a new while statement node
			(yyval.st) = new lp::RepeatStmt((yyvsp[0].expNode), (yyvsp[-3].st));

			// To control the interactive mode
			control--;
    }
#line 1835 "interpreter.tab.c"
    break;

  case 21:
#line 403 "interpreter.y"
                {
			(yyval.st) = new lp::ForStmt((yyvsp[-7].string), (yyvsp[-5].expNode), (yyvsp[-3].expNode), (yyvsp[-1].st));

			control --;
		}
#line 1845 "interpreter.tab.c"
    break;

  case 22:
#line 409 "interpreter.y"
                {
			(yyval.st) = new lp::ForStmt((yyvsp[-9].string), (yyvsp[-7].expNode), (yyvsp[-5].expNode), (yyvsp[-3].expNode), (yyvsp[-1].st));

			control --;
		}
#line 1855 "interpreter.tab.c"
    break;

  case 23:
#line 420 "interpreter.y"
                { 
			(yyval.expNode) = (yyvsp[-1].expNode);
		}
#line 1863 "interpreter.tab.c"
    break;

  case 24:
#line 427 "interpreter.y"
                { 
			// Create a new assignment node
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), (yyvsp[0].expNode));
		}
#line 1872 "interpreter.tab.c"
    break;

  case 25:
#line 433 "interpreter.y"
                { 
			// Create a new assignment node
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), (lp::AssignmentStmt *) (yyvsp[0].st));
		}
#line 1881 "interpreter.tab.c"
    break;

  case 26:
#line 440 "interpreter.y"
                {   
 			execerror("Semantic error in assignment: it is not allowed to modify a constant ", (yyvsp[-2].string));
		}
#line 1889 "interpreter.tab.c"
    break;

  case 27:
#line 445 "interpreter.y"
                {   
 			execerror("Semantic error in multiple assignment: it is not allowed to modify a constant ",(yyvsp[-2].string));
		}
#line 1897 "interpreter.tab.c"
    break;

  case 28:
#line 451 "interpreter.y"
                {
			// Create a new print node
			 (yyval.st) = new lp::PrintStmt((yyvsp[-1].expNode));
		}
#line 1906 "interpreter.tab.c"
    break;

  case 29:
#line 458 "interpreter.y"
                {
			// Create a new read node
			 (yyval.st) = new lp::ReadStmt((yyvsp[-1].string));
		}
#line 1915 "interpreter.tab.c"
    break;

  case 30:
#line 465 "interpreter.y"
                {   
 			execerror("Semantic error in \"read statement\": it is not allowed to modify a constant ",(yyvsp[-1].string));
		}
#line 1923 "interpreter.tab.c"
    break;

  case 31:
#line 472 "interpreter.y"
                { 
			// Create a new number node
			(yyval.expNode) = new lp::NumberNode((yyvsp[0].number));
		}
#line 1932 "interpreter.tab.c"
    break;

  case 32:
#line 478 "interpreter.y"
                { 
			// Create a new plus node
			 (yyval.expNode) = new lp::PlusNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		 }
#line 1941 "interpreter.tab.c"
    break;

  case 33:
#line 484 "interpreter.y"
        {
			// Create a new minus node
			(yyval.expNode) = new lp::MinusNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 1950 "interpreter.tab.c"
    break;

  case 34:
#line 490 "interpreter.y"
                { 
			// Create a new multiplication node
			(yyval.expNode) = new lp::MultiplicationNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 1959 "interpreter.tab.c"
    break;

  case 35:
#line 496 "interpreter.y"
                {
		  // Create a new division node	
		  (yyval.expNode) = new lp::DivisionNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
	   }
#line 1968 "interpreter.tab.c"
    break;

  case 36:
#line 502 "interpreter.y"
                {
		  // Create a new division node	
		  (yyval.expNode) = new lp::DivisionENode((yyvsp[-2].expNode), (yyvsp[0].expNode));
	   }
#line 1977 "interpreter.tab.c"
    break;

  case 37:
#line 508 "interpreter.y"
        { 
		    // just copy up the expression node 
			(yyval.expNode) = (yyvsp[-1].expNode);
		 }
#line 1986 "interpreter.tab.c"
    break;

  case 38:
#line 514 "interpreter.y"
                { 
		  // Create a new unary plus node	
  		  (yyval.expNode) = new lp::UnaryPlusNode((yyvsp[0].expNode));
		}
#line 1995 "interpreter.tab.c"
    break;

  case 39:
#line 520 "interpreter.y"
                { 
		  // Create a new unary minus node	
  		  (yyval.expNode) = new lp::UnaryMinusNode((yyvsp[0].expNode));
		}
#line 2004 "interpreter.tab.c"
    break;

  case 40:
#line 526 "interpreter.y"
                {
		  // Create a new modulo node	

		  (yyval.expNode) = new lp::ModuloNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
       }
#line 2014 "interpreter.tab.c"
    break;

  case 41:
#line 533 "interpreter.y"
        { 
		  // Create a new power node	
  		  (yyval.expNode) = new lp::PowerNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2023 "interpreter.tab.c"
    break;

  case 42:
#line 539 "interpreter.y"
                {
		  // Create a new variable node	
		  (yyval.expNode) = new lp::VariableNode((yyvsp[0].string));
		}
#line 2032 "interpreter.tab.c"
    break;

  case 43:
#line 545 "interpreter.y"
                {
		  // Create a new constant node	
		  (yyval.expNode) = new lp::ConstantNode((yyvsp[0].string));

		}
#line 2042 "interpreter.tab.c"
    break;

  case 44:
#line 552 "interpreter.y"
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
#line 2092 "interpreter.tab.c"
    break;

  case 45:
#line 599 "interpreter.y"
                {
		  // Create a new "greater than" node	
 			(yyval.expNode) = new lp::GreaterThanNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2101 "interpreter.tab.c"
    break;

  case 46:
#line 605 "interpreter.y"
                {
		  // Create a new "greater or equal" node	
 			(yyval.expNode) = new lp::GreaterOrEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2110 "interpreter.tab.c"
    break;

  case 47:
#line 611 "interpreter.y"
                {
		  // Create a new "less than" node	
 			(yyval.expNode) = new lp::LessThanNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2119 "interpreter.tab.c"
    break;

  case 48:
#line 617 "interpreter.y"
                {
		  // Create a new "less or equal" node	
 			(yyval.expNode) = new lp::LessOrEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2128 "interpreter.tab.c"
    break;

  case 49:
#line 623 "interpreter.y"
                {
		  // Create a new "equal" node	
 			(yyval.expNode) = new lp::EqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2137 "interpreter.tab.c"
    break;

  case 50:
#line 629 "interpreter.y"
                {
		  // Create a new "not equal" node	
 			(yyval.expNode) = new lp::NotEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2146 "interpreter.tab.c"
    break;

  case 51:
#line 635 "interpreter.y"
                {
		  // Create a new "logic and" node	
 			(yyval.expNode) = new lp::AndNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2155 "interpreter.tab.c"
    break;

  case 52:
#line 641 "interpreter.y"
                {
		  // Create a new "logic or" node	
 			(yyval.expNode) = new lp::OrNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2164 "interpreter.tab.c"
    break;

  case 53:
#line 647 "interpreter.y"
                {
		  // Create a new "logic negation" node	
 			(yyval.expNode) = new lp::NotNode((yyvsp[0].expNode));
		}
#line 2173 "interpreter.tab.c"
    break;

  case 54:
#line 656 "interpreter.y"
                        {
			    // Create a new list STL
				(yyval.parameters) = new std::list<lp::ExpNode *>(); 
			}
#line 2182 "interpreter.tab.c"
    break;

  case 55:
#line 662 "interpreter.y"
                        {
				(yyval.parameters) = (yyvsp[0].parameters);

				// Insert the expression in the list of expressions
				(yyval.parameters)->push_front((yyvsp[-1].expNode));
			}
#line 2193 "interpreter.tab.c"
    break;

  case 56:
#line 672 "interpreter.y"
                        {
			    // Create a new list STL
				(yyval.parameters) = new std::list<lp::ExpNode *>(); 
			}
#line 2202 "interpreter.tab.c"
    break;

  case 57:
#line 678 "interpreter.y"
                        {
				// Get the list of expressions
				(yyval.parameters) = (yyvsp[0].parameters);

				// Insert the expression in the list of expressions
				(yyval.parameters)->push_front((yyvsp[-1].expNode));
			}
#line 2214 "interpreter.tab.c"
    break;


#line 2218 "interpreter.tab.c"

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
#line 689 "interpreter.y"




