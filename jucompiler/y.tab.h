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
    BOOLLIT = 258,
    PARSEINT = 259,
    AND = 260,
    ASSIGN = 261,
    STAR = 262,
    COMMA = 263,
    DIV = 264,
    EQ = 265,
    GE = 266,
    GT = 267,
    LBRACE = 268,
    LE = 269,
    LPAR = 270,
    LSQ = 271,
    LT = 272,
    MINUS = 273,
    MOD = 274,
    NE = 275,
    NOT = 276,
    OR = 277,
    ELSE = 278,
    INT = 279,
    DOUBLE = 280,
    RPAR = 281,
    RSQ = 282,
    PLUS = 283,
    RBRACE = 284,
    SQ = 285,
    SEMICOLON = 286,
    ARROW = 287,
    LSHIFT = 288,
    RSHIFT = 289,
    XOR = 290,
    DOTLENGTH = 291,
    PRINT = 292,
    BOOL = 293,
    WHILE = 294,
    VOID = 295,
    STRING = 296,
    STATIC = 297,
    PUBLIC = 298,
    CLASS = 299,
    IF = 300,
    RETURN = 301,
    ID = 302,
    STRLIT = 303,
    REALLIT = 304,
    RESERVED = 305,
    INTLIT = 306,
    IF2 = 307,
    MUL = 308
  };
#endif
/* Tokens.  */
#define BOOLLIT 258
#define PARSEINT 259
#define AND 260
#define ASSIGN 261
#define STAR 262
#define COMMA 263
#define DIV 264
#define EQ 265
#define GE 266
#define GT 267
#define LBRACE 268
#define LE 269
#define LPAR 270
#define LSQ 271
#define LT 272
#define MINUS 273
#define MOD 274
#define NE 275
#define NOT 276
#define OR 277
#define ELSE 278
#define INT 279
#define DOUBLE 280
#define RPAR 281
#define RSQ 282
#define PLUS 283
#define RBRACE 284
#define SQ 285
#define SEMICOLON 286
#define ARROW 287
#define LSHIFT 288
#define RSHIFT 289
#define XOR 290
#define DOTLENGTH 291
#define PRINT 292
#define BOOL 293
#define WHILE 294
#define VOID 295
#define STRING 296
#define STATIC 297
#define PUBLIC 298
#define CLASS 299
#define IF 300
#define RETURN 301
#define ID 302
#define STRLIT 303
#define REALLIT 304
#define RESERVED 305
#define INTLIT 306
#define IF2 307
#define MUL 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "jucompiler.y" /* yacc.c:1909  */

int ival;
char * cval;


#line 166 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
