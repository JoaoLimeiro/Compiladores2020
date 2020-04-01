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
     BOOLLIT = 263,
     PARSEINT = 264,
     AND = 265,
     ASSIGN = 266,
     STAR = 267,
     COMMA = 268,
     DIV = 269,
     EQ = 270,
     GE = 271,
     GT = 272,
     LBRACE = 273,
     LE = 274,
     LPAR = 275,
     LSQ = 276,
     LT = 277,
     MINUS = 278,
     MOD = 279,
     NE = 280,
     NOT = 281,
     OR = 282,
     ELSE = 283,
     INT = 284,
     DOUBLE = 285,
     RPAR = 286,
     RSQ = 287,
     PLUS = 288,
     RBRACE = 289,
     SQ = 290,
     SEMICOLON = 291,
     ARROW = 292,
     LSHIFT = 293,
     RSHIFT = 294,
     XOR = 295,
     DOTLENGTH = 296,
     PRINT = 297,
     BOOL = 298,
     WHILE = 299,
     VOID = 300,
     STRING = 301,
     STATIC = 302,
     PUBLIC = 303,
     CLASS = 304,
     IF = 305,
     RETURN = 306,
     END = 307,
     IF2 = 308,
     MUL = 309
   };
#endif
/* Tokens.  */
#define ID 258
#define STRLIT 259
#define REALLIT 260
#define RESERVED 261
#define INTLIT 262
#define BOOLLIT 263
#define PARSEINT 264
#define AND 265
#define ASSIGN 266
#define STAR 267
#define COMMA 268
#define DIV 269
#define EQ 270
#define GE 271
#define GT 272
#define LBRACE 273
#define LE 274
#define LPAR 275
#define LSQ 276
#define LT 277
#define MINUS 278
#define MOD 279
#define NE 280
#define NOT 281
#define OR 282
#define ELSE 283
#define INT 284
#define DOUBLE 285
#define RPAR 286
#define RSQ 287
#define PLUS 288
#define RBRACE 289
#define SQ 290
#define SEMICOLON 291
#define ARROW 292
#define LSHIFT 293
#define RSHIFT 294
#define XOR 295
#define DOTLENGTH 296
#define PRINT 297
#define BOOL 298
#define WHILE 299
#define VOID 300
#define STRING 301
#define STATIC 302
#define PUBLIC 303
#define CLASS 304
#define IF 305
#define RETURN 306
#define END 307
#define IF2 308
#define MUL 309




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 25 "jucompiler.y"
{

    int ival;
    char * cval;
    s_Tree tree;
}
/* Line 1529 of yacc.c.  */
#line 164 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

