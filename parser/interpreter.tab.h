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
    CONCATENATION = 286,
    NOT = 287,
    OR = 288,
    AND = 289,
    CLEARSCREEN = 290,
    LETFCURLYBRACKET = 291,
    RIGHTCURLYBRACKET = 292,
    ASSIGNMENT = 293,
    COMMA = 294,
    COLON = 295,
    NUMBER = 296,
    BOOL = 297,
    VARIABLE = 298,
    UNDEFINED = 299,
    CONSTANT = 300,
    BUILTIN = 301,
    GREATER_OR_EQUAL = 302,
    LESS_OR_EQUAL = 303,
    GREATER_THAN = 304,
    LESS_THAN = 305,
    EQUAL = 306,
    NOT_EQUAL = 307,
    PLUS = 308,
    MINUS = 309,
    MULTIPLICATION = 310,
    DIVISION = 311,
    DIVISION_ENTERA = 312,
    MODULO = 313,
    LPAREN = 314,
    RPAREN = 315,
    UNARY = 316,
    POWER = 317
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

#line 135 "interpreter.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */
