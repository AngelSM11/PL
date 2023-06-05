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
    CONCATENATION = 283,
    NOT = 284,
    OR = 285,
    AND = 286,
    CLEARSCREEN = 287,
    PLACE_T = 288,
    LETFCURLYBRACKET = 289,
    RIGHTCURLYBRACKET = 290,
    ASSIGNMENT = 291,
    COMMA = 292,
    COLON = 293,
    NUMBER = 294,
    BOOL = 295,
    VARIABLE = 296,
    CADENA = 297,
    UNDEFINED = 298,
    CONSTANT = 299,
    BUILTIN = 300,
    GREATER_OR_EQUAL = 301,
    LESS_OR_EQUAL = 302,
    GREATER_THAN = 303,
    LESS_THAN = 304,
    EQUAL = 305,
    NOT_EQUAL = 306,
    PLUS = 307,
    MINUS = 308,
    MULTIPLICATION = 309,
    DIVISION = 310,
    DIVISION_ENTERA = 311,
    MODULO = 312,
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

#line 134 "interpreter.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */
