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

s_Tree myprogram, tmp, tmp1, tmp2;

int globalContador = 0;

extern int line, column, yyleng;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
#line 26 "jucompiler.y"
{
    int ival;
    s_Token tok;
    s_Tree tree;
}
/* Line 193 of yacc.c.  */
#line 231 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 244 "y.tab.c"

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
#define YYLAST   502

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

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
      37,    40,    44,    47,    49,    51,    53,    59,    64,    70,
      75,    79,    84,    87,    92,    96,   100,   103,   106,   109,
     111,   113,   117,   120,   125,   129,   133,   136,   142,   150,
     156,   159,   162,   164,   170,   173,   175,   178,   180,   182,
     184,   186,   188,   190,   192,   198,   203,   207,   213,   217,
     219,   222,   226,   234,   240,   242,   244,   248,   252,   256,
     260,   264,   268,   272,   276,   280,   284,   288,   292,   296,
     300,   304,   308,   311,   314,   317,   321,   325,   327,   329,
     331,   334,   336,   338
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    26,     3,    39,    57,    13,    -1,    58,
      57,    -1,    59,    57,    -1,    15,    57,    -1,    -1,    25,
      24,    62,    65,    -1,    25,    24,    61,     3,    60,    15,
      -1,    25,    24,    61,     3,    15,    -1,     1,    15,    -1,
      34,     3,    60,    -1,    34,     3,    -1,     9,    -1,    50,
      -1,     8,    -1,    11,     3,    41,    63,    51,    -1,    11,
       3,    41,    51,    -1,    61,     3,    41,    63,    51,    -1,
      61,     3,    41,    51,    -1,    61,     3,    64,    -1,    23,
      42,    52,     3,    -1,    61,     3,    -1,    34,    61,     3,
      64,    -1,    34,    61,     3,    -1,    39,    66,    13,    -1,
      39,    13,    -1,    69,    66,    -1,    68,    66,    -1,    69,
      -1,    68,    -1,    34,     3,    67,    -1,    34,     3,    -1,
      61,     3,    67,    15,    -1,    61,     3,    15,    -1,    39,
      70,    13,    -1,    39,    13,    -1,    27,    41,    78,    51,
      69,    -1,    27,    41,    78,    51,    69,    49,    69,    -1,
      22,    41,    78,    51,    69,    -1,    28,    71,    -1,    73,
      15,    -1,    15,    -1,    21,    41,    72,    51,    15,    -1,
      69,    70,    -1,    69,    -1,    78,    15,    -1,    15,    -1,
      78,    -1,     4,    -1,    74,    -1,    76,    -1,    77,    -1,
       1,    -1,     3,    41,    78,    75,    51,    -1,     3,    41,
      78,    51,    -1,     3,    41,    51,    -1,     3,    41,    78,
       1,    51,    -1,    34,    78,    75,    -1,     7,    -1,    34,
      78,    -1,     3,    32,    78,    -1,    30,    41,     3,    42,
      78,    52,    51,    -1,    30,    41,     3,     1,    51,    -1,
      76,    -1,    79,    -1,    79,    12,    79,    -1,    79,    44,
      79,    -1,    79,    33,    79,    -1,    79,    35,    79,    -1,
      79,    45,    79,    -1,    79,    31,    79,    -1,    79,    48,
      79,    -1,    79,    19,    79,    -1,    79,    17,    79,    -1,
      79,    18,    79,    -1,    79,    36,    79,    -1,    79,    37,
      79,    -1,    79,    38,    79,    -1,    79,    40,    79,    -1,
      79,    43,    79,    -1,    79,    46,    79,    -1,    12,    79,
      -1,    44,    79,    -1,    47,    79,    -1,    41,    78,    51,
      -1,    41,     1,    51,    -1,    74,    -1,    77,    -1,     3,
      -1,     3,    20,    -1,     7,    -1,     5,    -1,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    69,    73,    78,    80,    87,    96,   118,
     128,   133,   142,   153,   155,   157,   163,   177,   189,   202,
     216,   225,   234,   247,   257,   272,   277,   286,   296,   301,
     303,   309,   320,   333,   354,   367,   401,   403,   437,   496,
     521,   526,   530,   532,   542,   550,   560,   562,   569,   571,
     577,   580,   583,   586,   593,   603,   612,   619,   632,   636,
     638,   645,   658,   664,   673,   675,   681,   686,   691,   696,
     701,   706,   711,   716,   721,   726,   731,   736,   741,   746,
     751,   756,   761,   765,   769,   773,   776,   780,   782,   785,
     791,   799,   805,   811
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRLIT", "REALLIT", "RESERVED",
  "INTLIT", "DOUBLE", "BOOL", "BOOLLIT", "VOID", "PLUS", "RBRACE", "SQ",
  "SEMICOLON", "ARROW", "LSHIFT", "RSHIFT", "XOR", "DOTLENGTH", "PRINT",
  "WHILE", "STRING", "STATIC", "PUBLIC", "CLASS", "IF", "RETURN", "END",
  "PARSEINT", "AND", "ASSIGN", "STAR", "COMMA", "DIV", "EQ", "GE", "GT",
  "LBRACE", "LE", "LPAR", "LSQ", "LT", "MINUS", "MOD", "NE", "NOT", "OR",
  "ELSE", "INT", "RPAR", "RSQ", "IF2", "preced", "$accept", "Program",
  "Declaring", "MethodDecl", "FieldDecl", "CommaId", "Type",
  "MethodHeader", "FormalParams", "CommaTypeId", "MethodBody",
  "StatementVarDecl", "CommaIdVarDecl", "VarDecl", "Statement",
  "Statement2", "ExprSemicolon", "ExprOrStrlit", "MethodInvAssParseArgs",
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
      59,    60,    60,    61,    61,    61,    62,    62,    62,    62,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    67,    67,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    70,    70,    71,    71,    72,    72,
      73,    73,    73,    73,    74,    74,    74,    74,    75,    75,
      75,    76,    77,    77,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     2,     2,     0,     4,     6,     5,
       2,     3,     2,     1,     1,     1,     5,     4,     5,     4,
       3,     4,     2,     4,     3,     3,     2,     2,     2,     1,
       1,     3,     2,     4,     3,     3,     2,     5,     7,     5,
       2,     2,     1,     5,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     3,     5,     3,     1,
       2,     3,     7,     5,     1,     1,     3,     3,     3,     3,
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
       0,     0,    10,     5,     0,     2,     3,     4,    15,    13,
       0,    14,     0,     0,     0,     0,     0,     7,     0,     9,
       0,     0,     0,    53,     0,    26,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
      52,     0,    17,     0,     0,    12,    19,     0,     8,     0,
       0,     0,     0,     0,    89,    92,    91,    93,     0,    47,
       0,     0,     0,    40,    87,    64,    88,     0,    65,     0,
      36,     0,     0,     0,    25,    28,    27,    41,     0,    22,
      16,    11,    18,    61,    56,     0,    49,     0,    48,     0,
       0,    90,    89,    82,     0,     0,    83,    84,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,    35,    34,     0,
       0,     0,     0,    20,     0,    59,     0,    55,     0,     0,
       0,     0,    86,    85,    66,    74,    75,    73,    71,    68,
      69,    76,    77,    78,    79,    80,    67,    70,    81,    72,
       0,     0,    32,    33,    21,     0,    57,    60,    54,    43,
      39,    37,    63,     0,    31,    24,    58,     0,     0,    23,
      38,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    32,    43,    23,    54,   133,
      27,    44,   130,    45,    46,    82,    73,    97,    47,    74,
     138,    75,    76,    77,    78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -42
static const yytype_int16 yypact[] =
{
      -9,    11,    42,    31,   -42,    48,    29,    48,    24,    58,
      48,    48,   -42,   -42,     4,   -42,   -42,   -42,   -42,   -42,
      72,   -42,    98,    66,    61,     9,   122,   -42,    43,   -42,
     105,    88,    97,   -42,    63,   -42,   -42,    77,    79,    85,
     211,    93,   278,   137,   128,   154,   170,   127,   -42,   -42,
     -42,   103,   -42,   143,    96,   114,   -42,   108,   -42,   241,
      62,   226,   241,   241,    78,   -42,   -42,   -42,   254,   -42,
     198,   254,   254,   -42,   -42,   -42,   -42,   145,   324,   161,
     -42,   301,   155,    30,   -42,   -42,   -42,   -42,   118,   140,
     -42,   -42,   -42,   -42,   -42,     2,   -42,   126,   -42,   129,
     135,   -42,   -12,   -42,   136,   138,   -42,   -42,   -42,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,     5,   -42,   -42,   -42,   185,
     175,   191,    -4,   -42,   144,   -42,   241,   -42,   151,   181,
     317,   317,   -42,   -42,    23,   121,   121,   389,   419,   -42,
     -42,   433,   457,   457,   457,   457,    23,   -42,   433,   359,
     156,   241,   172,   -42,   -42,   208,   -42,     3,   -42,   -42,
     -42,   163,   -42,   165,   -42,   140,   -42,   317,   162,   -42,
     -42,   -42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -42,   -42,   117,   -42,   -42,   160,    -3,   -42,   188,    47,
     -42,    14,    65,   -42,   -41,   153,   -42,   -42,   -42,   -26,
      57,   -24,   -19,   -29,   -33
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -46
static const yytype_int16 yytable[] =
{
      48,    81,    49,   134,    18,    19,   160,    50,   101,   135,
     135,    22,    18,    19,     3,    20,    48,     1,    49,    48,
      48,    49,    49,    50,    29,    53,    50,    50,    53,    60,
      93,    95,    98,    99,   100,   103,   136,   136,   106,   107,
      81,   105,     4,    30,    12,   128,    21,   161,    14,     6,
      31,    18,    19,   137,    21,    48,   114,    49,   115,    85,
      86,    -6,    50,     7,   129,    64,    51,    65,   122,    66,
       5,    15,    67,     8,    68,    24,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,    41,    21,    52,    59,    18,    19,   101,   170,
     171,    25,    28,    70,    60,    26,    71,   167,    55,    72,
      59,    51,    58,    94,    48,    48,    49,    49,    61,    60,
      62,    50,    50,    33,    13,    34,    63,    16,    17,   165,
      18,    19,   173,   109,    79,    35,   180,    36,    21,    56,
      83,    84,    87,    37,    38,    88,    89,    90,    30,    39,
      40,    48,    41,    49,   114,    33,   115,    34,    50,    92,
     108,    42,    18,    19,   125,   121,   122,   -30,   127,    36,
     131,    33,    21,    34,   132,    37,    38,   139,    18,    19,
     140,    39,    40,   -29,    41,    36,   141,   142,   162,   143,
     163,    37,    38,    42,   164,   166,   169,    39,    40,   104,
      41,    64,   168,    65,    21,    66,   129,   172,    67,    42,
      68,   175,   177,   181,    64,    91,    65,   178,    66,    57,
      21,    67,   179,    68,   176,     0,    69,   174,    41,    64,
      96,    65,     0,    66,   126,     0,    67,     0,    68,    70,
       0,    41,    71,     0,    64,    72,    65,     0,    66,     0,
       0,    67,    70,    68,     0,    71,    41,   102,    72,    65,
       0,    66,     0,     0,    67,     0,    68,    70,     0,     0,
      71,    41,     0,    72,     0,     0,     0,     0,     0,    33,
       0,    34,    70,     0,    41,    71,     0,     0,    72,     0,
       0,    80,     0,    36,     0,    70,     0,     0,    71,    37,
      38,    72,    33,     0,    34,    39,    40,     0,    41,     0,
       0,     0,     0,     0,   -45,     0,    36,    42,    33,     0,
      34,     0,    37,    38,     0,     0,     0,     0,    39,    40,
       0,    41,    36,     0,     0,     0,   109,     0,    37,    38,
      42,   110,   111,   112,    39,    40,     0,    41,     0,     0,
       0,     0,     0,     0,     0,   113,    42,   114,     0,   115,
     116,   117,   118,     0,   119,     0,     0,   120,   121,   122,
     123,   109,   124,     0,     0,     0,   110,   111,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,   114,     0,   115,   116,   117,   118,     0,   119,
       0,   109,   120,   121,   122,   123,   110,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,   114,     0,   115,   116,   117,   118,     0,   119,
       0,   109,   120,   121,   122,   123,   110,   111,     0,     0,
       0,     0,     0,     0,     0,   109,     0,     0,     0,     0,
     110,   111,   114,     0,   115,   116,   117,   118,     0,   119,
       0,     0,   120,   121,   122,   123,   114,     0,   115,   109,
     117,   118,     0,   119,   110,   111,   120,   121,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,   115,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122
};

static const yytype_int16 yycheck[] =
{
      26,    42,    26,     1,     8,     9,     1,    26,    20,     7,
       7,    14,     8,     9,     3,    11,    42,    26,    42,    45,
      46,    45,    46,    42,    15,    28,    45,    46,    31,    41,
      59,    60,    61,    62,    63,    68,    34,    34,    71,    72,
      81,    70,     0,    34,    15,    15,    50,    42,    24,     1,
      41,     8,     9,    51,    50,    81,    33,    81,    35,    45,
      46,    13,    81,    15,    34,     3,    23,     5,    45,     7,
      39,    13,    10,    25,    12,     3,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    30,    50,    51,    32,     8,     9,    20,   140,
     141,     3,    41,    41,    41,    39,    44,   136,     3,    47,
      32,    23,    15,    51,   140,   141,   140,   141,    41,    41,
      41,   140,   141,     1,     7,     3,    41,    10,    11,   132,
       8,     9,   161,    12,    41,    13,   177,    15,    50,    51,
       3,    13,    15,    21,    22,    42,     3,    51,    34,    27,
      28,   177,    30,   177,    33,     1,    35,     3,   177,    51,
      15,    39,     8,     9,     3,    44,    45,    13,    13,    15,
      52,     1,    50,     3,    34,    21,    22,    51,     8,     9,
      51,    27,    28,    13,    30,    15,    51,    51,     3,    51,
      15,    21,    22,    39,     3,    51,    15,    27,    28,     1,
      30,     3,    51,     5,    50,     7,    34,    51,    10,    39,
      12,     3,    49,    51,     3,    55,     5,    52,     7,    31,
      50,    10,   175,    12,   167,    -1,    15,   162,    30,     3,
       4,     5,    -1,     7,    81,    -1,    10,    -1,    12,    41,
      -1,    30,    44,    -1,     3,    47,     5,    -1,     7,    -1,
      -1,    10,    41,    12,    -1,    44,    30,     3,    47,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    41,    -1,    -1,
      44,    30,    -1,    47,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,    41,    -1,    30,    44,    -1,    -1,    47,    -1,
      -1,    13,    -1,    15,    -1,    41,    -1,    -1,    44,    21,
      22,    47,     1,    -1,     3,    27,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    15,    39,     1,    -1,
       3,    -1,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      -1,    30,    15,    -1,    -1,    -1,    12,    -1,    21,    22,
      39,    17,    18,    19,    27,    28,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    39,    33,    -1,    35,
      36,    37,    38,    -1,    40,    -1,    -1,    43,    44,    45,
      46,    12,    48,    -1,    -1,    -1,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    33,    -1,    35,    36,    37,    38,    -1,    40,
      -1,    12,    43,    44,    45,    46,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    33,    -1,    35,    36,    37,    38,    -1,    40,
      -1,    12,    43,    44,    45,    46,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      17,    18,    33,    -1,    35,    36,    37,    38,    -1,    40,
      -1,    -1,    43,    44,    45,    46,    33,    -1,    35,    12,
      37,    38,    -1,    40,    17,    18,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    56,     3,     0,    39,     1,    15,    25,    57,
      58,    59,    15,    57,    24,    13,    57,    57,     8,     9,
      11,    50,    61,    62,     3,     3,    39,    65,    41,    15,
      34,    41,    60,     1,     3,    13,    15,    21,    22,    27,
      28,    30,    39,    61,    66,    68,    69,    73,    74,    76,
      77,    23,    51,    61,    63,     3,    51,    63,    15,    32,
      41,    41,    41,    41,     3,     5,     7,    10,    12,    15,
      41,    44,    47,    71,    74,    76,    77,    78,    79,    41,
      13,    69,    70,     3,    13,    66,    66,    15,    42,     3,
      51,    60,    51,    78,    51,    78,     4,    72,    78,    78,
      78,    20,     3,    79,     1,    78,    79,    79,    15,    12,
      17,    18,    19,    31,    33,    35,    36,    37,    38,    40,
      43,    44,    45,    46,    48,     3,    70,    13,    15,    34,
      67,    52,    34,    64,     1,     7,    34,    51,    75,    51,
      51,    51,    51,    51,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
       1,    42,     3,    15,     3,    61,    51,    78,    51,    15,
      69,    69,    51,    78,    67,     3,    75,    49,    52,    64,
      69,    51
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
#line 56 "jucompiler.y"
    {    (yyval.tree)=myprogram=new_node(NO_VALUE,"Program");
                                                    tmp=new_node((yyvsp[(2) - (5)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_node((yyval.tree), tmp);
                                                    insert_neighbor(tmp, (yyvsp[(4) - (5)].tree));
                                                    (yyval.tree)->line = line;
                                                    (yyval.tree)->col = column;
                                                }
    break;

  case 3:
#line 69 "jucompiler.y"
    {  
                                                    insert_neighbor((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));
                                                    
                                                }
    break;

  case 4:
#line 73 "jucompiler.y"
    {
                                                    insert_neighbor((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));
                                                    (yyval.tree)=(yyvsp[(1) - (2)].tree);
                                                }
    break;

  case 5:
#line 78 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(2) - (2)].tree);}
    break;

  case 6:
#line 80 "jucompiler.y"
    {(yyval.tree)=NULL;}
    break;

  case 7:
#line 87 "jucompiler.y"
    {
                                                        (yyval.tree)=new_node(NO_VALUE, "MethodDecl");
                                                        insert_node((yyval.tree), (yyvsp[(3) - (4)].tree));
                                                        insert_neighbor((yyvsp[(3) - (4)].tree), (yyvsp[(4) - (4)].tree));
                                                    }
    break;

  case 8:
#line 96 "jucompiler.y"
    {  
                                                        (yyval.tree)=new_node(NO_VALUE, "FieldDecl");
                                                        insert_node((yyval.tree), (yyvsp[(3) - (6)].tree));
                                                        tmp=new_node((yyvsp[(4) - (6)].tok)->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_neighbor((yyvsp[(3) - (6)].tree), tmp);
                                                        insert_neighbor((yyval.tree), (yyvsp[(5) - (6)].tree));

                                                        tmp1 = (yyval.tree);

                                                        while(tmp1 != NULL){
                                                            if( strcmp(tmp1->child->type,(yyval.tree)->child->type) ){
                                                                tmp = new_node(tmp1->child->value, tmp1->child->type);
                                                                tmp2 = new_node((yyval.tree)->child->value, (yyval.tree)->child->type);
                                                                insert_node(tmp1, tmp2);
                                                                insert_neighbor(tmp2, tmp);
                                                            }
                                                            tmp1 = tmp1->neighbor;
                                                        }  
                                                    }
    break;

  case 9:
#line 118 "jucompiler.y"
    {  
                                                        (yyval.tree)=new_node(NO_VALUE, "FieldDecl");
                                                        insert_node((yyval.tree), (yyvsp[(3) - (5)].tree));
                                                        tmp=new_node((yyvsp[(4) - (5)].tok)->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_neighbor((yyvsp[(3) - (5)].tree), tmp);
                                                    }
    break;

  case 10:
#line 128 "jucompiler.y"
    {(yyval.tree)=NULL;flagDontPrintTree = 1;}
    break;

  case 11:
#line 133 "jucompiler.y"
    {
                                                        (yyval.tree)=new_node(NO_VALUE, "FieldDecl");
                                                        tmp=new_node((yyvsp[(2) - (3)].tok)->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_node((yyval.tree), tmp);
                                                        insert_neighbor((yyval.tree), (yyvsp[(3) - (3)].tree)); 
                                                    }
    break;

  case 12:
#line 142 "jucompiler.y"
    {
                                                        (yyval.tree)=new_node(NO_VALUE, "FieldDecl");
                                                        tmp=new_node((yyvsp[(2) - (2)].tok)->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_node((yyval.tree), tmp);
                                                    }
    break;

  case 13:
#line 153 "jucompiler.y"
    {(yyval.tree)=new_node(NO_VALUE, "Bool");}
    break;

  case 14:
#line 155 "jucompiler.y"
    {(yyval.tree)=new_node(NO_VALUE, "Int");}
    break;

  case 15:
#line 157 "jucompiler.y"
    {(yyval.tree)=new_node(NO_VALUE, "Double");}
    break;

  case 16:
#line 163 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodHeader");
                                                    tmp=new_node("", "Void");
                                                    insert_node((yyval.tree), tmp);
                                                    tmp1=new_node((yyvsp[(2) - (5)].tok)->cval, "Id");
                                                    tmp1->line = line;
                                                    tmp1->col = column;
                                                    insert_neighbor(tmp, tmp1);
                                                    tmp=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp1, tmp);
                                                    insert_node(tmp, (yyvsp[(4) - (5)].tree));
                                                    
                                                }
    break;

  case 17:
#line 177 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodHeader");
                                                    tmp=new_node("", "Void");
                                                    insert_node((yyval.tree), tmp);
                                                    tmp1=new_node((yyvsp[(2) - (4)].tok)->cval, "Id");
                                                    tmp1->line = line;
                                                    tmp1->col = column;
                                                    insert_neighbor(tmp, tmp1);
                                                    tmp2=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp1, tmp2);
                                                }
    break;

  case 18:
#line 189 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodHeader");
                                                    insert_node((yyval.tree), (yyvsp[(1) - (5)].tree));
                                                    tmp=new_node((yyvsp[(2) - (5)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor((yyvsp[(1) - (5)].tree), tmp);
                                                    tmp1=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp, tmp1);
                                                    insert_node(tmp1, (yyvsp[(4) - (5)].tree));
                                                    
                                                }
    break;

  case 19:
#line 202 "jucompiler.y"
    {
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodHeader");
                                                    insert_node((yyval.tree), (yyvsp[(1) - (4)].tree));
                                                    tmp=new_node((yyvsp[(2) - (4)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor((yyvsp[(1) - (4)].tree), tmp);
                                                    tmp1=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp, tmp1);
                                                }
    break;

  case 20:
#line 216 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node((yyval.tree), (yyvsp[(1) - (3)].tree));
                                                    tmp=new_node((yyvsp[(2) - (3)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor((yyvsp[(1) - (3)].tree), tmp);
                                                    insert_neighbor((yyval.tree), (yyvsp[(3) - (3)].tree));
                                                }
    break;

  case 21:
#line 225 "jucompiler.y"
    {
                                                    (yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    tmp=new_node(NO_VALUE, "StringArray");
                                                    tmp1=new_node((yyvsp[(4) - (4)].tok)->cval, "Id");
                                                    tmp1->line = line;
                                                    tmp1->col = column;
                                                    insert_node((yyval.tree), tmp);
                                                    insert_neighbor(tmp, tmp1);
                                                }
    break;

  case 22:
#line 234 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node((yyval.tree), (yyvsp[(1) - (2)].tree));
                                                    tmp=new_node((yyvsp[(2) - (2)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor((yyvsp[(1) - (2)].tree), tmp);
                                                }
    break;

  case 23:
#line 247 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node((yyval.tree), (yyvsp[(2) - (4)].tree));
                                                    tmp=new_node((yyvsp[(3) - (4)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor((yyvsp[(2) - (4)].tree), tmp);
                                                    insert_neighbor((yyval.tree), (yyvsp[(4) - (4)].tree));
                                                }
    break;

  case 24:
#line 257 "jucompiler.y"
    {   
                                                    (yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node((yyval.tree), (yyvsp[(2) - (3)].tree));
                                                    tmp=new_node((yyvsp[(3) - (3)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor((yyvsp[(2) - (3)].tree), tmp);
                                                }
    break;

  case 25:
#line 272 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodBody");
                                                    insert_node((yyval.tree), (yyvsp[(2) - (3)].tree));
                                                }
    break;

  case 26:
#line 277 "jucompiler.y"
    {
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodBody");
                                                }
    break;

  case 27:
#line 286 "jucompiler.y"
    {  
                                                    if((yyvsp[(1) - (2)].tree) != NULL){
                                                        insert_neighbor((yyvsp[(1) - (2)].tree),(yyvsp[(2) - (2)].tree));
                                                        (yyval.tree)=(yyvsp[(1) - (2)].tree); 
                                                    }else{
                                                    (yyval.tree)= (yyvsp[(2) - (2)].tree);
                                                    }
                                                    
                                                    
                                                }
    break;

  case 28:
#line 296 "jucompiler.y"
    {
                                                    insert_neighbor((yyvsp[(1) - (2)].tree),(yyvsp[(2) - (2)].tree));
                                                    (yyval.tree)=(yyvsp[(1) - (2)].tree);                                         
                                                }
    break;

  case 29:
#line 301 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 30:
#line 303 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 31:
#line 309 "jucompiler.y"
    {
                                                        (yyval.tree)=new_node(NO_VALUE, "VarDecl");
                                                        tmp=new_node((yyvsp[(2) - (3)].tok)->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_node((yyval.tree), tmp);
                                                        insert_neighbor((yyval.tree), (yyvsp[(3) - (3)].tree)); 


                                                    }
    break;

  case 32:
#line 320 "jucompiler.y"
    {(yyval.tree)=new_node(NO_VALUE, "VarDecl");
                                                        tmp=new_node((yyvsp[(2) - (2)].tok)->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_node((yyval.tree), tmp);
                                                        }
    break;

  case 33:
#line 333 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "VarDecl");
                                                    insert_node((yyval.tree), (yyvsp[(1) - (4)].tree));
                                                    tmp=new_node((yyvsp[(2) - (4)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor((yyvsp[(1) - (4)].tree), tmp);
                                                    insert_neighbor((yyval.tree), (yyvsp[(3) - (4)].tree));

                                                    tmp1 = (yyval.tree);
                                                    while(tmp1 != NULL){
                                                        if( strcmp(tmp1->child->type,(yyval.tree)->child->type) ){
                                                            tmp = new_node(tmp1->child->value, tmp1->child->type);
                                                            tmp2 = new_node((yyval.tree)->child->value, (yyval.tree)->child->type);
                                                            insert_node(tmp1, tmp2);
                                                            insert_neighbor(tmp2, tmp);
                                                        }
                                                        tmp1 = tmp1->neighbor;
                                                    }  
                                                }
    break;

  case 34:
#line 354 "jucompiler.y"
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "VarDecl");
                                                    insert_node((yyval.tree), (yyvsp[(1) - (3)].tree));
                                                    tmp=new_node((yyvsp[(2) - (3)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor((yyvsp[(1) - (3)].tree), tmp);
                                                }
    break;

  case 35:
#line 367 "jucompiler.y"
    {  
                                                              
                                                               int flag = 1;
                                                               int contadorDentroWhile = 0;
                                                               tmp1 = (yyvsp[(2) - (3)].tree);
                                                                

                                                                if(globalContador > 1){
                                                                    while(flag == 1){
                                                                        if(strcmp(tmp1->type,"Null") != 0 && strcmp(tmp1->type,"Block") != 0 ){
                                                                            tmp=new_node(NO_VALUE, "Block");
                                                                            tmp->child = tmp1;

                                                                            flag = 0;

                                                                                        
                                                                                    
                                                                        }else if(strcmp(tmp1->neighbor->type,"Null") == 0 ){
                                                                            tmp1 = tmp1->neighbor;
                                                                        }
                                                                        contadorDentroWhile++;
                                                                        tmp1 = tmp1->neighbor;
                                                                    } 

                                                                    
                                                                    globalContador = 0;
                                                                    (yyval.tree)=tmp;
                                                                }else{
                                                                
                                                                    (yyval.tree)=(yyvsp[(2) - (3)].tree);
                                                                    globalContador = 0;
                                                                }
                                                            }
    break;

  case 36:
#line 401 "jucompiler.y"
    {(yyval.tree)=new_node(NO_VALUE, "Null");}
    break;

  case 37:
#line 403 "jucompiler.y"
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "If");
                                                                insert_node((yyval.tree), (yyvsp[(3) - (5)].tree));
                                                                if((yyvsp[(5) - (5)].tree) != NULL){
                                                                    insert_neighbor((yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].tree));
                                                                }

                                                               

                                                                int contador = 0;
                                                                tmp1 = (yyvsp[(5) - (5)].tree);

                                                                while(tmp1 != NULL){
                                                                    if(strcmp(tmp1->type, "Null") != 0)
                                                                        contador++;
                                                                    tmp1 = tmp1->neighbor;
                                                                }  

                                                                tmp=new_node(NO_VALUE, "Block");

                                                                if(contador == 0){
                                                                    insert_neighbor((yyvsp[(3) - (5)].tree), tmp);
                                                                } else if (contador > 1){
                                                                    insert_node(tmp, (yyvsp[(3) - (5)].tree)->neighbor);
                                                                    (yyvsp[(3) - (5)].tree)->neighbor = tmp;
                                                                }

                                                                tmp=new_node(NO_VALUE, "Block");

                                                                insert_neighbor((yyvsp[(3) - (5)].tree), tmp);

                                                                
                                                                /* TODO isto do prec deve precisar de algo*/
                                                            }
    break;

  case 38:
#line 437 "jucompiler.y"
    {  

                                                                int contador1 = 0;
                                                                tmp1 = (yyvsp[(5) - (7)].tree);

                                                                while(tmp1 != NULL){
                                                                    if(strcmp(tmp1->type, "Null") != 0)
                                                                        contador1++;
                                                                    tmp1 = tmp1->neighbor;
                                                                }  

                                                                int contador2 = 0;
                                                                tmp1 = (yyvsp[(7) - (7)].tree);

                                                                while(tmp1 != NULL){
                                                                    if(strcmp(tmp1->type, "Null") != 0){
                                                                        contador2++;
                                                                    }
                                                                    tmp1 = tmp1->neighbor;
                                                                }  

                                                                tmp=new_node(NO_VALUE, "Block");
                                                                tmp1=new_node(NO_VALUE, "Block");

                                                                (yyval.tree)=new_node(NO_VALUE, "If");
                                                                insert_node((yyval.tree), (yyvsp[(3) - (7)].tree));

                                                                if((yyvsp[(5) - (7)].tree) != NULL && contador1 != 0){
                                                                    if(contador1 > 1){
                                                                        insert_node((yyvsp[(3) - (7)].tree), tmp);
                                                                        insert_neighbor(tmp, (yyvsp[(5) - (7)].tree));
                                                                    }else{
                                                                        insert_neighbor((yyvsp[(3) - (7)].tree), (yyvsp[(5) - (7)].tree));
                                                                    }
                                                                    if((yyvsp[(7) - (7)].tree) != NULL && contador2 != 0){
                                                                        if(contador2 > 1){
                                                                            insert_neighbor((yyvsp[(5) - (7)].tree), tmp);
                                                                            insert_neighbor(tmp, (yyvsp[(7) - (7)].tree));
                                                                        }else{
                                                                            insert_neighbor((yyvsp[(5) - (7)].tree), (yyvsp[(7) - (7)].tree));
                                                                        }
                                                                    }
                                                                }else{

                                                                    insert_neighbor((yyvsp[(3) - (7)].tree), tmp); 

                                                                    if((yyvsp[(7) - (7)].tree) != NULL && contador2 != 0){
                                                                        if(contador2 > 1){
                                                                            insert_neighbor(tmp, tmp1);
                                                                            insert_neighbor(tmp1, (yyvsp[(7) - (7)].tree));
                                                                        }else{
                                                                            insert_neighbor(tmp, (yyvsp[(7) - (7)].tree));
                                                                        }
                                                                    }else{
                                                                        insert_neighbor(tmp, tmp1);
                                                                    }
                                                                }

                                                            }
    break;

  case 39:
#line 496 "jucompiler.y"
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "While");
                                                                insert_node((yyval.tree), (yyvsp[(3) - (5)].tree));

                                                                int contador = 0;
                                                                tmp1 = (yyvsp[(5) - (5)].tree);
                                                                while(tmp1 != NULL){
                                                                    if(strcmp(tmp1->type, "Null") != 0)
                                                                        contador++;
                                                                    tmp1 = tmp1->neighbor;
                                                                }  

                                                                tmp=new_node(NO_VALUE, "Block");

                                                                if(contador == 0){
                                                                    insert_neighbor((yyvsp[(3) - (5)].tree), tmp);
                                                                }else if(contador > 1){
                                                                    insert_neighbor((yyvsp[(3) - (5)].tree), tmp);
                                                                    insert_node(tmp, (yyvsp[(5) - (5)].tree));
                                                                }else{
                                                                    insert_neighbor((yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].tree));
                                                                }
                                                                
                                                            }
    break;

  case 40:
#line 521 "jucompiler.y"
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "Return");
                                                                if((yyvsp[(2) - (2)].tree) != NULL)
                                                                    insert_node((yyval.tree), (yyvsp[(2) - (2)].tree));
                                                            }
    break;

  case 41:
#line 526 "jucompiler.y"
    {  
                                                                (yyval.tree)=(yyvsp[(1) - (2)].tree);
                                                            }
    break;

  case 42:
#line 530 "jucompiler.y"
    {(yyval.tree)=new_node(NO_VALUE, "Null");}
    break;

  case 43:
#line 532 "jucompiler.y"
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "Print");
                                                                insert_node((yyval.tree), (yyvsp[(3) - (5)].tree));
                                                                
                                                            }
    break;

  case 44:
#line 542 "jucompiler.y"
    {
                                                                insert_neighbor((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));
                                                                (yyval.tree)=(yyvsp[(1) - (2)].tree);
                                                                
                                                                if(strcmp((yyvsp[(1) - (2)].tree)->type, "Null") != 0)
                                                                    globalContador++;
                                                            }
    break;

  case 45:
#line 550 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);
                                                            if(strcmp((yyvsp[(1) - (1)].tree)->type, "Null") != 0)
                                                                    globalContador++;
                                                            }
    break;

  case 46:
#line 560 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(1) - (2)].tree);}
    break;

  case 47:
#line 562 "jucompiler.y"
    {(yyval.tree)=NULL;}
    break;

  case 48:
#line 569 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 49:
#line 571 "jucompiler.y"
    {(yyval.tree)=new_node((yyvsp[(1) - (1)].tok)->cval, "StrLit");}
    break;

  case 50:
#line 577 "jucompiler.y"
    {  
                                                    (yyval.tree)=(yyvsp[(1) - (1)].tree);
                                                }
    break;

  case 51:
#line 580 "jucompiler.y"
    {  
                                                    (yyval.tree)=(yyvsp[(1) - (1)].tree);
                                                }
    break;

  case 52:
#line 583 "jucompiler.y"
    {  
                                                    (yyval.tree)=(yyvsp[(1) - (1)].tree);
                                                }
    break;

  case 53:
#line 586 "jucompiler.y"
    {(yyval.tree)=new_node(NO_VALUE, "Null");flagDontPrintTree = 1;}
    break;

  case 54:
#line 593 "jucompiler.y"
    {
                                                    (yyval.tree)=new_node(NO_VALUE, "Call");
                                                    tmp=new_node((yyvsp[(1) - (5)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = 1;
                                                    insert_node((yyval.tree), tmp);
                                                    insert_neighbor(tmp, (yyvsp[(3) - (5)].tree));
                                                    insert_neighbor((yyvsp[(3) - (5)].tree), (yyvsp[(4) - (5)].tree));
                                                }
    break;

  case 55:
#line 603 "jucompiler.y"
    {
                                                    (yyval.tree)=new_node(NO_VALUE, "Call");
                                                    tmp=new_node((yyvsp[(1) - (4)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = (yyvsp[(1) - (4)].tok)->col;
                                                    insert_node((yyval.tree), tmp);
                                                    insert_neighbor(tmp, (yyvsp[(3) - (4)].tree));
                                                }
    break;

  case 56:
#line 612 "jucompiler.y"
    {   
                                                    (yyval.tree)=new_node(NO_VALUE, "Call");
                                                    tmp=new_node((yyvsp[(1) - (3)].tok)->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = 3;
                                                    insert_node((yyval.tree), tmp);
                                                }
    break;

  case 57:
#line 619 "jucompiler.y"
    {
                                                    (yyval.tree)=new_node(NO_VALUE, "Call");
                                                    tmp=new_node((yyvsp[(1) - (5)].tok)->cval, "Id");
                                                    insert_node((yyval.tree), tmp);
                                                    insert_neighbor(tmp, (yyvsp[(3) - (5)].tree));
                                                    flagDontPrintTree = 1;
                                                    /* TODO verificar se devemos inserir o erro */
                                                }
    break;

  case 58:
#line 632 "jucompiler.y"
    {
                                                    (yyval.tree)=(yyvsp[(2) - (3)].tree);
                                                    insert_neighbor((yyvsp[(2) - (3)].tree), (yyvsp[(3) - (3)].tree));
                                                }
    break;

  case 59:
#line 636 "jucompiler.y"
    {(yyval.tree)=new_node((yyvsp[(1) - (1)].tok)->cval, "IntLit");}
    break;

  case 60:
#line 638 "jucompiler.y"
    {
                                                    (yyval.tree)=(yyvsp[(2) - (2)].tree);
                                                }
    break;

  case 61:
#line 645 "jucompiler.y"
    {
                                                (yyval.tree)=new_node(NO_VALUE, "Assign");
                                                tmp=new_node((yyvsp[(1) - (3)].tok)->cval, "Id");
                                                insert_node((yyval.tree), tmp);
                                                insert_neighbor(tmp, (yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 62:
#line 658 "jucompiler.y"
    {
                                                (yyval.tree)=new_node(NO_VALUE, "ParseArgs");
                                                tmp=new_node((yyvsp[(3) - (7)].tok)->cval, "Id");
                                                insert_node((yyval.tree), tmp);
                                                insert_neighbor(tmp, (yyvsp[(5) - (7)].tree));
                                            }
    break;

  case 63:
#line 664 "jucompiler.y"
    {
                                                (yyval.tree)=new_node(NO_VALUE, "ParseArgs");
                                                flagDontPrintTree = 1;
                                                /*  TODO inserio o erro nao sei se devia */
                                            }
    break;

  case 64:
#line 673 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 65:
#line 675 "jucompiler.y"
    {(yyval.tree)=(yyvsp[(1) - (1)].tree);}
    break;

  case 66:
#line 681 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Add");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 67:
#line 686 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Sub");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 68:
#line 691 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Mul");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 69:
#line 696 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Div");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 70:
#line 701 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Mod");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 71:
#line 706 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"And");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 72:
#line 711 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Or");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 73:
#line 716 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Xor");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 74:
#line 721 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Lshift");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 75:
#line 726 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Rshift");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 76:
#line 731 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Eq");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 77:
#line 736 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Ge");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 78:
#line 741 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Gt");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 79:
#line 746 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Le");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 80:
#line 751 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Lt");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 81:
#line 756 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Ne");
                                                insert_node((yyval.tree),(yyvsp[(1) - (3)].tree));
                                                insert_neighbor((yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree));
                                            }
    break;

  case 82:
#line 761 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Plus");
                                                insert_node((yyval.tree),(yyvsp[(2) - (2)].tree));
                                            }
    break;

  case 83:
#line 765 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Minus");
                                                insert_node((yyval.tree),(yyvsp[(2) - (2)].tree));
                                            }
    break;

  case 84:
#line 769 "jucompiler.y"
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Not");
                                                insert_node((yyval.tree),(yyvsp[(2) - (2)].tree));
                                            }
    break;

  case 85:
#line 773 "jucompiler.y"
    {
                                                (yyval.tree)=(yyvsp[(2) - (3)].tree);
                                            }
    break;

  case 86:
#line 776 "jucompiler.y"
    {
                                                (yyval.tree)=NULL;
                                                flagDontPrintTree = 1;
                                            }
    break;

  case 87:
#line 780 "jucompiler.y"
    {  
                                                (yyval.tree)=(yyvsp[(1) - (1)].tree);                                            }
    break;

  case 88:
#line 782 "jucompiler.y"
    {  
                                                (yyval.tree)=(yyvsp[(1) - (1)].tree);
                                            }
    break;

  case 89:
#line 785 "jucompiler.y"
    {
                                                (yyval.tree)=new_node((yyvsp[(1) - (1)].tok)->cval, "Id");
                                                (yyval.tree)->line = line;
                                                (yyval.tree)->col = column;

                                            }
    break;

  case 90:
#line 791 "jucompiler.y"
    {
                                                (yyval.tree)=new_node(NO_VALUE, "Length");
                                                tmp=new_node((yyvsp[(1) - (2)].tok)->cval, "Id");
                                                (yyval.tree)->line = line;
                                                //$$->col = column-strlen($1)-strlen($2);
                                                insert_node((yyval.tree), tmp);

                                            }
    break;

  case 91:
#line 799 "jucompiler.y"
    {
                                                (yyval.tree)=new_node((yyvsp[(1) - (1)].tok)->cval, "DecLit");
                                                (yyval.tree)->line = line;
                                                (yyval.tree)->col = column;
                                            }
    break;

  case 92:
#line 805 "jucompiler.y"
    {
                                                (yyval.tree)=new_node((yyvsp[(1) - (1)].tok)->cval, "RealLit");
                                                (yyval.tree)->line = line;
                                                (yyval.tree)->col = column;
                                            }
    break;

  case 93:
#line 811 "jucompiler.y"
    {
                                                (yyval.tree)=new_node((yyvsp[(1) - (1)].tok)->cval, "BoolLit");
                                                (yyval.tree)->line = line;
                                                (yyval.tree)->col = column;
                                            }
    break;


/* Line 1267 of yacc.c.  */
#line 2649 "y.tab.c"
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


#line 818 "jucompiler.y"

