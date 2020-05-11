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
    ID = 258,
    STRLIT = 259,
    REALLIT = 260,
    RESERVED = 261,
    INTLIT = 262,
    DOUBLE = 263,
    BOOL = 264,
    BOOLLIT = 265,
    VOID = 266,
    PARSEINT = 267,
    AND = 268,
    ASSIGN = 269,
    STAR = 270,
    COMMA = 271,
    DIV = 272,
    EQ = 273,
    GE = 274,
    GT = 275,
    LBRACE = 276,
    LE = 277,
    LPAR = 278,
    LSQ = 279,
    LT = 280,
    MINUS = 281,
    MOD = 282,
    NE = 283,
    NOT = 284,
    OR = 285,
    ELSE = 286,
    INT = 287,
    RPAR = 288,
    RSQ = 289,
    PLUS = 290,
    RBRACE = 291,
    SQ = 292,
    SEMICOLON = 293,
    ARROW = 294,
    LSHIFT = 295,
    RSHIFT = 296,
    XOR = 297,
    DOTLENGTH = 298,
    PRINT = 299,
    WHILE = 300,
    STRING = 301,
    STATIC = 302,
    PUBLIC = 303,
    CLASS = 304,
    IF = 305,
    RETURN = 306,
    END = 307,
    IF2 = 308,
    preced = 309
  };
#endif
/* Tokens.  */
#define ID 258
#define STRLIT 259
#define REALLIT 260
#define RESERVED 261
#define INTLIT 262
#define DOUBLE 263
#define BOOL 264
#define BOOLLIT 265
#define VOID 266
#define PARSEINT 267
#define AND 268
#define ASSIGN 269
#define STAR 270
#define COMMA 271
#define DIV 272
#define EQ 273
#define GE 274
#define GT 275
#define LBRACE 276
#define LE 277
#define LPAR 278
#define LSQ 279
#define LT 280
#define MINUS 281
#define MOD 282
#define NE 283
#define NOT 284
#define OR 285
#define ELSE 286
#define INT 287
#define RPAR 288
#define RSQ 289
#define PLUS 290
#define RBRACE 291
#define SQ 292
#define SEMICOLON 293
#define ARROW 294
#define LSHIFT 295
#define RSHIFT 296
#define XOR 297
#define DOTLENGTH 298
#define PRINT 299
#define WHILE 300
#define STRING 301
#define STATIC 302
#define PUBLIC 303
#define CLASS 304
#define IF 305
#define RETURN 306
#define END 307
#define IF2 308
#define preced 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "jucompiler.y" /* yacc.c:1909  */

    int ival;
    char * cval;
    s_Tree tree;

#line 168 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
