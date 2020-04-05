/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     MUL = 309
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
#define MUL 309




/* Copy the first part of user declarations.  */
#line 1 "jucompiler.y"


#define NO_VALUE ""
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

    int yylex(void);
    void yyerror (const char *s);

 	int flagDontPrintTree = 0;

s_Tree myprogram, tmp, tmp1;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 22 "jucompiler.y"
{
    int ival;
    char * cval;
    s_Tree tree;
}
/* Line 193 of yacc.c.  */
#line 227 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 240 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   451

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNRULES -- Number of states.  */
#define YYNSTATES  171

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    12,    15,    18,    19,    24,    31,
      34,    38,    39,    41,    43,    45,    51,    57,    61,    66,
      67,    72,    73,    77,    80,    83,    84,    89,    93,    99,
     107,   113,   116,   119,   125,   128,   129,   132,   134,   136,
     138,   140,   142,   144,   146,   147,   153,   157,   163,   167,
     169,   170,   174,   182,   188,   190,   192,   196,   200,   204,
     208,   212,   216,   220,   224,   228,   232,   236,   240,   244,
     248,   252,   256,   259,   262,   265,   269,   273,   275,   277,
     279,   282,   284,   286
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    49,     3,    21,    57,    36,    -1,    58,
      57,    -1,    59,    57,    -1,    38,    57,    -1,    -1,    48,
      47,    62,    65,    -1,    48,    47,    61,     3,    60,    38,
      -1,     1,    38,    -1,    16,     3,    60,    -1,    -1,     9,
      -1,    32,    -1,     8,    -1,    11,     3,    23,    63,    33,
      -1,    61,     3,    23,    63,    33,    -1,    61,     3,    64,
      -1,    46,    24,    34,     3,    -1,    -1,    16,    61,     3,
      64,    -1,    -1,    21,    66,    36,    -1,    68,    66,    -1,
      67,    66,    -1,    -1,    61,     3,    60,    38,    -1,    21,
      69,    36,    -1,    50,    23,    77,    33,    68,    -1,    50,
      23,    77,    33,    68,    31,    68,    -1,    45,    23,    77,
      33,    68,    -1,    51,    70,    -1,    72,    38,    -1,    44,
      23,    71,    33,    38,    -1,    68,    69,    -1,    -1,    77,
      38,    -1,    38,    -1,    77,    -1,     4,    -1,    73,    -1,
      75,    -1,    76,    -1,     1,    -1,    -1,     3,    23,    77,
      74,    33,    -1,     3,    23,    33,    -1,     3,    23,    77,
       1,    33,    -1,    16,    77,    74,    -1,     7,    -1,    -1,
       3,    14,    77,    -1,    12,    23,     3,    24,    77,    34,
      33,    -1,    12,    23,     3,     1,    33,    -1,    75,    -1,
      78,    -1,    78,    35,    78,    -1,    78,    26,    78,    -1,
      78,    15,    78,    -1,    78,    17,    78,    -1,    78,    27,
      78,    -1,    78,    13,    78,    -1,    78,    30,    78,    -1,
      78,    42,    78,    -1,    78,    40,    78,    -1,    78,    41,
      78,    -1,    78,    18,    78,    -1,    78,    19,    78,    -1,
      78,    20,    78,    -1,    78,    22,    78,    -1,    78,    25,
      78,    -1,    78,    28,    78,    -1,    35,    78,    -1,    26,
      78,    -1,    29,    78,    -1,    23,    77,    33,    -1,    23,
       1,    33,    -1,    73,    -1,    76,    -1,     3,    -1,     3,
      43,    -1,     7,    -1,     5,    -1,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    60,    64,    68,    70,    75,    82,    89,
      94,    99,   103,   105,   107,   113,   124,   137,   143,   150,
     155,   161,   166,   174,   180,   185,   189,   200,   203,   209,
     217,   223,   227,   230,   239,   244,   250,   252,   259,   261,
     267,   270,   273,   276,   278,   285,   292,   298,   310,   313,
     315,   320,   333,   339,   348,   350,   356,   361,   366,   371,
     376,   381,   386,   391,   396,   401,   406,   411,   416,   421,
     426,   431,   436,   440,   444,   448,   451,   455,   458,   461,
     464,   467,   469,   471
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRLIT", "REALLIT", "RESERVED",
  "INTLIT", "DOUBLE", "BOOL", "BOOLLIT", "VOID", "PARSEINT", "AND",
  "ASSIGN", "STAR", "COMMA", "DIV", "EQ", "GE", "GT", "LBRACE", "LE",
  "LPAR", "LSQ", "LT", "MINUS", "MOD", "NE", "NOT", "OR", "ELSE", "INT",
  "RPAR", "RSQ", "PLUS", "RBRACE", "SQ", "SEMICOLON", "ARROW", "LSHIFT",
  "RSHIFT", "XOR", "DOTLENGTH", "PRINT", "WHILE", "STRING", "STATIC",
  "PUBLIC", "CLASS", "IF", "RETURN", "END", "IF2", "MUL", "$accept",
  "Program", "Declaring", "MethodDecl", "FieldDecl", "CommaId", "Type",
  "MethodHeader", "FormalParams", "CommaTypeId", "MethodBody",
  "StatementVarDecl", "VarDecl", "Statement", "Statement2",
  "ExprSemicolon", "ExprOrStrlit", "MethodInvAssParseArgs",
  "MethodInvocation", "CommaExpr", "Assignment", "ParseArgs", "Expr",
  "OtherExpr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    57,    58,    59,    59,
      60,    60,    61,    61,    61,    62,    62,    63,    63,    63,
      64,    64,    65,    66,    66,    66,    67,    68,    68,    68,
      68,    68,    68,    68,    69,    69,    70,    70,    71,    71,
      72,    72,    72,    72,    72,    73,    73,    73,    74,    74,
      74,    75,    76,    76,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     2,     2,     0,     4,     6,     2,
       3,     0,     1,     1,     1,     5,     5,     3,     4,     0,
       4,     0,     3,     2,     2,     0,     4,     3,     5,     7,
       5,     2,     2,     5,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     3,     5,     3,     1,
       0,     3,     7,     5,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     3,     1,     1,     1,
       2,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     9,     5,     0,     2,     3,     4,    14,    12,
       0,    13,     0,     0,     0,    11,     0,     7,    19,     0,
      19,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,    42,     0,     0,
       0,    11,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    82,    81,    83,     0,     0,     0,     0,
      37,    31,    77,    54,    78,     0,    55,    11,    22,    24,
      23,    32,     0,    21,    15,    10,    16,    51,    46,     0,
       0,    34,    27,    39,     0,    38,     0,     0,    80,     0,
       0,    79,    73,    74,    72,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,    49,     0,     0,
       0,     0,     0,     0,     0,    76,    75,    61,    58,    59,
      66,    67,    68,    69,    70,    57,    60,    71,    62,    56,
      64,    65,    63,    26,    18,     0,    47,    50,    45,    53,
       0,    33,    30,    28,    21,    48,     0,     0,    20,    52,
      29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    31,    40,    23,    50,   125,
      27,    41,    42,    43,    58,    71,    94,    44,    72,   129,
      73,    74,    75,    76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -43
static const yytype_int16 yypact[] =
{
     -20,    31,    59,   -14,   -43,     5,    46,     5,    40,    54,
       5,     5,   -43,   -43,    49,   -43,   -43,   -43,   -43,   -43,
      86,   -43,    92,    75,    80,    26,    85,   -43,     6,   101,
       6,    67,   -43,    68,    96,   119,   102,   103,   104,   149,
     112,    78,    85,    85,    94,   -43,   -43,   -43,   100,   131,
     106,   132,   114,   -43,   233,   191,   146,   119,   115,   225,
     233,   233,   -11,   -43,   -43,   -43,   192,   260,   260,   260,
     -43,   -43,   -43,   -43,   -43,   120,   279,   132,   -43,   -43,
     -43,   -43,   116,   144,   -43,   -43,   -43,   -43,   -43,    47,
       4,   -43,   -43,   -43,   133,   -43,   134,   135,   -43,   138,
     140,     7,    20,   -43,    20,   -43,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   127,   171,    53,   -43,   143,   -43,   233,   147,
     148,   233,   139,   141,   141,   -43,   -43,   337,   404,   -43,
     416,   111,   111,   111,   111,    20,   -43,   416,   309,    20,
     392,   392,   365,   -43,   -43,   179,   -43,    76,   -43,   -43,
     154,   -43,   -43,   152,   144,   -43,   156,   141,   -43,   -43,
     -43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -43,   -43,    91,   -43,   -43,   -41,    -6,   -43,   160,    36,
     -43,    13,   -43,   -34,   150,   -43,   -43,   -43,   -26,    48,
     -24,   -22,   -15,   -42
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -51
static const yytype_int16 yytable[] =
{
      45,    57,    46,    54,    47,   130,     6,     5,    22,    45,
      85,    46,    55,    47,    18,    19,    45,    45,    46,    46,
      47,    47,    49,    57,    49,   102,   103,   104,   131,     1,
      55,    45,    98,    46,     3,    47,   122,   108,    21,    87,
      89,    -6,    29,     7,    95,    96,    97,   115,   126,    30,
      98,   100,    48,     8,   127,    79,    80,    18,    19,     4,
      20,    18,    19,   128,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     -50,    21,    54,   127,    12,    21,    32,    14,    33,    24,
      15,    55,   128,    18,    19,    25,    26,    34,    13,   162,
     163,    16,    17,    28,    51,    53,    35,    45,    45,    46,
      46,    47,    47,   157,    78,    77,   160,    21,   155,    56,
      32,   -25,    33,   -44,    82,    59,    60,    61,   108,    36,
      37,    34,    81,   170,    83,    38,    39,   114,   115,    84,
      35,    45,    32,    46,    33,    47,   118,    86,    29,    90,
     123,    92,    62,    34,    63,   -35,    64,   -44,   105,    65,
     124,    34,    35,    36,    37,   153,   132,   133,   134,    38,
      39,   135,    66,   136,   154,    67,   156,   161,    68,   -44,
     158,   159,   164,   167,    69,    36,    37,    70,   166,   169,
      52,    38,    39,    99,    62,    62,    63,    63,    64,    64,
     168,    65,    65,    34,    34,   165,     0,    91,     0,     0,
       0,     0,     0,     0,    66,    66,     0,    67,    67,     0,
      68,    68,     0,     0,    88,     0,    69,    69,    62,    93,
      63,     0,    64,     0,     0,    65,    62,    34,    63,     0,
      64,     0,     0,    65,     0,    34,     0,     0,    66,     0,
       0,    67,     0,     0,    68,     0,    66,     0,     0,    67,
      69,     0,    68,   101,     0,    63,     0,    64,    69,     0,
      65,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,     0,     0,    67,     0,     0,    68,
       0,     0,   106,     0,   107,    69,   108,   109,   110,   111,
       0,   112,     0,     0,   113,   114,   115,   116,     0,   117,
       0,     0,     0,     0,   118,     0,     0,     0,     0,   119,
     120,   121,   106,     0,   107,     0,   108,   109,   110,   111,
       0,   112,     0,     0,   113,   114,   115,   116,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,   119,
     120,   121,   107,     0,   108,   109,   110,   111,     0,   112,
       0,     0,   113,   114,   115,   116,     0,     0,     0,     0,
       0,     0,   118,     0,     0,     0,     0,   119,   120,   121,
     107,     0,   108,   109,   110,   111,     0,   112,     0,     0,
     113,   114,   115,   116,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,   119,   120,   107,     0,   108,
     109,   110,   111,     0,   112,     0,     0,   113,   114,   115,
     116,   108,   109,   110,   111,     0,   112,   118,     0,   113,
     114,   115,   116,   108,     0,   110,   111,     0,   112,   118,
       0,   113,   114,   115,     0,     0,     0,     0,     0,     0,
       0,   118
};

static const yytype_int16 yycheck[] =
{
      26,    35,    26,    14,    26,     1,     1,    21,    14,    35,
      51,    35,    23,    35,     8,     9,    42,    43,    42,    43,
      42,    43,    28,    57,    30,    67,    68,    69,    24,    49,
      23,    57,    43,    57,     3,    57,    77,    17,    32,    54,
      55,    36,    16,    38,    59,    60,    61,    27,     1,    23,
      43,    66,    46,    48,     7,    42,    43,     8,     9,     0,
      11,     8,     9,    16,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      33,    32,    14,     7,    38,    32,     1,    47,     3,     3,
      36,    23,    16,     8,     9,     3,    21,    12,     7,   133,
     134,    10,    11,    23,     3,    38,    21,   133,   134,   133,
     134,   133,   134,   128,    36,     3,   131,    32,   124,    23,
       1,    36,     3,    38,    24,    23,    23,    23,    17,    44,
      45,    12,    38,   167,     3,    50,    51,    26,    27,    33,
      21,   167,     1,   167,     3,   167,    35,    33,    16,     3,
      34,    36,     3,    12,     5,    36,     7,    38,    38,    10,
      16,    12,    21,    44,    45,    38,    33,    33,    33,    50,
      51,    33,    23,    33,     3,    26,    33,    38,    29,    38,
      33,    33,     3,    31,    35,    44,    45,    38,    34,    33,
      30,    50,    51,     1,     3,     3,     5,     5,     7,     7,
     164,    10,    10,    12,    12,   157,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    23,    -1,    26,    26,    -1,
      29,    29,    -1,    -1,    33,    -1,    35,    35,     3,     4,
       5,    -1,     7,    -1,    -1,    10,     3,    12,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,    -1,    23,    -1,
      -1,    26,    -1,    -1,    29,    -1,    23,    -1,    -1,    26,
      35,    -1,    29,     3,    -1,     5,    -1,     7,    35,    -1,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    26,    -1,    -1,    29,
      -1,    -1,    13,    -1,    15,    35,    17,    18,    19,    20,
      -1,    22,    -1,    -1,    25,    26,    27,    28,    -1,    30,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      41,    42,    13,    -1,    15,    -1,    17,    18,    19,    20,
      -1,    22,    -1,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      41,    42,    15,    -1,    17,    18,    19,    20,    -1,    22,
      -1,    -1,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      15,    -1,    17,    18,    19,    20,    -1,    22,    -1,    -1,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    41,    15,    -1,    17,
      18,    19,    20,    -1,    22,    -1,    -1,    25,    26,    27,
      28,    17,    18,    19,    20,    -1,    22,    35,    -1,    25,
      26,    27,    28,    17,    -1,    19,    20,    -1,    22,    35,
      -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,    56,     3,     0,    21,     1,    38,    48,    57,
      58,    59,    38,    57,    47,    36,    57,    57,     8,     9,
      11,    32,    61,    62,     3,     3,    21,    65,    23,    16,
      23,    60,     1,     3,    12,    21,    44,    45,    50,    51,
      61,    66,    67,    68,    72,    73,    75,    76,    46,    61,
      63,     3,    63,    38,    14,    23,    23,    68,    69,    23,
      23,    23,     3,     5,     7,    10,    23,    26,    29,    35,
      38,    70,    73,    75,    76,    77,    78,     3,    36,    66,
      66,    38,    24,     3,    33,    60,    33,    77,    33,    77,
       3,    69,    36,     4,    71,    77,    77,    77,    43,     1,
      77,     3,    78,    78,    78,    38,    13,    15,    17,    18,
      19,    20,    22,    25,    26,    27,    28,    30,    35,    40,
      41,    42,    60,    34,    16,    64,     1,     7,    16,    74,
       1,    24,    33,    33,    33,    33,    33,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    38,     3,    61,    33,    77,    33,    33,
      77,    38,    68,    68,     3,    74,    34,    31,    64,    33,
      68
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
#line 53 "jucompiler.y"
    {    (yyval.tree)=myprogram=new_node(NO_VALUE,"Program");
                                                    tmp=new_node((yyvsp[(2) - (5)].cval), "Id");
                                                    insert_node((yyval.tree), tmp);
                                                    insert_neighbor(tmp, (yyvsp[(4) - (5)].tree));
                                                }
    break;

  case 3:
#line 60 "jucompiler.y"
    {  
                                                    insert_neighbor((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));
                                                    (yyval.tree)=(yyvsp[(1) - (2)].tree);
                                                }
    break;

  case 4:
#line 64 "jucompiler.y"
    {
                                                    (yyval.tree)=insert_neighbor((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));
                                                    (yyval.tree)=(yyvsp[(1) - (2)].tree);
                                                }
    break;

  case 5:
#line 68 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(2) - (2)].tree);}
    break;

  case 6:
#line 70 "jucompiler.y"
    {(yyval.tree)=(yyval.tree);}
    break;

  case 7:
#line 75 "jucompiler.y"
    {(yyval.tree)=new_node(NO_VALUE, "MethodDecl");
                                                    insert_node((yyval.tree), (yyvsp[(3) - (4)].tree));
                                                    insert_neighbor((yyvsp[(3) - (4)].tree), (yyvsp[(4) - (4)].tree));
                                                    }
    break;

  case 8:
#line 82 "jucompiler.y"
    {  
                                                        (yyval.tree)=new_node(NO_VALUE, "FieldDecl");
                                                        insert_node((yyval.tree), (yyvsp[(3) - (6)].tree));
                                                        tmp=new_node((yyvsp[(4) - (6)].cval), "Id");
                                                        insert_neighbor((yyvsp[(3) - (6)].tree), tmp);
                                                        insert_neighbor(tmp, (yyvsp[(5) - (6)].tree));
                                                    }
    break;

  case 9:
#line 89 "jucompiler.y"
    {(yyval.tree)=NULL;flagDontPrintTree = 1;}
    break;

  case 10:
#line 94 "jucompiler.y"
    {
                                                        (yyval.tree)=new_node((yyvsp[(2) - (3)].cval), "Id");
                                                        insert_neighbor((yyval.tree), (yyvsp[(3) - (3)].tree));
                                                    }
    break;

  case 11:
#line 99 "jucompiler.y"
    {(yyval.tree)=(yyval.tree);}
    break;

  case 12:
#line 103 "jucompiler.y"
    {(yyval.tree)=new_node(NO_VALUE, "Bool");}
    break;

  case 13:
#line 105 "jucompiler.y"
    {(yyval.tree)=new_node(NO_VALUE, "Int");}
    break;

  case 14:
#line 107 "jucompiler.y"
    {(yyval.tree)=new_node(NO_VALUE, "Double");}
    break;

  case 15:
#line 113 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodHeader");
                                                    tmp=new_node("", "Void");
                                                    insert_node((yyval.tree), tmp);
                                                    tmp1=new_node((yyvsp[(2) - (5)].cval), "Id");
                                                    insert_neighbor(tmp, tmp1);
                                                    tmp=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp1, tmp);
                                                    insert_node(tmp, (yyvsp[(4) - (5)].tree));
                                                    
                                                }
    break;

  case 16:
#line 124 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodHeader");
                                                    insert_node((yyval.tree), (yyvsp[(1) - (5)].tree));
                                                    tmp=new_node((yyvsp[(2) - (5)].cval), "Id");
                                                    insert_neighbor((yyvsp[(1) - (5)].tree), tmp);
                                                    tmp1=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp, tmp1);
                                                    insert_node(tmp1, (yyvsp[(4) - (5)].tree));
                                                    
                                                }
    break;

  case 17:
#line 137 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node((yyval.tree), (yyvsp[(1) - (3)].tree));
                                                    tmp=new_node((yyvsp[(2) - (3)].cval), "Id");
                                                    insert_neighbor((yyvsp[(1) - (3)].tree), tmp);
                                                }
    break;

  case 18:
#line 143 "jucompiler.y"
    {
    												(yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    tmp=new_node(NO_VALUE, "StringArray");
                                                    tmp1=new_node((yyvsp[(4) - (4)].cval), "Id");
                                                    insert_node((yyval.tree), tmp);
                                                    insert_neighbor(tmp, tmp1);
                                                }
    break;

  case 19:
#line 150 "jucompiler.y"
    {(yyval.tree)=(yyval.tree);}
    break;

  case 20:
#line 155 "jucompiler.y"
    {  
                                                    insert_node((yyval.tree), (yyvsp[(2) - (4)].tree));
                                                    tmp=new_node((yyvsp[(3) - (4)].cval), "Id");
                                                    insert_neighbor((yyvsp[(2) - (4)].tree), tmp);
                                                    insert_neighbor(tmp, (yyvsp[(4) - (4)].tree));
                                                }
    break;

  case 21:
#line 161 "jucompiler.y"
    {(yyval.tree)=(yyval.tree);}
    break;

  case 22:
#line 166 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodBody");
                                                    insert_node((yyval.tree), (yyvsp[(2) - (3)].tree));
                                                }
    break;

  case 23:
#line 174 "jucompiler.y"
    {  
        											
													insert_neighbor((yyvsp[(1) - (2)].tree),(yyvsp[(2) - (2)].tree));
													(yyval.tree)=(yyvsp[(1) - (2)].tree); 
    												
                                                }
    break;

  case 24:
#line 180 "jucompiler.y"
    {
													insert_neighbor((yyvsp[(1) - (2)].tree),(yyvsp[(2) - (2)].tree));
													(yyval.tree)=(yyvsp[(1) - (2)].tree);                                         
    											}
    break;

  case 25:
#line 185 "jucompiler.y"
    {(yyval.tree)=(yyval.tree);}
    break;

  case 26:
#line 189 "jucompiler.y"
    {  
       												(yyval.tree)=new_node(NO_VALUE, "VarDecl");
                                                    insert_node((yyval.tree), (yyvsp[(1) - (4)].tree));
                                                    tmp=new_node((yyvsp[(2) - (4)].cval), "Id");
                                                    insert_neighbor((yyvsp[(1) - (4)].tree), tmp);
                                                    insert_neighbor(tmp, (yyvsp[(3) - (4)].tree));
                                                }
    break;

  case 27:
#line 200 "jucompiler.y"
    {  
                                                                (yyval.tree)=(yyvsp[(2) - (3)].tree);
                                                            }
    break;

  case 28:
#line 203 "jucompiler.y"
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "If");
                                                                insert_node((yyval.tree), (yyvsp[(3) - (5)].tree));
                                                                insert_neighbor((yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].tree));
                                                                /* TODO isto do prec deve precisar de algo*/
                                                            }
    break;

  case 29:
#line 209 "jucompiler.y"
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "If");
                                                                insert_node((yyval.tree), (yyvsp[(3) - (7)].tree));
                                                                insert_neighbor((yyvsp[(3) - (7)].tree), (yyvsp[(5) - (7)].tree));
                                                                tmp=new_node(NO_VALUE, "Else");
                                                                insert_neighbor((yyval.tree), tmp);
                                                                insert_node(tmp, (yyvsp[(7) - (7)].tree));
                                                            }
    break;

  case 30:
#line 217 "jucompiler.y"
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "While");
                                                                insert_node((yyval.tree), (yyvsp[(3) - (5)].tree));
                                                                insert_neighbor((yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].tree));
                                                            }
    break;

  case 31:
#line 223 "jucompiler.y"
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "Return");
                                                                insert_node((yyval.tree), (yyvsp[(2) - (2)].tree));
                                                            }
    break;

  case 32:
#line 227 "jucompiler.y"
    {  
                                                                (yyval.tree)=(yyvsp[(1) - (2)].tree);
                                                            }
    break;

  case 33:
#line 230 "jucompiler.y"
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "Print");
                                                                insert_node((yyval.tree), (yyvsp[(3) - (5)].tree));
                                                            }
    break;

  case 34:
#line 239 "jucompiler.y"
    {
                                                    insert_neighbor((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));
                                                    (yyval.tree)=(yyvsp[(1) - (2)].tree);
                                                }
    break;

  case 35:
#line 244 "jucompiler.y"
    {(yyval.tree)=NULL;}
    break;

  case 36:
#line 250 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(1) - (2)].tree);}
    break;

  case 37:
#line 252 "jucompiler.y"
    {(yyval.tree)=NULL;}
    break;

  case 38:
#line 259 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 39:
#line 261 "jucompiler.y"
    {(yyval.tree)=new_node((yyvsp[(1) - (1)].cval), "StrLit");}
    break;

  case 40:
#line 267 "jucompiler.y"
    {  
                                                    (yyval.tree)=(yyvsp[(1) - (1)].tree);
                                                }
    break;

  case 41:
#line 270 "jucompiler.y"
    {  
                                                    (yyval.tree)=(yyvsp[(1) - (1)].tree);
                                                }
    break;

  case 42:
#line 273 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "ParseArgs");
                                                }
    break;

  case 43:
#line 276 "jucompiler.y"
    {(yyval.tree)=(yyval.tree);flagDontPrintTree = 1;}
    break;

  case 44:
#line 278 "jucompiler.y"
    {(yyval.tree)=NULL;}
    break;

  case 45:
#line 285 "jucompiler.y"
    {
       											(yyval.tree)=new_node(NO_VALUE, "Call");
                                                tmp=new_node((yyvsp[(1) - (5)].cval), "Id");
                                                insert_node((yyval.tree), tmp);
                                                insert_neighbor(tmp, (yyvsp[(3) - (5)].tree));
                                                insert_neighbor((yyvsp[(3) - (5)].tree), (yyvsp[(4) - (5)].tree));
                                            }
    break;

  case 46:
#line 292 "jucompiler.y"
    {   
       											(yyval.tree)=new_node(NO_VALUE, "Call");
                                                tmp=new_node((yyvsp[(1) - (3)].cval), "Id");
                                                insert_node((yyval.tree), tmp);

                                            }
    break;

  case 47:
#line 298 "jucompiler.y"
    {
                                                (yyval.tree)=new_node(NO_VALUE, "Call");
                                                tmp=new_node((yyvsp[(1) - (5)].cval), "Id");
                                                insert_node((yyval.tree), tmp);
                                                insert_neighbor(tmp, (yyvsp[(3) - (5)].tree));
                                                flagDontPrintTree = 1;
                                                /* TODO verificar se devemos inserir o erro */
                                            }
    break;

  case 48:
#line 310 "jucompiler.y"
    {
                                                insert_neighbor((yyval.tree), (yyvsp[(2) - (3)].tree));
               	                            }
    break;

  case 49:
#line 313 "jucompiler.y"
    {(yyval.tree)=new_node((yyvsp[(1) - (1)].cval), "IntLit");}
    break;

  case 50:
#line 315 "jucompiler.y"
    {(yyval.tree)=NULL;}
    break;

  case 51:
#line 320 "jucompiler.y"
    {
                                                (yyval.tree)=new_node(NO_VALUE, "Assign");
                                                tmp=new_node((yyvsp[(1) - (3)].cval), "Id");
                                                insert_node((yyval.tree), tmp);
                                                insert_neighbor(tmp, (yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 52:
#line 333 "jucompiler.y"
    {
                                                (yyval.tree)=new_node(NO_VALUE, "ParseArgs");
                                                tmp=new_node((yyvsp[(3) - (7)].cval), "Id");
                                                insert_node((yyval.tree), tmp);
                                                insert_neighbor(tmp, (yyvsp[(5) - (7)].tree));
                                            }
    break;

  case 53:
#line 339 "jucompiler.y"
    {
                                                (yyval.tree)=new_node(NO_VALUE, "ParseArgs");
                                                flagDontPrintTree = 1;
                                                /*  TODO inserio o erro nao sei se devia */
                                            }
    break;

  case 54:
#line 348 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 55:
#line 350 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 56:
#line 356 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Add");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 57:
#line 361 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Sub");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 58:
#line 366 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Mul");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 59:
#line 371 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Div");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 60:
#line 376 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Mod");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 61:
#line 381 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"And");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 62:
#line 386 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Or");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 63:
#line 391 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Xor");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 64:
#line 396 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"LShift");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 65:
#line 401 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"RShift");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 66:
#line 406 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Eq");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 67:
#line 411 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"GE");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 68:
#line 416 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"GT");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 69:
#line 421 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"LE");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 70:
#line 426 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"LT");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 71:
#line 431 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"NE");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 72:
#line 436 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Add");
                                                insert_node((yyval.tree),(yyvsp[(2) - (2)].tree));
                                            }
    break;

  case 73:
#line 440 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Sub");
                                                insert_node((yyval.tree),(yyvsp[(2) - (2)].tree));
                                            }
    break;

  case 74:
#line 444 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Not");
                                                insert_node((yyval.tree),(yyvsp[(2) - (2)].tree));
                                            }
    break;

  case 75:
#line 448 "jucompiler.y"
    {
                                                (yyval.tree)=(yyvsp[(2) - (3)].tree);
                                            }
    break;

  case 76:
#line 451 "jucompiler.y"
    {
                                                (yyval.tree)=NULL;
                                                flagDontPrintTree = 1;
                                            }
    break;

  case 77:
#line 455 "jucompiler.y"
    {  
                                                (yyval.tree)=(yyvsp[(1) - (1)].tree);
                                            }
    break;

  case 78:
#line 458 "jucompiler.y"
    {  
                                                (yyval.tree)=(yyvsp[(1) - (1)].tree);
                                            }
    break;

  case 79:
#line 461 "jucompiler.y"
    {
                                                (yyval.tree)=new_node((yyvsp[(1) - (1)].cval), "Id");
                                            }
    break;

  case 80:
#line 464 "jucompiler.y"
    {
                                                (yyval.tree)=new_node((yyvsp[(1) - (2)].cval), "Id");
                                            }
    break;

  case 81:
#line 467 "jucompiler.y"
    {(yyval.tree)=new_node((yyvsp[(1) - (1)].cval), "DecLit");}
    break;

  case 82:
#line 469 "jucompiler.y"
    {(yyval.tree)=new_node((yyvsp[(1) - (1)].cval), "RealLit");}
    break;

  case 83:
#line 471 "jucompiler.y"
    {(yyval.tree)=new_node((yyvsp[(1) - (1)].cval), "BoolLit");}
    break;


/* Line 1267 of yacc.c.  */
#line 2284 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 474 "jucompiler.y"


