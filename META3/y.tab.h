/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     STRLIT = 259,
     REALLIT = 260,
     RESERVED = 261,
     INTLIT = 262,
     DOUBLE = 263,
     BOOL = 264,
     BOOLLIT = 265,
     VOID = 266,
     PLUS = 267,
     RBRACE = 268,
     SQ = 269,
     SEMICOLON = 270,
     ARROW = 271,
     LSHIFT = 272,
     RSHIFT = 273,
     XOR = 274,
     DOTLENGTH = 275,
     PRINT = 276,
     WHILE = 277,
     STRING = 278,
     STATIC = 279,
     PUBLIC = 280,
     CLASS = 281,
     IF = 282,
     RETURN = 283,
     END = 284,
     PARSEINT = 285,
     AND = 286,
     ASSIGN = 287,
     STAR = 288,
     COMMA = 289,
     DIV = 290,
     EQ = 291,
     GE = 292,
     GT = 293,
     LBRACE = 294,
     LE = 295,
     LPAR = 296,
     LSQ = 297,
     LT = 298,
     MINUS = 299,
     MOD = 300,
     NE = 301,
     NOT = 302,
     OR = 303,
     ELSE = 304,
     INT = 305,
     RPAR = 306,
     RSQ = 307,
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
#define PLUS 267
#define RBRACE 268
#define SQ 269
#define SEMICOLON 270
#define ARROW 271
#define LSHIFT 272
#define RSHIFT 273
#define XOR 274
#define DOTLENGTH 275
#define PRINT 276
#define WHILE 277
#define STRING 278
#define STATIC 279
#define PUBLIC 280
#define CLASS 281
#define IF 282
#define RETURN 283
#define END 284
#define PARSEINT 285
#define AND 286
#define ASSIGN 287
#define STAR 288
#define COMMA 289
#define DIV 290
#define EQ 291
#define GE 292
#define GT 293
#define LBRACE 294
#define LE 295
#define LPAR 296
#define LSQ 297
#define LT 298
#define MINUS 299
#define MOD 300
#define NE 301
#define NOT 302
#define OR 303
#define ELSE 304
#define INT 305
#define RPAR 306
#define RSQ 307
#define IF2 308
#define preced 309




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 26 "jucompiler.y"
{
    int ival;
    s_Token tok;
    s_Tree tree;
}
/* Line 1529 of yacc.c.  */
#line 163 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

