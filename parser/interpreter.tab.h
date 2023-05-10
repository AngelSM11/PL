/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    CADENA = 259,
    COMENTARIO = 260,
    COMENTARIOSIMPLE = 261,
    PRINT = 262,
    READ = 263,
    IF = 264,
    ELSE = 265,
    WHILE = 266,
    LETFCURLYBRACKET = 267,
    RIGHTCURLYBRACKET = 268,
    ASSIGNMENT = 269,
    COMMA = 270,
    NUMBER = 271,
    BOOL = 272,
    VARIABLE = 273,
    UNDEFINED = 274,
    CONSTANT = 275,
    BUILTIN = 276,
    OR = 277,
    AND = 278,
    GREATER_OR_EQUAL = 279,
    LESS_OR_EQUAL = 280,
    GREATER_THAN = 281,
    LESS_THAN = 282,
    EQUAL = 283,
    NOT_EQUAL = 284,
    NOT = 285,
    PLUS = 286,
    MINUS = 287,
    MULTIPLICATION = 288,
    DIVISION = 289,
    DIVISION_ENTERA = 290,
    MODULO = 291,
    LPAREN = 292,
    RPAREN = 293,
    UNARY = 294,
    POWER = 295,
    
    READSTRING = 296,
    
    PRINTSTRING = 297,
    
    THEN = 298,
    
    ENDIF = 299,
    
    DO = 300,
    REPEAT = 301,
    UNTIL = 302,
    FOR = 303,
    FROM = 304,
    TO = 305,
    STEP = 306,
    ENDFOR = 307,
    CASE = 308,
    VALUE = 309,
    DEFAULT =310,
    ENDCASE = 311,
    ENDWHILE = 312
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

#line 109 "interpreter.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */
