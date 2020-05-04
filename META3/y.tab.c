/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "jucompiler.y" /* yacc.c:339  */


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


#line 85 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 24 "jucompiler.y" /* yacc.c:355  */

    int ival;
    char * cval;
    s_Tree tree;

#line 239 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 256 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   492

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    67,    71,    76,    78,    85,    94,   114,
     122,   127,   134,   143,   145,   147,   153,   165,   175,   186,
     198,   205,   212,   223,   231,   244,   249,   258,   268,   273,
     275,   281,   290,   301,   320,   331,   365,   367,   401,   460,
     485,   490,   494,   496,   506,   514,   524,   526,   533,   535,
     541,   544,   547,   550,   557,   565,   572,   577,   590,   594,
     596,   603,   616,   622,   631,   633,   639,   644,   649,   654,
     659,   664,   669,   674,   679,   684,   689,   694,   699,   704,
     709,   714,   719,   723,   727,   731,   734,   738,   740,   743,
     746,   752,   754,   756
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "PUBLIC", "CLASS", "IF", "RETURN", "END", "IF2", "preced", "$accept",
  "Program", "Declaring", "MethodDecl", "FieldDecl", "CommaId", "Type",
  "MethodHeader", "FormalParams", "CommaTypeId", "MethodBody",
  "StatementVarDecl", "CommaIdVarDecl", "VarDecl", "Statement",
  "Statement2", "ExprSemicolon", "ExprOrStrlit", "MethodInvAssParseArgs",
  "MethodInvocation", "CommaExpr", "Assignment", "ParseArgs", "Expr",
  "OtherExpr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -45

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-45)))

#define YYTABLE_NINF -46

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -36,    29,    40,   -16,   -45,     6,    10,     6,    12,    67,
       6,     6,   -45,   -45,    25,   -45,   -45,   -45,   -45,   -45,
      89,   -45,   101,    88,    87,    74,   127,   -45,    52,   121,
      54,   -45,    93,   -45,   109,   102,   192,   -45,   -45,   104,
     110,   111,   212,   134,   105,   137,   182,   106,   -45,   -45,
     -45,   -45,   118,   150,   122,   141,   -45,   128,   -45,   320,
     278,   157,   -45,   228,   126,   293,   320,   320,    24,   -45,
     -45,   -45,   251,   328,   328,   328,   -45,   -45,   -45,   -45,
     -45,   129,   347,    75,   -45,   -45,   -45,   -45,   130,   152,
     -45,   -45,   -45,   -45,   -45,     2,    65,   -45,   -45,   -45,
     133,   -45,   143,   146,   -45,   147,   151,    72,   -45,   -45,
     -45,   -45,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   167,   -45,
     136,   183,    56,   -45,   156,   -45,   320,   -45,   159,   163,
     320,   160,     5,     5,   -45,   -45,   434,   -45,   -45,   451,
     344,   344,   344,   344,    84,   -45,   451,   377,    84,    79,
      79,   407,   181,   -45,   -45,   196,   -45,    86,   -45,   -45,
     166,   -45,   -45,   170,   -45,   152,   -45,   169,     5,   -45,
     -45,   -45
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,    10,     5,     0,     2,     3,     4,    15,    13,
       0,    14,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     9,     0,    53,     0,     0,     0,    26,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
      52,    17,     0,     0,     0,    12,    19,     0,     8,     0,
       0,     0,    36,     0,     0,     0,     0,     0,    89,    92,
      91,    93,     0,     0,     0,     0,    47,    40,    87,    64,
      88,     0,    65,     0,    25,    28,    27,    41,     0,    22,
      16,    11,    18,    61,    56,     0,     0,    44,    35,    49,
       0,    48,     0,     0,    90,     0,     0,    89,    83,    84,
      82,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,    20,     0,    59,     0,    55,     0,     0,
       0,     0,     0,     0,    86,    85,    71,    68,    69,    76,
      77,    78,    79,    80,    67,    70,    81,    72,    66,    74,
      75,    73,    32,    33,    21,     0,    57,    60,    54,    63,
       0,    43,    39,    37,    31,    24,    58,     0,     0,    23,
      62,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -45,   -45,   140,   -45,   -45,   153,    -3,   -45,   175,    31,
     -45,   -30,    45,   -45,   -35,   148,   -45,   -45,   -45,   -26,
      42,   -24,   -22,   -14,   -44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    32,    43,    23,    54,   133,
      27,    44,   130,    45,    46,    64,    77,   100,    47,    78,
     138,    79,    80,    81,    82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    63,    49,   134,    50,     5,    33,     6,    34,   135,
      48,    22,    49,     1,    50,    85,    86,    35,   136,    48,
      48,    49,    49,    50,    50,    53,    36,    53,    63,   108,
     109,   110,     3,    18,    19,   137,    20,    48,    59,    49,
       4,    50,    -6,    38,     7,    93,    95,    60,    12,    39,
      40,   101,   102,   103,     8,    41,    42,    21,   106,    14,
      18,    19,    18,    19,    18,    19,   139,   104,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,    21,    51,    21,    56,    21,   140,
      29,   128,    24,   135,   113,    60,   114,    30,    52,   113,
      52,   114,   136,    15,    25,   120,   121,   172,   173,    26,
      28,   121,    31,   129,   124,   104,    48,    48,    49,    49,
      50,    50,   167,    59,    55,    61,   170,    65,    33,   165,
      34,    58,    60,    66,    67,    18,    19,    83,    33,    35,
      34,    84,    88,   181,    87,    18,    19,    13,    36,    35,
      16,    17,    48,    89,    49,    90,    50,    29,    36,    21,
      96,    92,    98,    37,   131,    38,   141,   111,   132,    21,
     162,    39,    40,   -30,   163,    38,   142,    41,    42,   143,
     144,    39,    40,    33,   145,    34,   164,    41,    42,   166,
      18,    19,   168,    33,    35,    34,   169,   128,   171,   175,
     177,   178,   180,    36,    35,    57,   179,   174,    91,   176,
       0,    97,     0,    36,    21,    68,     0,    69,   -29,    70,
      38,     0,    71,     0,    35,     0,    39,    40,    62,    33,
      38,    34,    41,    42,     0,    72,    39,    40,    73,     0,
      35,    74,    41,    42,     0,     0,     0,    75,     0,    36,
      76,     0,   105,     0,    68,     0,    69,     0,    70,     0,
       0,    71,     0,    35,   -45,     0,    38,     0,     0,     0,
       0,     0,    39,    40,    72,     0,     0,    73,    41,    42,
      74,    68,     0,    69,     0,    70,    75,     0,    71,     0,
      35,     0,     0,     0,     0,     0,    68,    99,    69,     0,
      70,    72,     0,    71,    73,    35,     0,    74,     0,     0,
       0,    94,     0,    75,     0,     0,    72,     0,     0,    73,
       0,     0,    74,    68,     0,    69,     0,    70,    75,     0,
      71,   107,    35,    69,     0,    70,     0,     0,    71,     0,
      35,     0,     0,    72,     0,     0,    73,     0,     0,    74,
       0,    72,     0,     0,    73,    75,     0,    74,     0,   113,
     112,   114,   113,    75,   114,   115,   116,   117,     0,   118,
     120,   121,   119,   120,   121,   122,     0,   123,     0,   124,
       0,     0,   124,     0,   125,   126,     0,   125,   126,   127,
     112,     0,   113,     0,   114,   115,   116,   117,     0,   118,
       0,     0,   119,   120,   121,   122,     0,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,   125,   126,   127,
     112,     0,   113,     0,   114,   115,   116,   117,     0,   118,
       0,     0,   119,   120,   121,   122,     0,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,   125,   126,   113,
       0,   114,   115,   116,   117,     0,   118,     0,     0,   119,
     120,   121,   122,     0,     0,     0,   113,     0,   114,   124,
     116,   117,     0,   118,   125,   126,   119,   120,   121,     0,
       0,     0,     0,     0,     0,     0,   124,     0,     0,     0,
       0,   125,   126
};

static const yytype_int16 yycheck[] =
{
      26,    36,    26,     1,    26,    21,     1,     1,     3,     7,
      36,    14,    36,    49,    36,    45,    46,    12,    16,    45,
      46,    45,    46,    45,    46,    28,    21,    30,    63,    73,
      74,    75,     3,     8,     9,    33,    11,    63,    14,    63,
       0,    63,    36,    38,    38,    59,    60,    23,    38,    44,
      45,    65,    66,    67,    48,    50,    51,    32,    72,    47,
       8,     9,     8,     9,     8,     9,     1,    43,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,    32,    33,    32,    33,    32,    24,
      16,    16,     3,     7,    15,    23,    17,    23,    46,    15,
      46,    17,    16,    36,     3,    26,    27,   142,   143,    21,
      23,    27,    38,    38,    35,    43,   142,   143,   142,   143,
     142,   143,   136,    14,     3,    23,   140,    23,     1,   132,
       3,    38,    23,    23,    23,     8,     9,     3,     1,    12,
       3,    36,    24,   178,    38,     8,     9,     7,    21,    12,
      10,    11,   178,     3,   178,    33,   178,    16,    21,    32,
       3,    33,    36,    36,    34,    38,    33,    38,    16,    32,
       3,    44,    45,    36,    38,    38,    33,    50,    51,    33,
      33,    44,    45,     1,    33,     3,     3,    50,    51,    33,
       8,     9,    33,     1,    12,     3,    33,    16,    38,     3,
      34,    31,    33,    21,    12,    30,   175,   162,    55,   167,
      -1,    63,    -1,    21,    32,     3,    -1,     5,    36,     7,
      38,    -1,    10,    -1,    12,    -1,    44,    45,    36,     1,
      38,     3,    50,    51,    -1,    23,    44,    45,    26,    -1,
      12,    29,    50,    51,    -1,    -1,    -1,    35,    -1,    21,
      38,    -1,     1,    -1,     3,    -1,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    36,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    45,    23,    -1,    -1,    26,    50,    51,
      29,     3,    -1,     5,    -1,     7,    35,    -1,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    23,    -1,    10,    26,    12,    -1,    29,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    23,    -1,    -1,    26,
      -1,    -1,    29,     3,    -1,     5,    -1,     7,    35,    -1,
      10,     3,    12,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    23,    -1,    -1,    26,    -1,    -1,    29,
      -1,    23,    -1,    -1,    26,    35,    -1,    29,    -1,    15,
      13,    17,    15,    35,    17,    18,    19,    20,    -1,    22,
      26,    27,    25,    26,    27,    28,    -1,    30,    -1,    35,
      -1,    -1,    35,    -1,    40,    41,    -1,    40,    41,    42,
      13,    -1,    15,    -1,    17,    18,    19,    20,    -1,    22,
      -1,    -1,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      13,    -1,    15,    -1,    17,    18,    19,    20,    -1,    22,
      -1,    -1,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,    15,
      -1,    17,    18,    19,    20,    -1,    22,    -1,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    15,    -1,    17,    35,
      19,    20,    -1,    22,    40,    41,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,    56,     3,     0,    21,     1,    38,    48,    57,
      58,    59,    38,    57,    47,    36,    57,    57,     8,     9,
      11,    32,    61,    62,     3,     3,    21,    65,    23,    16,
      23,    38,    60,     1,     3,    12,    21,    36,    38,    44,
      45,    50,    51,    61,    66,    68,    69,    73,    74,    76,
      77,    33,    46,    61,    63,     3,    33,    63,    38,    14,
      23,    23,    36,    69,    70,    23,    23,    23,     3,     5,
       7,    10,    23,    26,    29,    35,    38,    71,    74,    76,
      77,    78,    79,     3,    36,    66,    66,    38,    24,     3,
      33,    60,    33,    78,    33,    78,     3,    70,    36,     4,
      72,    78,    78,    78,    43,     1,    78,     3,    79,    79,
      79,    38,    13,    15,    17,    18,    19,    20,    22,    25,
      26,    27,    28,    30,    35,    40,    41,    42,    16,    38,
      67,    34,    16,    64,     1,     7,    16,    33,    75,     1,
      24,    33,    33,    33,    33,    33,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,     3,    38,     3,    61,    33,    78,    33,    33,
      78,    38,    69,    69,    67,     3,    75,    34,    31,    64,
      33,    69
};

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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 58 "jucompiler.y" /* yacc.c:1646  */
    {    (yyval.tree)=myprogram=new_node(NO_VALUE,"Program");
                                                    tmp=new_node((yyvsp[-3].cval), "Id");
                                                    insert_node((yyval.tree), tmp);
                                                    insert_neighbor(tmp, (yyvsp[-1].tree));
                                                }
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 67 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                    insert_neighbor((yyvsp[-1].tree), (yyvsp[0].tree));
                                                    
                                                }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 71 "jucompiler.y" /* yacc.c:1646  */
    {
                                                    insert_neighbor((yyvsp[-1].tree), (yyvsp[0].tree));
                                                    (yyval.tree)=(yyvsp[-1].tree);
                                                }
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 76 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=(yyvsp[0].tree);}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 78 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=NULL;}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 85 "jucompiler.y" /* yacc.c:1646  */
    {
	        											(yyval.tree)=new_node(NO_VALUE, "MethodDecl");
	                                                    insert_node((yyval.tree), (yyvsp[-1].tree));
	                                                    insert_neighbor((yyvsp[-1].tree), (yyvsp[0].tree));
                                                    }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 94 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                        (yyval.tree)=new_node(NO_VALUE, "FieldDecl");
                                                        insert_node((yyval.tree), (yyvsp[-3].tree));
                                                        tmp=new_node((yyvsp[-2].cval), "Id");
                                                        insert_neighbor((yyvsp[-3].tree), tmp);
                                                        insert_neighbor((yyval.tree), (yyvsp[-1].tree));

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
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 114 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                        (yyval.tree)=new_node(NO_VALUE, "FieldDecl");
                                                        insert_node((yyval.tree), (yyvsp[-2].tree));
                                                        tmp=new_node((yyvsp[-1].cval), "Id");
                                                        insert_neighbor((yyvsp[-2].tree), tmp);
                                                    }
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 122 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=NULL;flagDontPrintTree = 1;}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 127 "jucompiler.y" /* yacc.c:1646  */
    {
        												(yyval.tree)=new_node(NO_VALUE, "FieldDecl");
                                                        tmp=new_node((yyvsp[-1].cval), "Id");
                                                        insert_node((yyval.tree), tmp);
                                                        insert_neighbor((yyval.tree), (yyvsp[0].tree)); 
                                                    }
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 134 "jucompiler.y" /* yacc.c:1646  */
    {
														(yyval.tree)=new_node(NO_VALUE, "FieldDecl");
                                                        tmp=new_node((yyvsp[0].cval), "Id");
                                                        insert_node((yyval.tree), tmp);
													}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 143 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node(NO_VALUE, "Bool");}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 145 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node(NO_VALUE, "Int");}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 147 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node(NO_VALUE, "Double");}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 153 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodHeader");
                                                    tmp=new_node("", "Void");
                                                    insert_node((yyval.tree), tmp);
                                                    tmp1=new_node((yyvsp[-3].cval), "Id");
                                                    insert_neighbor(tmp, tmp1);
                                                    tmp=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp1, tmp);
                                                    insert_node(tmp, (yyvsp[-1].tree));
                                                    
                                                }
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 165 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodHeader");
                                                    tmp=new_node("", "Void");
                                                    insert_node((yyval.tree), tmp);
                                                    tmp1=new_node((yyvsp[-2].cval), "Id");
                                                    insert_neighbor(tmp, tmp1);
                                                    tmp2=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp1, tmp2);
                                                }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 175 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodHeader");
                                                    insert_node((yyval.tree), (yyvsp[-4].tree));
                                                    tmp=new_node((yyvsp[-3].cval), "Id");
                                                    insert_neighbor((yyvsp[-4].tree), tmp);
                                                    tmp1=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp, tmp1);
                                                    insert_node(tmp1, (yyvsp[-1].tree));
                                                    
                                                }
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 186 "jucompiler.y" /* yacc.c:1646  */
    {
													(yyval.tree)=new_node(NO_VALUE, "MethodHeader");
                                                    insert_node((yyval.tree), (yyvsp[-3].tree));
                                                    tmp=new_node((yyvsp[-2].cval), "Id");
                                                    insert_neighbor((yyvsp[-3].tree), tmp);
                                                    tmp1=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp, tmp1);
                                                }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 198 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node((yyval.tree), (yyvsp[-2].tree));
                                                    tmp=new_node((yyvsp[-1].cval), "Id");
                                                    insert_neighbor((yyvsp[-2].tree), tmp);
                                                    insert_neighbor((yyval.tree), (yyvsp[0].tree));
                                                }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 205 "jucompiler.y" /* yacc.c:1646  */
    {
    												(yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    tmp=new_node(NO_VALUE, "StringArray");
                                                    tmp1=new_node((yyvsp[0].cval), "Id");
                                                    insert_node((yyval.tree), tmp);
                                                    insert_neighbor(tmp, tmp1);
                                                }
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 212 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node((yyval.tree), (yyvsp[-1].tree));
                                                    tmp=new_node((yyvsp[0].cval), "Id");
                                                    insert_neighbor((yyvsp[-1].tree), tmp);
                                                }
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 223 "jucompiler.y" /* yacc.c:1646  */
    {  
       												(yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node((yyval.tree), (yyvsp[-2].tree));
                                                    tmp=new_node((yyvsp[-1].cval), "Id");
                                                    insert_neighbor((yyvsp[-2].tree), tmp);
                                                    insert_neighbor((yyval.tree), (yyvsp[0].tree));
                                                }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 231 "jucompiler.y" /* yacc.c:1646  */
    {  	
    												(yyval.tree)=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node((yyval.tree), (yyvsp[-1].tree));
                                                    tmp=new_node((yyvsp[0].cval), "Id");
                                                    insert_neighbor((yyvsp[-1].tree), tmp);
                                                }
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 244 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                    (yyval.tree)=new_node(NO_VALUE, "MethodBody");
                                                    insert_node((yyval.tree), (yyvsp[-1].tree));
                                                }
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 249 "jucompiler.y" /* yacc.c:1646  */
    {
    												(yyval.tree)=new_node(NO_VALUE, "MethodBody");
    											}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 258 "jucompiler.y" /* yacc.c:1646  */
    {  
        											if((yyvsp[-1].tree) != NULL){
        												insert_neighbor((yyvsp[-1].tree),(yyvsp[0].tree));
														(yyval.tree)=(yyvsp[-1].tree); 
        											}else{
        											(yyval.tree)= (yyvsp[0].tree);
        											}
													
    												
                                                }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 268 "jucompiler.y" /* yacc.c:1646  */
    {
													insert_neighbor((yyvsp[-1].tree),(yyvsp[0].tree));
													(yyval.tree)=(yyvsp[-1].tree);                                         
    											}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 273 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=(yyvsp[0].tree);}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 275 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=(yyvsp[0].tree);}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 281 "jucompiler.y" /* yacc.c:1646  */
    {
														(yyval.tree)=new_node(NO_VALUE, "VarDecl");
                                                        tmp=new_node((yyvsp[-1].cval), "Id");
                                                        insert_node((yyval.tree), tmp);
                                                        insert_neighbor((yyval.tree), (yyvsp[0].tree)); 


                                                    }
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 290 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node(NO_VALUE, "VarDecl");
                                                        tmp=new_node((yyvsp[0].cval), "Id");
                                                        insert_node((yyval.tree), tmp);
                                                        }
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 301 "jucompiler.y" /* yacc.c:1646  */
    {  
       												(yyval.tree)=new_node(NO_VALUE, "VarDecl");
                                                    insert_node((yyval.tree), (yyvsp[-3].tree));
                                                    tmp=new_node((yyvsp[-2].cval), "Id");
                                                    insert_neighbor((yyvsp[-3].tree), tmp);
                                                    insert_neighbor((yyval.tree), (yyvsp[-1].tree));

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
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 320 "jucompiler.y" /* yacc.c:1646  */
    {  
       												(yyval.tree)=new_node(NO_VALUE, "VarDecl");
                                                    insert_node((yyval.tree), (yyvsp[-2].tree));
                                                    tmp=new_node((yyvsp[-1].cval), "Id");
                                                    insert_neighbor((yyvsp[-2].tree), tmp);
                                                }
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 331 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                              
                                                               int flag = 1;
                                                               int contadorDentroWhile = 0;
                                                               tmp1 = (yyvsp[-1].tree);
                                                                

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
                                                                
                                                                	(yyval.tree)=(yyvsp[-1].tree);
                                                                	globalContador = 0;
                                                                }
                                                            }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 365 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node(NO_VALUE, "Null");}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 367 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "If");
                                                                insert_node((yyval.tree), (yyvsp[-2].tree));
                                                                if((yyvsp[0].tree) != NULL){
                                                                	insert_neighbor((yyvsp[-2].tree), (yyvsp[0].tree));
                                                                }

                                                               

                                                              	int contador = 0;
                                                                tmp1 = (yyvsp[0].tree);

			                                                    while(tmp1 != NULL){
			                                                    	if(strcmp(tmp1->type, "Null") != 0)
			                                                    		contador++;
			                                                    	tmp1 = tmp1->neighbor;
			                                                    }  

			                                                    tmp=new_node(NO_VALUE, "Block");

                                                                if(contador == 0){
                                                                	insert_neighbor((yyvsp[-2].tree), tmp);
                                                                } else if (contador > 1){
                                                                	insert_node(tmp, (yyvsp[-2].tree)->neighbor);
                                                                	(yyvsp[-2].tree)->neighbor = tmp;
                                                                }

                                                                tmp=new_node(NO_VALUE, "Block");

                                                                insert_neighbor((yyvsp[-2].tree), tmp);

                                                                
                                                                /* TODO isto do prec deve precisar de algo*/
                                                            }
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 401 "jucompiler.y" /* yacc.c:1646  */
    {  

    															int contador1 = 0;
    															tmp1 = (yyvsp[-2].tree);

			                                                    while(tmp1 != NULL){
			                                                    	if(strcmp(tmp1->type, "Null") != 0)
			                                                    		contador1++;
			                                                    	tmp1 = tmp1->neighbor;
			                                                    }  

			                                                    int contador2 = 0;
                                                                tmp1 = (yyvsp[0].tree);

			                                                    while(tmp1 != NULL){
			                                                    	if(strcmp(tmp1->type, "Null") != 0){
			                                                    		contador2++;
			                                                    	}
			                                                    	tmp1 = tmp1->neighbor;
			                                                    }  

			                                                    tmp=new_node(NO_VALUE, "Block");
			                                                    tmp1=new_node(NO_VALUE, "Block");

                                                                (yyval.tree)=new_node(NO_VALUE, "If");
                                                                insert_node((yyval.tree), (yyvsp[-4].tree));

                                                                if((yyvsp[-2].tree) != NULL && contador1 != 0){
                                                                	if(contador1 > 1){
                                                                		insert_node((yyvsp[-4].tree), tmp);
                                                                		insert_neighbor(tmp, (yyvsp[-2].tree));
                                                                	}else{
                                                                		insert_neighbor((yyvsp[-4].tree), (yyvsp[-2].tree));
                                                                	}
                                                                	if((yyvsp[0].tree) != NULL && contador2 != 0){
                                                                		if(contador2 > 1){
                                                                			insert_neighbor((yyvsp[-2].tree), tmp);
                                                                			insert_neighbor(tmp, (yyvsp[0].tree));
                                                                		}else{
                                                                			insert_neighbor((yyvsp[-2].tree), (yyvsp[0].tree));
                                                                		}
                                                                	}
                                                                }else{

                                                                	insert_neighbor((yyvsp[-4].tree), tmp); 

                                                                	if((yyvsp[0].tree) != NULL && contador2 != 0){
                                                                		if(contador2 > 1){
                                                                			insert_neighbor(tmp, tmp1);
                                                                			insert_neighbor(tmp1, (yyvsp[0].tree));
                                                                		}else{
                                                                			insert_neighbor(tmp, (yyvsp[0].tree));
                                                                		}
                                                                	}else{
                                                                		insert_neighbor(tmp, tmp1);
                                                                	}
                                                                }

                                                          	}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 460 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "While");
                                                                insert_node((yyval.tree), (yyvsp[-2].tree));

                                                                int contador = 0;
    															tmp1 = (yyvsp[0].tree);
			                                                    while(tmp1 != NULL){
			                                                    	if(strcmp(tmp1->type, "Null") != 0)
			                                                    		contador++;
			                                                    	tmp1 = tmp1->neighbor;
			                                                    }  

			                                                    tmp=new_node(NO_VALUE, "Block");

			                                                    if(contador == 0){
			                                                    	insert_neighbor((yyvsp[-2].tree), tmp);
			                                                    }else if(contador > 1){
			                                                    	insert_neighbor((yyvsp[-2].tree), tmp);
			                                                    	insert_node(tmp, (yyvsp[0].tree));
			                                                    }else{
			                                                    	insert_neighbor((yyvsp[-2].tree), (yyvsp[0].tree));
			                                                    }
                                                                
                                                            }
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 485 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "Return");
                                                                if((yyvsp[0].tree) != NULL)
                                                                	insert_node((yyval.tree), (yyvsp[0].tree));
                                                            }
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 490 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                                (yyval.tree)=(yyvsp[-1].tree);
                                                            }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 494 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node(NO_VALUE, "Null");}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 496 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                                (yyval.tree)=new_node(NO_VALUE, "Print");
                                                                insert_node((yyval.tree), (yyvsp[-2].tree));
                                                                
                                                            }
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 506 "jucompiler.y" /* yacc.c:1646  */
    {
                                                    			insert_neighbor((yyvsp[-1].tree), (yyvsp[0].tree));
                                                    			(yyval.tree)=(yyvsp[-1].tree);
                                                    			
                                                    			if(strcmp((yyvsp[-1].tree)->type, "Null") != 0)
                                                    				globalContador++;
                                                			}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 514 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=(yyvsp[0].tree);
    														if(strcmp((yyvsp[0].tree)->type, "Null") != 0)
    																globalContador++;
    														}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 524 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=(yyvsp[-1].tree);}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 526 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=NULL;}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 533 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=(yyvsp[0].tree);}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 535 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node((yyvsp[0].cval), "StrLit");}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 541 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                    (yyval.tree)=(yyvsp[0].tree);
                                                }
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 544 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                    (yyval.tree)=(yyvsp[0].tree);
                                                }
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 547 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                    (yyval.tree)=(yyvsp[0].tree);
                                                }
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 550 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node(NO_VALUE, "Null");flagDontPrintTree = 1;}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 557 "jucompiler.y" /* yacc.c:1646  */
    {
	       											(yyval.tree)=new_node(NO_VALUE, "Call");
	                                                tmp=new_node((yyvsp[-4].cval), "Id");
	                                                insert_node((yyval.tree), tmp);
	                                                insert_neighbor(tmp, (yyvsp[-2].tree));
	                                                insert_neighbor((yyvsp[-2].tree), (yyvsp[-1].tree));
	                                            }
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 565 "jucompiler.y" /* yacc.c:1646  */
    {
	       											(yyval.tree)=new_node(NO_VALUE, "Call");
	                                                tmp=new_node((yyvsp[-3].cval), "Id");
	                                                insert_node((yyval.tree), tmp);
	                                                insert_neighbor(tmp, (yyvsp[-1].tree));
	                                            }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 572 "jucompiler.y" /* yacc.c:1646  */
    {   
	       											(yyval.tree)=new_node(NO_VALUE, "Call");
	                                                tmp=new_node((yyvsp[-2].cval), "Id");
	                                                insert_node((yyval.tree), tmp);
                                            	}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 577 "jucompiler.y" /* yacc.c:1646  */
    {
	                                                (yyval.tree)=new_node(NO_VALUE, "Call");
	                                                tmp=new_node((yyvsp[-4].cval), "Id");
	                                                insert_node((yyval.tree), tmp);
	                                                insert_neighbor(tmp, (yyvsp[-2].tree));
	                                                flagDontPrintTree = 1;
	                                                /* TODO verificar se devemos inserir o erro */
                                            	}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 590 "jucompiler.y" /* yacc.c:1646  */
    {
                                                	(yyval.tree)=(yyvsp[-1].tree);
                                                	insert_neighbor((yyvsp[-1].tree), (yyvsp[0].tree));
               	                            	}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 594 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node((yyvsp[0].cval), "IntLit");}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 596 "jucompiler.y" /* yacc.c:1646  */
    {
                                                	(yyval.tree)=(yyvsp[0].tree);
               	                            	}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 603 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree)=new_node(NO_VALUE, "Assign");
                                                tmp=new_node((yyvsp[-2].cval), "Id");
                                                insert_node((yyval.tree), tmp);
                                                insert_neighbor(tmp, (yyvsp[0].tree));
                                            }
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 616 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree)=new_node(NO_VALUE, "ParseArgs");
                                                tmp=new_node((yyvsp[-4].cval), "Id");
                                                insert_node((yyval.tree), tmp);
                                                insert_neighbor(tmp, (yyvsp[-2].tree));
                                            }
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 622 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree)=new_node(NO_VALUE, "ParseArgs");
                                                flagDontPrintTree = 1;
                                                /*  TODO inserio o erro nao sei se devia */
                                            }
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 631 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=(yyvsp[0].tree);}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 633 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=(yyvsp[0].tree);}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 639 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Add");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 644 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Sub");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 649 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Mul");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 654 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Div");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 659 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Mod");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 664 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"And");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 669 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Or");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 674 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Xor");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 679 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"LShift");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 684 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"RShift");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 689 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Eq");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 694 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Ge");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 699 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Gt");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 704 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Le");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 709 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Lt");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 714 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Ne");
                                                insert_node((yyval.tree),(yyvsp[-2].tree));
                                                insert_neighbor((yyvsp[-2].tree),(yyvsp[0].tree));
                                            }
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 719 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Plus");
                                                insert_node((yyval.tree),(yyvsp[0].tree));
                                            }
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 723 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Minus");
                                                insert_node((yyval.tree),(yyvsp[0].tree));
                                            }
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 727 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree) = new_node(NO_VALUE,"Not");
                                                insert_node((yyval.tree),(yyvsp[0].tree));
                                            }
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 731 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree)=(yyvsp[-1].tree);
                                            }
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 734 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree)=NULL;
                                                flagDontPrintTree = 1;
                                            }
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 738 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                (yyval.tree)=(yyvsp[0].tree);                                            }
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 740 "jucompiler.y" /* yacc.c:1646  */
    {  
                                                (yyval.tree)=(yyvsp[0].tree);
                                            }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 743 "jucompiler.y" /* yacc.c:1646  */
    {
                                                (yyval.tree)=new_node((yyvsp[0].cval), "Id");
                                            }
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 746 "jucompiler.y" /* yacc.c:1646  */
    {
    											(yyval.tree)=new_node(NO_VALUE, "Length");
                                                tmp=new_node((yyvsp[-1].cval), "Id");
                                                insert_node((yyval.tree), tmp);

                                            }
#line 2510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 752 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node((yyvsp[0].cval), "DecLit");}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 754 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node((yyvsp[0].cval), "RealLit");}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 756 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.tree)=new_node((yyvsp[0].cval), "BoolLit");}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2532 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 759 "jucompiler.y" /* yacc.c:1906  */


