/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    tident = 258,
    tnumber = 259,
    tconst = 260,
    telse = 261,
    tif = 262,
    treturn = 263,
    tint = 264,
    tvoid = 265,
    twhile = 266,
    taddAssign = 267,
    tsubAssign = 268,
    tmulAssign = 269,
    tdivAssign = 270,
    tmodAssign = 271,
    tor = 272,
    tand = 273,
    tequal = 274,
    tnotequ = 275,
    tgreate = 276,
    tlesse = 277,
    tinc = 278,
    tdec = 279,
    IFX = 280
  };
#endif
/* Tokens.  */
#define tident 258
#define tnumber 259
#define tconst 260
#define telse 261
#define tif 262
#define treturn 263
#define tint 264
#define tvoid 265
#define twhile 266
#define taddAssign 267
#define tsubAssign 268
#define tmulAssign 269
#define tdivAssign 270
#define tmodAssign 271
#define tor 272
#define tand 273
#define tequal 274
#define tnotequ 275
#define tgreate 276
#define tlesse 277
#define tinc 278
#define tdec 279
#define IFX 280
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 13 "miniC.y"

	char ch_val[NAMESIZE];
	int int_val;
	Node *ast_pt;

/* Line 1676 of yacc.c  */
#line 86 "miniC.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
