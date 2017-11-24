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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    tinumber = 259,
    tfnumber = 260,
    tstring = 261,
    tconst = 262,
    telse = 263,
    tif = 264,
    tint = 265,
    treturn = 266,
    tvoid = 267,
    twhile = 268,
    tfloat = 269,
    tfor = 270,
    tchar = 271,
    tequal = 272,
    tnotequ = 273,
    tlesse = 274,
    tless = 275,
    tgreate = 276,
    tgreat = 277,
    tand = 278,
    tor = 279,
    tinc = 280,
    tdec = 281,
    taddAssign = 282,
    tsubAssign = 283,
    tmulAssign = 284,
    tdivAssign = 285,
    topen = 286,
    tclose = 287,
    oopen = 288,
    cclose = 289,
    comma = 290,
    semi = 291,
    ttinc = 292,
    ttdec = 293,
    ttdiv = 294,
    ttmul = 295,
    ttmod = 296,
    arrayopen = 297,
    arrayclose = 298,
    equal = 299,
    not = 300,
    less = 301,
    bigger = 302,
    LOWER_THAN_ELSE = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "parser.y" /* yacc.c:1909  */

	struct nodeType* node;
	char* ch_val;
	int int_val;

#line 109 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
