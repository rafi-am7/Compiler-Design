
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "1807119.y"

#include<stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <math.h>
struct {
float tfloat;
int tint;
char *tstr;
}store[900];
int yylex(void);
int indexx=0;


/* Line 189 of yacc.c  */
#line 89 "1807119.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     CHAR = 259,
     FLOAT = 260,
     LB = 261,
     st = 262,
     et = 263,
     floattracker = 264,
     RB = 265,
     LP = 266,
     RP = 267,
     CM = 268,
     SM = 269,
     MAIN_FUNC = 270,
     ASSIGN = 271,
     PLUS = 272,
     MINUS = 273,
     MULT = 274,
     DIV = 275,
     GT = 276,
     LT = 277,
     Loop = 278,
     SWITCH = 279,
     CASE = 280,
     DEFAULT = 281,
     SHOW = 282,
     CC = 283,
     IF = 284,
     ELSE = 285,
     eo = 286,
     Multiply = 287,
     SUM = 288,
     IEC = 289,
     WHILE = 290,
     Prime = 291,
     powerf = 292,
     division = 293,
     YEAR = 294,
     pal = 295,
     FACTORIAL = 296,
     trigo = 297,
     sine = 298,
     cose = 299,
     tane = 300,
     incre = 301,
     decre = 302,
     lteq = 303,
     gteq = 304,
     and = 305,
     or = 306,
     equal = 307,
     notequal = 308,
     VARIABLE = 309,
     NFLOAT = 310,
     NINT = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 "1807119.y"

int iv;
float fv;
char *sv;



/* Line 214 of yacc.c  */
#line 189 "1807119.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 201 "1807119.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1263

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  299

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    18,    21,    25,    27,
      29,    31,    35,    37,    39,    43,    47,    51,    53,    57,
      61,    63,    66,    69,    99,   137,   183,   189,   197,   205,
     214,   228,   250,   253,   267,   273,   281,   287,   293,   299,
     307,   313,   319,   325,   338,   351,   356,   361,   366,   368,
     371,   375,   379,   383,   387,   391,   395,   399,   402,   405,
     409,   413,   417,   421,   425,   429,   431,   433,   437,   441,
     445,   449,   453,   457,   461,   464,   467,   471,   475,   479,
     483,   487
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    15,     7,     8,     6,    59,    10,    -1,
      -1,    59,    60,    -1,    59,    64,    14,    -1,    59,    66,
      -1,    61,    62,    14,    -1,     3,    -1,     5,    -1,     4,
      -1,    62,    13,    63,    -1,    63,    -1,    54,    -1,    54,
      16,    55,    -1,    54,    16,    56,    -1,    64,    13,    65,
      -1,    65,    -1,    54,    16,    55,    -1,    54,    16,    56,
      -1,    14,    -1,    70,    14,    -1,    69,    14,    -1,    24,
      11,    70,    12,     6,    25,    70,    28,    27,    11,    70,
      12,    14,    25,    70,    28,    27,    11,    70,    12,    14,
      26,    28,    27,    11,    70,    12,    14,    10,    -1,    24,
      11,    70,    12,     6,    25,    70,    28,    27,    11,    70,
      12,    14,    25,    70,    28,    27,    11,    70,    12,    14,
      25,    70,    28,    27,    11,    70,    12,    14,    26,    28,
      27,    11,    70,    12,    14,    10,    -1,    24,    11,    70,
      12,     6,    25,    70,    28,    27,    11,    70,    12,    14,
      25,    70,    28,    27,    11,    70,    12,    14,    25,    70,
      28,    27,    11,    70,    12,    14,    25,    70,    28,    27,
      11,    70,    12,    14,    26,    28,    27,    11,    70,    12,
      14,    10,    -1,    31,     7,    70,     8,    14,    -1,    32,
       7,    70,    13,    70,     8,    14,    -1,    33,     7,    70,
      13,    70,     8,    14,    -1,    29,    11,    70,    12,     6,
      70,    14,    10,    -1,    29,    11,    70,    12,     6,    70,
      14,    10,    30,     6,    70,    14,    10,    -1,    29,    11,
      70,    12,     6,    70,    14,    10,    34,    11,    70,    12,
       6,    70,    14,    10,    30,     6,    70,    14,    10,    -1,
      23,    67,    -1,    35,    11,    70,    22,    70,    12,     6,
      70,    16,    70,    17,    70,    10,    -1,    36,     7,    70,
       8,    14,    -1,    37,     7,    70,    13,    70,     8,    14,
      -1,    41,     7,    70,     8,    14,    -1,    39,     7,    70,
       8,    14,    -1,    40,     7,    70,     8,    14,    -1,    38,
       7,    70,    13,    70,     8,    14,    -1,    27,    11,    70,
      12,    14,    -1,    27,    11,    69,    12,    14,    -1,    42,
       7,    68,     8,    14,    -1,    11,    70,    13,    70,    12,
       6,    70,    16,    70,    19,    70,    10,    -1,    11,    70,
      13,    70,    12,     6,    70,    16,    70,    17,    70,    10,
      -1,    43,    11,    70,    12,    -1,    44,    11,    70,    12,
      -1,    45,    11,    70,    12,    -1,    55,    -1,    54,     9,
      -1,    69,    17,    69,    -1,    69,    18,    69,    -1,    69,
      19,    69,    -1,    69,    20,    69,    -1,    69,    22,    69,
      -1,    69,    21,    69,    -1,    11,    69,    12,    -1,    69,
      46,    -1,    69,    47,    -1,    69,    48,    69,    -1,    69,
      49,    69,    -1,    69,    51,    69,    -1,    69,    50,    69,
      -1,    69,    52,    69,    -1,    69,    53,    69,    -1,    56,
      -1,    54,    -1,    70,    17,    70,    -1,    70,    18,    70,
      -1,    70,    19,    70,    -1,    70,    20,    70,    -1,    70,
      22,    70,    -1,    70,    21,    70,    -1,    11,    70,    12,
      -1,    70,    46,    -1,    70,    47,    -1,    70,    48,    70,
      -1,    70,    49,    70,    -1,    70,    51,    70,    -1,    70,
      50,    70,    -1,    70,    52,    70,    -1,    70,    53,    70,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    42,    43,    44,    45,    48,    50,    51,
      52,    54,    55,    57,    76,    95,   116,   117,   119,   136,
     154,   155,   156,   157,   171,   188,   208,   222,   233,   244,
     255,   266,   280,   281,   299,   319,   325,   335,   343,   359,
     372,   373,   374,   376,   394,   413,   419,   425,   432,   436,
     451,   452,   453,   454,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   476,   480,   495,   496,   497,
     498,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CHAR", "FLOAT", "LB", "st", "et",
  "floattracker", "RB", "LP", "RP", "CM", "SM", "MAIN_FUNC", "ASSIGN",
  "PLUS", "MINUS", "MULT", "DIV", "GT", "LT", "Loop", "SWITCH", "CASE",
  "DEFAULT", "SHOW", "CC", "IF", "ELSE", "eo", "Multiply", "SUM", "IEC",
  "WHILE", "Prime", "powerf", "division", "YEAR", "pal", "FACTORIAL",
  "trigo", "sine", "cose", "tane", "incre", "decre", "lteq", "gteq", "and",
  "or", "equal", "notequal", "VARIABLE", "NFLOAT", "NINT", "$accept",
  "program", "firststatement", "declaration", "TYPE", "ID", "id1",
  "assignop", "assign", "secondstatement", "list", "angle", "floatv",
  "expre", 0
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
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    59,    59,    60,    61,    61,
      61,    62,    62,    63,    63,    63,    64,    64,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     3,     2,     3,     1,     1,
       1,     3,     1,     1,     3,     3,     3,     1,     3,     3,
       1,     2,     2,    29,    37,    45,     5,     7,     7,     8,
      13,    21,     2,    13,     5,     7,     5,     5,     5,     7,
       5,     5,     5,    12,    12,     4,     4,     4,     1,     2,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     3,     3,     3,     3,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,     8,    10,
       9,     2,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      48,    65,     4,     0,     0,    17,     6,     0,     0,    66,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
      13,     0,    12,     0,     5,    22,     0,     0,     0,     0,
       0,     0,    57,    58,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,    74,    75,     0,
       0,     0,     0,     0,     0,    56,    73,     0,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    19,
       0,     0,     7,     0,    16,     0,     0,    50,    51,    52,
      53,    55,    54,    59,    60,    62,    61,    63,    64,    67,
      68,    69,    70,    72,    71,    76,    77,    79,    78,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,    11,     0,     0,    41,    40,     0,    26,     0,
       0,    71,    34,     0,     0,    37,    38,    36,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    46,    47,     0,     0,     0,    27,    28,     0,    35,
      39,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    69,     0,     0,     0,    67,    44,    43,     0,
      30,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,    25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    32,    33,    61,    62,    34,    35,    36,
      43,   117,    40,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -39
static const yytype_int16 yypact[] =
{
       0,     1,    20,    50,   -39,    28,   -39,   259,   -39,   -39,
     -39,   -39,     5,   -39,    17,    84,    91,   115,    56,   103,
     124,   129,   136,   142,   146,   151,   174,   175,   176,    -2,
     -39,   -39,   -39,   130,    -3,   -39,   -39,   921,   930,   178,
     427,   438,     8,   -39,     8,     5,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,    80,   -39,   -38,
     169,    52,   -39,   134,   -39,   -39,    16,    16,    16,    16,
      16,    16,   -39,   -39,    16,    16,    16,    16,    16,    16,
     -39,     8,     8,     8,     8,     8,     8,   -39,   -39,     8,
       8,     8,     8,     8,     8,   -39,   -39,     8,   -39,   810,
     480,   491,   502,   544,     4,   820,   861,  1149,    86,   871,
     881,   285,   300,   308,   179,   184,   186,   181,   -39,   -39,
      13,   130,   -39,   190,   -39,    16,   178,   152,   152,    34,
      34,    95,    95,    95,    95,   -16,   -16,  1157,  1157,   158,
     158,    70,    70,   156,   156,   156,   156,   145,   145,  1194,
    1194,     8,   194,   193,   195,   204,   197,     8,     8,     8,
     199,     8,     8,   203,   206,   207,     8,     8,     8,   208,
     -39,   -39,   -39,   555,   200,   -39,   -39,     8,   -39,   354,
     362,   110,   -39,   370,   416,   -39,   -39,   -39,   566,   608,
     619,   -39,   218,     8,   939,   212,   213,   222,   215,   216,
     -39,   -39,   -39,     8,  1051,   221,   -39,   -39,     8,   -39,
     -39,  1035,   205,   -21,  1043,     8,   224,   227,   226,     8,
    1202,     8,     8,     8,  1210,     8,     8,   630,   979,   672,
       8,    99,    26,   225,   228,   234,   101,   -39,   -39,   217,
     -39,     8,   -39,     8,   988,  1088,   231,   219,   220,   232,
     241,     8,     8,   683,   997,   235,   238,   143,   -39,     8,
     223,  1100,   229,   230,   242,   243,     8,     8,   694,   736,
     244,   247,   245,   154,   -39,     8,   237,  1137,   239,   240,
     260,   261,     8,     8,   747,   758,   263,   264,   269,   248,
     -39,   252,   254,   273,     8,   800,   271,   279,   -39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -39,   -39,   -39,   -39,   -39,   -39,   188,   -39,   249,   -39,
     -39,   -39,    22,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      38,    66,    67,    68,    69,    70,    71,    58,     3,   217,
      63,    64,   156,   218,    59,     1,    12,   118,   119,    97,
       4,    81,    82,    83,    84,    85,    86,   125,    42,    37,
      72,    73,    74,    75,     6,    99,   238,   100,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      87,    88,    89,    90,    91,    92,    93,    94,     5,    39,
      30,    31,    98,    47,    31,   121,   122,   101,   170,   171,
     126,    30,    87,    88,   139,   140,   141,   142,   143,   144,
      72,    73,   145,   146,   147,   148,   149,   150,   127,   128,
     129,   130,   131,   132,   160,    44,   133,   134,   135,   136,
     137,   138,    45,    81,    82,    83,    84,    85,    86,   237,
      48,   242,    66,    67,    68,    69,    87,    88,    83,    84,
      83,    84,   197,   114,   115,   116,    46,    81,    82,    83,
      84,    49,    87,    88,    89,    90,    91,    92,    93,    94,
      50,    72,    73,    51,   173,    87,    88,    87,    88,    52,
     179,   180,   181,    53,   183,   184,    87,    88,    54,   188,
     189,   190,    81,    82,    83,    84,    85,    86,   259,   260,
     194,    68,    69,    81,    82,    83,    84,    83,    84,   275,
     276,    55,    56,    57,    60,   120,   204,    58,   123,   169,
     166,    87,    88,    89,    90,   167,   211,   168,    72,    73,
     174,   214,    87,    88,    87,    88,    59,   175,   220,   176,
     177,   178,   224,   182,   227,   228,   229,   185,   231,   232,
     186,   187,   191,   236,   203,   193,   206,   207,   208,   209,
     210,   213,   216,   222,   244,   221,   245,   223,   240,   239,
     241,   248,   243,   251,   253,   254,   249,   252,   258,   257,
     250,   262,   261,   266,   267,   274,   264,   265,   272,   268,
     269,   273,     8,     9,    10,   278,   280,   281,   277,    11,
      12,   282,   283,    13,   291,   284,   285,   288,   289,   290,
     292,   293,    14,    15,   294,   297,    16,   295,    17,   298,
      18,    19,    20,   163,    21,    22,    23,    24,    25,    26,
      27,    28,    81,    82,    83,    84,    85,    86,   164,   172,
       0,     0,   124,    29,    30,    31,   165,    81,    82,    83,
      84,    85,    86,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,    92,    93,    94,    87,    88,    89,    90,    91,    92,
      93,    94,   195,     0,     0,     0,     0,     0,     0,     0,
     196,    81,    82,    83,    84,    85,    86,     0,   198,    81,
      82,    83,    84,    85,    86,     0,     0,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    93,    94,    87,    88,
      89,    90,    91,    92,    93,    94,    87,    88,    89,    90,
      91,    92,    93,    94,   199,     0,     0,     0,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    95,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      96,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,     0,    87,    88,    89,    90,    91,    92,    93,    94,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,    87,    88,    89,    90,    91,    92,
      93,    94,   152,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,   153,     0,     0,     0,     0,    66,    67,
      68,    69,    70,    71,   154,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,     0,    87,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,    87,    88,
      89,    90,    91,    92,    93,    94,   155,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,   192,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,   200,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,     0,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,    87,    88,    89,    90,    91,    92,    93,    94,     0,
       0,     0,    87,    88,    89,    90,    91,    92,    93,    94,
     201,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,   202,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,   233,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,     0,    87,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    93,    94,     0,     0,     0,    87,    88,    89,    90,
      91,    92,    93,    94,   235,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,   255,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,   270,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,     0,    87,    88,
      89,    90,    91,    92,    93,    94,     0,     0,     0,    87,
      88,    89,    90,    91,    92,    93,    94,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    93,    94,   271,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,   286,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
     287,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,     0,    87,    88,    89,    90,    91,    92,    93,    94,
       0,     0,     0,    87,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,    87,    88,    89,    90,    91,    92,
      93,    94,   296,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,   151,     0,     0,     0,    81,    82,    83,
      84,    85,    86,   157,     0,     0,     0,    81,    82,    83,
      84,    85,    86,     0,     0,     0,    87,    88,    89,    90,
      91,    92,    93,    94,     0,     0,    87,    88,    89,    90,
      91,    92,    93,    94,     0,     0,    87,    88,    89,    90,
      91,    92,    93,    94,   158,     0,     0,     0,    81,    82,
      83,    84,    85,    86,   161,     0,     0,     0,    81,    82,
      83,    84,    85,    86,   162,     0,     0,     0,    81,    82,
      83,    84,    85,    86,     0,     0,     0,    87,    88,    89,
      90,    91,    92,    93,    94,     0,     0,    87,    88,    89,
      90,    91,    92,    93,    94,     0,     0,    87,    88,    89,
      90,    91,    92,    93,    94,    65,     0,     0,    66,    67,
      68,    69,    70,    71,    80,     0,     0,    81,    82,    83,
      84,    85,    86,   205,     0,     0,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,     0,    87,    88,    89,    90,
      91,    92,    93,    94,     0,    87,    88,    89,    90,    91,
      92,    93,    94,   234,     0,     0,    81,    82,    83,    84,
      85,    86,   246,     0,     0,    81,    82,    83,    84,    85,
      86,   256,     0,     0,    81,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    93,    94,     0,    87,    88,    89,    90,    91,    92,
      93,    94,     0,    87,    88,    89,    90,    91,    92,    93,
      94,   215,    81,    82,    83,    84,    85,    86,     0,   219,
      81,    82,    83,    84,    85,    86,     0,     0,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,   212,
       0,    87,    88,    89,    90,    91,    92,    93,    94,    87,
      88,    89,    90,    91,    92,    93,    94,    87,    88,    89,
      90,    91,    92,    93,    94,    81,    82,    83,    84,    85,
      86,     0,     0,     0,     0,     0,   247,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,   263,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,    87,    88,    89,    90,
      91,    92,    93,    94,    81,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,   279,    81,    82,    83,    84,
      85,   159,     0,     0,    66,    67,    68,    69,    70,    71,
       0,     0,     0,    87,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    93,    94,    72,    73,    74,    75,    76,    77,    78,
      79,    81,    82,    83,    84,    85,    86,     0,     0,   225,
      82,   226,    84,    85,    86,     0,     0,   230,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    93,    94,    87,    88,
      89,    90,    91,    92,    93,    94,    87,    88,    89,    90,
      91,    92,    93,    94
};

static const yytype_int16 yycheck[] =
{
       7,    17,    18,    19,    20,    21,    22,     9,     7,    30,
      13,    14,     8,    34,    16,    15,    11,    55,    56,    11,
       0,    17,    18,    19,    20,    21,    22,    11,    11,     7,
      46,    47,    48,    49,     6,    42,    10,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      46,    47,    48,    49,    50,    51,    52,    53,     8,    54,
      55,    56,    54,     7,    56,    13,    14,    45,    55,    56,
      54,    55,    46,    47,    81,    82,    83,    84,    85,    86,
      46,    47,    89,    90,    91,    92,    93,    94,    66,    67,
      68,    69,    70,    71,     8,    11,    74,    75,    76,    77,
      78,    79,    11,    17,    18,    19,    20,    21,    22,    10,
       7,    10,    17,    18,    19,    20,    46,    47,    19,    20,
      19,    20,    12,    43,    44,    45,    11,    17,    18,    19,
      20,     7,    46,    47,    48,    49,    50,    51,    52,    53,
      11,    46,    47,     7,   151,    46,    47,    46,    47,     7,
     157,   158,   159,     7,   161,   162,    46,    47,     7,   166,
     167,   168,    17,    18,    19,    20,    21,    22,    25,    26,
     177,    19,    20,    17,    18,    19,    20,    19,    20,    25,
      26,     7,     7,     7,    54,    16,   193,     9,    54,     8,
      11,    46,    47,    48,    49,    11,   203,    11,    46,    47,
       6,   208,    46,    47,    46,    47,    16,    14,   215,    14,
       6,    14,   219,    14,   221,   222,   223,    14,   225,   226,
      14,    14,    14,   230,     6,    25,    14,    14,     6,    14,
      14,    10,    27,     6,   241,    11,   243,    11,    10,    14,
       6,    10,    25,    11,   251,   252,    27,     6,    10,    14,
      30,    28,   259,    11,    11,    10,    27,    27,    14,   266,
     267,    14,     3,     4,     5,    28,    27,    27,   275,    10,
      11,    11,    11,    14,    26,   282,   283,    14,    14,    10,
      28,    27,    23,    24,    11,    14,    27,   294,    29,    10,
      31,    32,    33,     8,    35,    36,    37,    38,    39,    40,
      41,    42,    17,    18,    19,    20,    21,    22,     8,   121,
      -1,    -1,    63,    54,    55,    56,     8,    17,    18,    19,
      20,    21,    22,    -1,    -1,    17,    18,    19,    20,    21,
      22,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    46,    47,    48,    49,    50,    51,
      52,    53,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    17,    18,    19,    20,    21,    22,    -1,     8,    17,
      18,    19,    20,    21,    22,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    46,    47,
      48,    49,    50,    51,    52,    53,    46,    47,    48,    49,
      50,    51,    52,    53,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    12,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    12,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    12,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    12,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    13,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    13,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    13,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    14,    -1,    -1,    17,    18,
      19,    20,    21,    22,    14,    -1,    -1,    17,    18,    19,
      20,    21,    22,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    14,    -1,    -1,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    16,    17,    18,    19,    20,    21,    22,    -1,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    46,
      47,    48,    49,    50,    51,    52,    53,    46,    47,    48,
      49,    50,    51,    52,    53,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    28,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    28,    17,    18,    19,    20,
      21,    22,    -1,    -1,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    46,    47,    48,    49,    50,    51,    52,
      53,    17,    18,    19,    20,    21,    22,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    46,    47,
      48,    49,    50,    51,    52,    53,    46,    47,    48,    49,
      50,    51,    52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    58,     7,     0,     8,     6,    59,     3,     4,
       5,    10,    11,    14,    23,    24,    27,    29,    31,    32,
      33,    35,    36,    37,    38,    39,    40,    41,    42,    54,
      55,    56,    60,    61,    64,    65,    66,    69,    70,    54,
      69,    70,    11,    67,    11,    11,    11,     7,     7,     7,
      11,     7,     7,     7,     7,     7,     7,     7,     9,    16,
      54,    62,    63,    13,    14,    14,    17,    18,    19,    20,
      21,    22,    46,    47,    48,    49,    50,    51,    52,    53,
      14,    17,    18,    19,    20,    21,    22,    46,    47,    48,
      49,    50,    51,    52,    53,    12,    12,    11,    54,    70,
      70,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    43,    44,    45,    68,    55,    56,
      16,    13,    14,    54,    65,    11,    54,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    13,    12,    12,    12,    12,     8,    13,    13,    22,
       8,    13,    13,     8,     8,     8,    11,    11,    11,     8,
      55,    56,    63,    70,     6,    14,    14,     6,    14,    70,
      70,    70,    14,    70,    70,    14,    14,    14,    70,    70,
      70,    14,    12,    25,    70,     8,     8,    12,     8,     8,
      12,    12,    12,     6,    70,    14,    14,    14,     6,    14,
      14,    70,    28,    10,    70,    16,    27,    30,    34,    16,
      70,    11,     6,    11,    70,    17,    19,    70,    70,    70,
      17,    70,    70,    12,    14,    12,    70,    10,    10,    14,
      10,     6,    10,    25,    70,    70,    14,    28,    10,    27,
      30,    11,     6,    70,    70,    12,    14,    14,    10,    25,
      26,    70,    28,    28,    27,    27,    11,    11,    70,    70,
      12,    12,    14,    14,    10,    25,    26,    70,    28,    28,
      27,    27,    11,    11,    70,    70,    12,    12,    14,    14,
      10,    26,    28,    27,    11,    70,    12,    14,    10
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 39 "1807119.y"
    { printf("\n~~Successfully COMPILED~~\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 48 "1807119.y"
    { printf("\n...... Valid declaration...... \n"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 57 "1807119.y"
    { int f=0,k=0;

for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,(yyvsp[(1) - (1)].sv))==0)
{
printf("\n %s  var is declared! use another variable name \n",store[k].tstr);
f=1;
break;
}
}
if(f==0)
{
 
  store[indexx].tstr=(yyvsp[(1) - (1)].sv);
printf("%s var is decalred successfully \n",store[indexx].tstr);
indexx++;
}
;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 76 "1807119.y"
    { int f=0,k=0;

for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,(yyvsp[(1) - (3)].sv))==0)
{
printf("\n %s float type var is declared! use another variable name \n",store[k].tstr);
f=1;
break;
}
}
if(f==0)
{
store[indexx].tstr=(yyvsp[(1) - (3)].sv);
store[indexx].tfloat=(yyvsp[(3) - (3)].fv);
printf("\n value of var %s=%f\t %d\n",store[indexx].tstr,store[indexx].tfloat);
indexx++;
}
 ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 95 "1807119.y"
    { int f=0,k=0;

for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,(yyvsp[(1) - (3)].sv))==0)
{
store[k].tint=(yyvsp[(3) - (3)].iv);
printf("\n %s integer type var is declared! use another variable name \n",store[k].tstr);
f=1;
break;
}
}
if(f==0)
{
store[indexx].tstr=(yyvsp[(1) - (3)].sv);
store[indexx].tint=(yyvsp[(3) - (3)].iv);
printf("\n value of var %s=%d\n",store[indexx].tstr,store[indexx].tint);
indexx++;
}
 ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 119 "1807119.y"
    {
int f=0,k=0;
for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,(yyvsp[(1) - (3)].sv))==0)
{
store[k].tfloat=(yyvsp[(3) - (3)].fv);
printf("\n value of var %s=%f \n",store[k].tstr,store[k].tfloat);
f=1;
break;
}
}
if(f==0)
{
printf("\n Error!var is not declared \n");
}
 ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 136 "1807119.y"
    {
int f=0,k=0;
for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,(yyvsp[(1) - (3)].sv))==0)
{
store[k].tint=(yyvsp[(3) - (3)].iv);
printf("\n value of var %s=%d \n",store[k].tstr,store[k].tint);
f=1;
break;
}
}
if(f==0)
{
printf("\n Error!var is not declared \n");
}
 ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 155 "1807119.y"
    { printf("\n Value of expression : %d \n",(yyvsp[(1) - (2)].iv)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 156 "1807119.y"
    { printf("\n Value of expression : %f \n",(yyvsp[(1) - (2)].fv)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 158 "1807119.y"
    {
if((yyvsp[(7) - (29)].iv)==(yyvsp[(3) - (29)].iv))
{
printf("\n value in switch: %d\n",(yyvsp[(11) - (29)].iv));
}
else if((yyvsp[(15) - (29)].iv)==(yyvsp[(3) - (29)].iv))
{
printf("\n value in switch:%d\n",(yyvsp[(19) - (29)].iv));
}
else{
printf("\n value in switch:%d\n",(yyvsp[(26) - (29)].iv));
}
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 172 "1807119.y"
    {
if((yyvsp[(7) - (37)].iv)==(yyvsp[(3) - (37)].iv))
{
printf("\n value in switch: %d\n",(yyvsp[(11) - (37)].iv));
}
else if((yyvsp[(15) - (37)].iv)==(yyvsp[(3) - (37)].iv))
{
printf("\n value in switch:%d\n",(yyvsp[(19) - (37)].iv));
}
else if((yyvsp[(23) - (37)].iv)==(yyvsp[(3) - (37)].iv)){
printf("\n value in switch:%d\n",(yyvsp[(27) - (37)].iv));
}
else{
printf("\n value in switch:%d\n",(yyvsp[(34) - (37)].iv));
}
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 189 "1807119.y"
    {
if((yyvsp[(7) - (45)].iv)==(yyvsp[(3) - (45)].iv))
{
printf("\n value in switch: %d\n",(yyvsp[(11) - (45)].iv));
}
else if((yyvsp[(15) - (45)].iv)==(yyvsp[(3) - (45)].iv))
{
printf("\n value in switch:%d\n",(yyvsp[(19) - (45)].iv));
}
else if((yyvsp[(23) - (45)].iv)==(yyvsp[(3) - (45)].iv)){
printf("\n value in switch:%d\n",(yyvsp[(27) - (45)].iv));
}
else if((yyvsp[(31) - (45)].iv)==(yyvsp[(3) - (45)].iv)){
printf("\n value in switch:%d\n",(yyvsp[(35) - (45)].iv));
}
else{
printf("\n value in switch:%d\n",(yyvsp[(42) - (45)].iv));
}
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 208 "1807119.y"
    {
	       int  n=(yyvsp[(3) - (5)].iv);   

			if(n%2==0){
			printf(" %d is an even number \n",(yyvsp[(3) - (5)].iv));
}
else{
printf(" %d is an odd number \n",(yyvsp[(3) - (5)].iv));

}


	     ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 222 "1807119.y"
    {
int n=(yyvsp[(3) - (7)].iv);
int rem=(yyvsp[(5) - (7)].iv);
int mul=1,i;

			for(i=n;i<=rem;i++){
	                                 mul*=i;			
			}
		
			printf("Multiplication from %d to %d is: %d\n", (yyvsp[(3) - (7)].iv), (yyvsp[(5) - (7)].iv),mul);
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 233 "1807119.y"
    {
	         int n=(yyvsp[(3) - (7)].iv);
int rem=(yyvsp[(5) - (7)].iv);
int f=0,i;

			for(i=n; i<=rem; i++)
			{
				f+=i;			
			}
			printf("Summation from %d to %d is: %d\n", (yyvsp[(3) - (7)].iv), (yyvsp[(5) - (7)].iv),f);
	     ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 245 "1807119.y"
    {
 if((yyvsp[(3) - (8)].iv))
     { 
       printf("\n Value of expression in EITHER BLOCK : %d\n",(yyvsp[(6) - (8)].iv));
    }
 else
    {
      printf("\n Condition value zero in EITHER BLOCK \n");
    }
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 255 "1807119.y"
    {

 if((yyvsp[(3) - (13)].iv)) 
   {
    printf("\n Value of expression in EITHER BLOCK : %d\n",(yyvsp[(6) - (13)].iv));
   }
 else
   { 
     printf("\n Value of expression in OR BLOCK : %d\n",(yyvsp[(11) - (13)].iv));
   }
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 266 "1807119.y"
    {

 if((yyvsp[(3) - (21)].iv)) 
   {
    printf("\n Value of expression in EITHER BLOCK : %d\n",(yyvsp[(6) - (21)].iv));
   }
 else if((yyvsp[(11) - (21)].iv))
   { 
     printf("\n Value of expression in OTHERWISE BLOCK : %d\n",(yyvsp[(14) - (21)].iv));
   }
else{
printf("\n Value of expression in OR BLOCK : %d\n",(yyvsp[(19) - (21)].iv));
}
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 281 "1807119.y"
    { 

int n=(yyvsp[(12) - (13)].iv);
int f=(yyvsp[(10) - (13)].iv);
int o;
if(f<(yyvsp[(5) - (13)].iv)){
while(f<(yyvsp[(5) - (13)].iv)){
  f=f+2;
 printf("\n Value of expression in WHILE BLOCK : %d\n",f);
}
}
for(o=0;o<indexx;o++){
if((yyvsp[(10) - (13)].iv)==store[o].tint){
store[o].tint=f;
break;
}
}
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 299 "1807119.y"
    {
int n=(yyvsp[(3) - (5)].iv);
int primen=0,i;
for(i=2;i<n;i++){
	                                 if(n%i==0){
primen=1;
break;

}			
			}
			if(n==1){
			printf("%d is neither a  prime number nor a composite \n", (yyvsp[(3) - (5)].iv));
}
else if(primen==0){
printf("%d is a prime number \n", (yyvsp[(3) - (5)].iv));
}
else{
printf("%d is not a prime number \n", (yyvsp[(3) - (5)].iv));
}
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 319 "1807119.y"
    {
int n=(yyvsp[(3) - (7)].iv);
int rem=(yyvsp[(5) - (7)].iv);
			
			printf("%d ^ %d = %lf\n", (yyvsp[(3) - (7)].iv), (yyvsp[(5) - (7)].iv),pow(n,rem));
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 325 "1807119.y"
    {
	        int n=(yyvsp[(3) - (5)].iv),i,fac=1;   

			for(i=n; i>=2; i--)
			{
				fac*=i;			
			}
			
			printf("Factorial of %d : %d\n",(yyvsp[(3) - (5)].iv),fac);
	     ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 335 "1807119.y"
    {
if((yyvsp[(3) - (5)].iv) % 4==0){
printf("\n %d is a leap year \n", (yyvsp[(3) - (5)].iv));
}
else{
printf("\n %d is not a leap year \n",(yyvsp[(3) - (5)].iv));
}
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 344 "1807119.y"
    {
int originalN = (yyvsp[(3) - (5)].iv),rem,reversedN=0;
while ((yyvsp[(3) - (5)].iv) != 0) {
        rem = (yyvsp[(3) - (5)].iv) % 10;
        reversedN = reversedN * 10 + rem;
        (yyvsp[(3) - (5)].iv) /= 10;
    }

   
    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);

;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 359 "1807119.y"
    {
int n; 
if((yyvsp[(5) - (7)].iv)!=0)
    {
     n = (yyvsp[(3) - (7)].iv) / (yyvsp[(5) - (7)].iv);
printf("\n result of divison : %d\n",n);
   }
  else
    {
     n = 0;
     printf("\n divide by 0\t");
    }
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 372 "1807119.y"
    {printf("Print exp %d\n",(yyvsp[(3) - (5)].iv));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 373 "1807119.y"
    {printf("Print exp %f\n",(yyvsp[(3) - (5)].fv));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 376 "1807119.y"
    {
int n=(yyvsp[(2) - (12)].iv);
int rem=(yyvsp[(4) - (12)].iv);
int l=(yyvsp[(9) - (12)].iv);
int r=(yyvsp[(11) - (12)].iv);
int k=(yyvsp[(7) - (12)].iv),o,p;
for(p=n;p<=rem;p++){	
k=k*(yyvsp[(11) - (12)].iv);

	                                 printf("value of the loop: %d\n", k);	
}
for(o=0;o<indexx;o++){
if((yyvsp[(7) - (12)].iv)==store[o].tint){
store[o].tint=k;
break;
}
}
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 394 "1807119.y"
    {
int n=(yyvsp[(2) - (12)].iv);
int rem=(yyvsp[(4) - (12)].iv);
int l=(yyvsp[(9) - (12)].iv);
int r=(yyvsp[(11) - (12)].iv);
int k=(yyvsp[(7) - (12)].iv),o,p;
for(p=n;p<=rem;p++){	
k=k*(yyvsp[(11) - (12)].iv);

	                                 printf("value of the loop: %d\n", k);	
}
for(o=0;o<indexx;o++){
if((yyvsp[(7) - (12)].iv)==store[o].tint){
store[o].tint=k;
break;
}
}
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 413 "1807119.y"
    {
	           

			
			printf("Sine of %d  degree is :%lf \n",(yyvsp[(3) - (4)].iv),sin((yyvsp[(3) - (4)].iv)*3.1416/180));
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 419 "1807119.y"
    {
	           

			
			printf("CoSine of %d  degree is :%lf \n",(yyvsp[(3) - (4)].iv),cos((yyvsp[(3) - (4)].iv)*3.1416/180));
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 425 "1807119.y"
    {
	           

			
			printf("Tangent of %d  degree is :%lf \n",(yyvsp[(3) - (4)].iv),tan((yyvsp[(3) - (4)].iv)*3.1416/180));
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 432 "1807119.y"
    {store[indexx].tfloat=(yyvsp[(1) - (1)].fv);
(yyval.fv)=store[indexx].tfloat;
indexx++;
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 436 "1807119.y"
    { int j=0,f=0;
for(j=0;j<indexx;j++)
{
if(strcmp(store[j].tstr,(yyvsp[(1) - (2)].sv))==0)
{
(yyval.fv)=store[j].tfloat;
f=1;
break;
}
}
if(f==0)
{
printf("\n var is not declared \n");
}
 ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 451 "1807119.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) + (yyvsp[(3) - (3)].fv); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 452 "1807119.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) - (yyvsp[(3) - (3)].fv); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 453 "1807119.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) * (yyvsp[(3) - (3)].fv); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 454 "1807119.y"
    {
  if((yyvsp[(3) - (3)].fv))
    {
     (yyval.fv) = (yyvsp[(1) - (3)].fv) / (yyvsp[(3) - (3)].fv);
   }
  else
    {
     (yyval.fv) = 0;
     printf("\n divide by 0\t");}
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 464 "1807119.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) < (yyvsp[(3) - (3)].fv); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 465 "1807119.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) > (yyvsp[(3) - (3)].fv); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 466 "1807119.y"
    { (yyval.fv) = (yyvsp[(2) - (3)].fv); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 467 "1807119.y"
    {(yyval.fv) = (yyvsp[(1) - (2)].fv) + 1;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 468 "1807119.y"
    {(yyval.fv) = (yyvsp[(1) - (2)].fv) - 1;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 469 "1807119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) <= (yyvsp[(3) - (3)].fv);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 470 "1807119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) >= (yyvsp[(3) - (3)].fv);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 471 "1807119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) || (yyvsp[(3) - (3)].fv);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 472 "1807119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) && (yyvsp[(3) - (3)].fv);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 473 "1807119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) == (yyvsp[(3) - (3)].fv);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 474 "1807119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) != (yyvsp[(3) - (3)].fv);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 476 "1807119.y"
    {store[indexx].tint=(yyvsp[(1) - (1)].iv);
(yyval.iv)=store[indexx].tint;
indexx++;
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 480 "1807119.y"
    { int j=0,f=0;
for(j=0;j<indexx;j++)
{
if(strcmp(store[j].tstr,(yyvsp[(1) - (1)].sv))==0)
{
(yyval.iv)=store[j].tint;
f=1;
break;
}
}
if(f==0)
{
printf("\n var is not declared \n");
}
 ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 495 "1807119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) + (yyvsp[(3) - (3)].iv); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 496 "1807119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) - (yyvsp[(3) - (3)].iv); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 497 "1807119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) * (yyvsp[(3) - (3)].iv); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 498 "1807119.y"
    {
  if((yyvsp[(3) - (3)].iv))
    {
     (yyval.iv) = (yyvsp[(1) - (3)].iv) / (yyvsp[(3) - (3)].iv);
   }
  else
    {
     (yyval.iv) = 0;
     printf("\n divide by 0\t");}
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 508 "1807119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) < (yyvsp[(3) - (3)].iv); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 509 "1807119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) > (yyvsp[(3) - (3)].iv); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 510 "1807119.y"
    { (yyval.iv) = (yyvsp[(2) - (3)].iv); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 511 "1807119.y"
    {(yyval.iv) = (yyvsp[(1) - (2)].iv) + 1;;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 512 "1807119.y"
    {(yyval.iv) = (yyvsp[(1) - (2)].iv) - 1;;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 513 "1807119.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) <= (yyvsp[(3) - (3)].iv);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 514 "1807119.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) >= (yyvsp[(3) - (3)].iv);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 515 "1807119.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) || (yyvsp[(3) - (3)].iv);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 516 "1807119.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) && (yyvsp[(3) - (3)].iv);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 517 "1807119.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) == (yyvsp[(3) - (3)].iv);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 518 "1807119.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) != (yyvsp[(3) - (3)].iv);;}
    break;



/* Line 1455 of yacc.c  */
#line 2661 "1807119.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 520 "1807119.y"


