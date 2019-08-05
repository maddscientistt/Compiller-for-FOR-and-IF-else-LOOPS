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
#line 1 "parser.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#include "lex.yy.c"
struct node
 {
  char *left;
  char *right;
  char *token;
 } syntax[100];
int o=0;

int optcount=0;
struct opt
{
	char *t;
	char *arg;
	char *arg2;
	char *op;
}optim[100];

void yyerror(const char*);
int yylex();
char *temp1;
int yywrap();
void insert_type();
void add(char);
int search(char *,int);
int search1(char*,int);
void FOO();
void add_ptr();
int dep=0;
void insert_type_table();
struct dataType{
	char * id_name;
	char * data_type;
	char * type;
	int line_no;
	int depth;
	}symbolTable[100];

char typeStack[10][100];
int typeStack_top = 0;
char type[10];
char count=0;

int c=0;
int t=0;
int flag;
int z=0;
int q;
int k=0;
extern countn;

#line 124 "y.tab.c" /* yacc.c:339  */

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
    NUM = 259,
    FOR = 260,
    IF = 261,
    ELSE = 262,
    REL = 263,
    VOID = 264,
    INCLUDE = 265,
    RETURN = 266,
    INT = 267,
    FLOAT = 268,
    CHAR = 269,
    MAIN = 270,
    COUT = 271,
    STRL = 272,
    CH = 273,
    UMINUS = 274
  };
#endif
/* Tokens.  */
#define ID 258
#define NUM 259
#define FOR 260
#define IF 261
#define ELSE 262
#define REL 263
#define VOID 264
#define INCLUDE 265
#define RETURN 266
#define INT 267
#define FLOAT 268
#define CHAR 269
#define MAIN 270
#define COUT 271
#define STRL 272
#define CH 273
#define UMINUS 274

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 58 "parser.y" /* yacc.c:355  */
struct var_name{char name[100];char *type;}nam;

#line 205 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 222 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   274

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
      31,    32,    22,    20,    27,    21,     2,    23,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    30,
       2,    19,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    28,     2,    29,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    25,     2,    26,     2,     2,     2,     2,
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
      15,    16,    17,    18,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    67,    67,    68,    68,    68,    68,    69,
      69,    70,    70,    70,    70,    70,    70,    71,    71,    71,
      71,    73,    73,    73,    73,    74,    74,    74,    74,    76,
      78,    76,    82,    84,    82,    89,    89,    89,    89,    89,
      90,    91,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    96,    97,   101,   101,   101,   101,   102,   103,
     104,   104,   104,   105,   109,   109,   110,   111,   113,   113,
     113,   114,   114,   115,   115,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   123,   124,
     125,   125,   126,   128
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "FOR", "IF", "ELSE", "REL",
  "VOID", "INCLUDE", "RETURN", "INT", "FLOAT", "CHAR", "MAIN", "COUT",
  "STRL", "CH", "'='", "'+'", "'-'", "'*'", "'/'", "UMINUS", "'{'", "'}'",
  "','", "'['", "']'", "';'", "'('", "')'", "$accept", "S1", "H", "F",
  "$@1", "T", "$@2", "$@3", "$@4", "G", "$@5", "$@6", "S", "C1", "P",
  "$@7", "$@8", "P2", "$@9", "$@10", "W1", "$@11", "$@12", "$@13", "$@14",
  "W2", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22",
  "$@23", "W3", "$@24", "$@25", "$@26", "$@27", "$@28", "S2", "DECL",
  "DECL_2", "$@29", "E", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35",
  "$@36", "$@37", "$@38", "V", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    61,
      43,    45,    42,    47,   274,   123,   125,    44,    91,    93,
      59,    40,    41
};
# endif

#define YYPACT_NINF -51

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-51)))

#define YYTABLE_NINF -33

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   -51,   -11,    12,    33,   -51,   -51,   -51,   -51,   -51,
     -51,     7,    -4,    50,   -51,   -51,   -51,   -51,   -51,    22,
     -51,   -51,   -51,     1,     0,   -51,   -51,   -51,   -51,   -51,
     -51,    50,   106,    32,    13,    18,    26,    44,    64,    48,
       6,     6,   -51,   -51,   -14,   -51,    50,   -51,   -51,   -51,
     -51,   -51,   -51,    50,   -51,    49,     6,     6,     6,   -51,
     -51,   -51,    65,     8,    47,     1,   -51,   -51,    42,   -51,
       6,     6,     6,     6,     6,   -51,     6,   -51,   110,    62,
      85,    46,    56,    57,   -51,   -51,   -51,    51,     6,     1,
     -51,   130,    -1,    -1,    65,    65,   130,   -51,     6,   -51,
      52,   -51,   -51,    50,    75,   130,    51,   126,    63,   -51,
     -51,   -51,     6,   -51,    50,    60,    90,    50,   -51,   -51,
     -51,   -51,    66,    70,    73,    50,   -51,   -51,   -51,    50,
      84,    74,   -51,   -51,    71,    50,   -51,   -51,    50,   -51,
      76,   -51,    50,   -51
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,     9,     1,     8,     5,     6,
       7,     3,     0,    67,     2,    93,    88,    35,    42,    29,
      89,    85,    83,     0,     0,    24,    21,    22,    23,    27,
      28,    65,     0,    87,     0,     0,     0,     0,     0,     0,
      92,    92,    11,    15,    70,    10,    65,    41,    81,    73,
      75,    77,    79,    40,    71,     0,    92,    92,    92,    30,
      33,    61,    86,     0,    20,     0,    68,    13,     0,    64,
      92,    92,    92,    92,    92,    52,    92,    90,     0,     0,
       0,     0,     0,     0,    84,    17,    12,    16,    92,     0,
      66,    82,    74,    76,    78,    80,    72,    91,    92,    43,
       0,    31,    34,    65,     0,    69,    14,     0,     0,    55,
      62,    18,    92,    44,    67,     0,     0,    67,    56,    19,
      36,    45,     0,     0,     0,    65,    37,    46,    57,    67,
       0,     0,    47,    38,     0,    65,    48,    39,    67,    49,
       0,    50,    65,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -51,    91,    37,   105,   -51,   -50,   -51,   -51,   -51,   -51,
     -51,   -51,   -13,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -45,   -51,   -51,   -51,   -38,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    23,    13,    44,    64,    89,    65,    86,
     104,   115,    46,    25,    26,    37,    81,    27,    38,    82,
      28,    34,   123,   129,   135,    29,    35,   108,   117,   124,
     130,   134,   138,   140,   142,    30,    36,   114,   122,    39,
      83,    47,    31,    68,    88,    32,    76,    71,    72,    73,
      74,    70,    41,    40,    97,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    69,    62,    63,    42,    66,     1,    48,    75,    15,
      16,     2,     6,    67,     5,    87,    48,     1,    78,    79,
      80,    51,    52,    43,    20,   -32,    45,    21,    49,    50,
      51,    52,    91,    92,    93,    94,    95,    22,    96,   106,
      84,    11,     7,     1,    56,     8,     9,    10,    11,    57,
     105,    54,    55,    15,    16,    17,    18,    58,   110,     7,
     107,    59,     8,     9,    10,    61,    19,    60,    20,    77,
      48,    21,    90,    48,   116,    85,   101,   109,    67,   111,
     128,    22,    49,    50,    51,    52,   102,   103,   113,   119,
     137,   132,   125,    48,    99,   126,   136,   143,    48,   127,
     133,   118,   141,    14,   121,    49,    50,    51,    52,    12,
      49,    50,    51,    52,    48,     0,   131,   100,    48,     0,
       0,     0,   120,     0,     0,   139,    49,    50,    51,    52,
      49,    50,    51,    52,    48,     0,    53,     0,    48,     0,
      98,     0,     0,     0,     0,     0,    49,    50,    51,    52,
      49,    50,    51,    52,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
      13,    46,    40,    41,     3,    19,    10,     8,    53,     3,
       4,    15,     0,    27,    25,    65,     8,    10,    56,    57,
      58,    22,    23,    22,    18,     3,    26,    21,    20,    21,
      22,    23,    70,    71,    72,    73,    74,    31,    76,    89,
      32,     4,     9,    10,    31,    12,    13,    14,    11,    31,
      88,    19,    20,     3,     4,     5,     6,    31,   103,     9,
      98,    17,    12,    13,    14,    17,    16,     3,    18,    20,
       8,    21,    30,     8,   112,    28,    30,    25,    27,     4,
     125,    31,    20,    21,    22,    23,    30,    30,    25,    29,
     135,     7,    26,     8,    32,    25,    25,   142,     8,    26,
      26,   114,    26,    12,   117,    20,    21,    22,    23,     4,
      20,    21,    22,    23,     8,    -1,   129,    32,     8,    -1,
      -1,    -1,    32,    -1,    -1,   138,    20,    21,    22,    23,
      20,    21,    22,    23,     8,    -1,    30,    -1,     8,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      20,    21,    22,    23,    -1,    -1,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    15,    34,    35,    25,     0,     9,    12,    13,
      14,    35,    36,    37,    34,     3,     4,     5,     6,    16,
      18,    21,    31,    36,    45,    46,    47,    50,    53,    58,
      68,    75,    78,    88,    54,    59,    69,    48,    51,    72,
      86,    85,     3,    22,    38,    26,    45,    74,     8,    20,
      21,    22,    23,    30,    19,    20,    31,    31,    31,    17,
       3,    17,    78,    78,    39,    41,    19,    27,    76,    74,
      84,    80,    81,    82,    83,    74,    79,    20,    78,    78,
      78,    49,    52,    73,    32,    28,    42,    38,    77,    40,
      30,    78,    78,    78,    78,    78,    78,    87,    30,    32,
      32,    30,    30,    30,    43,    78,    38,    78,    60,    25,
      74,     4,    30,    25,    70,    44,    78,    61,    45,    29,
      32,    45,    71,    55,    62,    26,    25,    26,    74,    56,
      63,    45,     7,    26,    64,    57,    25,    74,    65,    45,
      66,    26,    67,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    36,    36,    37,
      34,    39,    38,    40,    38,    41,    38,    43,    44,    42,
      42,    45,    45,    45,    45,    46,    46,    46,    46,    48,
      49,    47,    51,    52,    50,    54,    55,    56,    57,    53,
      53,    53,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    58,    58,    58,    69,    70,    71,    68,    68,    68,
      72,    73,    68,    68,    74,    74,    75,    75,    77,    76,
      76,    79,    78,    80,    78,    81,    78,    82,    78,    83,
      78,    84,    78,    85,    78,    86,    78,    78,    78,    78,
      87,    78,    78,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     1,     1,     1,     1,     0,
       5,     0,     3,     0,     4,     0,     3,     0,     0,     5,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       0,     5,     0,     0,     5,     0,     0,     0,     0,    16,
       2,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     3,     2,     0,     0,     0,    11,     3,     2,
       0,     0,     6,     1,     2,     0,     4,     0,     0,     3,
       0,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     3,     1,     1,     1,
       0,     4,     0,     1
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
        case 5:
#line 68 "parser.y" /* yacc.c:1646  */
    {insert_type();}
#line 1409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "parser.y" /* yacc.c:1646  */
    {insert_type();}
#line 1415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 68 "parser.y" /* yacc.c:1646  */
    {insert_type();}
#line 1421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 68 "parser.y" /* yacc.c:1646  */
    {insert_type();}
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 69 "parser.y" /* yacc.c:1646  */
    {dep++;}
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 69 "parser.y" /* yacc.c:1646  */
    {dep--;}
#line 1439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 70 "parser.y" /* yacc.c:1646  */
    {push();insert_type_table();}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 70 "parser.y" /* yacc.c:1646  */
    {/*add('t');*/}
#line 1451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 70 "parser.y" /* yacc.c:1646  */
    {add_ptr();}
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "parser.y" /* yacc.c:1646  */
    {}
#line 1463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 71 "parser.y" /* yacc.c:1646  */
    {add('n');}
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 76 "parser.y" /* yacc.c:1646  */
    {add('f');}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 78 "parser.y" /* yacc.c:1646  */
    {add('a');}
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 82 "parser.y" /* yacc.c:1646  */
    {add('f');}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 84 "parser.y" /* yacc.c:1646  */
    {add('d');}
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 89 "parser.y" /* yacc.c:1646  */
    {insert_type();c++;if(c>=2){flag=1;};lab1();}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 89 "parser.y" /* yacc.c:1646  */
    {lab2();}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 89 "parser.y" /* yacc.c:1646  */
    {dep++;}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 89 "parser.y" /* yacc.c:1646  */
    {dep--;lab3();}
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 89 "parser.y" /* yacc.c:1646  */
    {syntax[k].left = "cond";  syntax[k].right= "stmt"; syntax[k].token = "for";k++;  }
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 94 "parser.y" /* yacc.c:1646  */
    {insert_type();}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 94 "parser.y" /* yacc.c:1646  */
    {lab4();}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 94 "parser.y" /* yacc.c:1646  */
    {dep++;}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 94 "parser.y" /* yacc.c:1646  */
    {dep--;}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 94 "parser.y" /* yacc.c:1646  */
    {lab5();}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 94 "parser.y" /* yacc.c:1646  */
    {insert_type();}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 94 "parser.y" /* yacc.c:1646  */
    {dep++;}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 94 "parser.y" /* yacc.c:1646  */
    {dep--;}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 94 "parser.y" /* yacc.c:1646  */
    {lab6();}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 94 "parser.y" /* yacc.c:1646  */
    {syntax[k].left = "cond"; syntax[k].right= "stmt"; 
          syntax[k].token = "if";k++;  }
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 101 "parser.y" /* yacc.c:1646  */
    {insert_type();}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 101 "parser.y" /* yacc.c:1646  */
    {dep++;}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 101 "parser.y" /* yacc.c:1646  */
    {dep++;}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 101 "parser.y" /* yacc.c:1646  */
    {syntax[k].left = "cond"; syntax[k].right= "stmt"; syntax[k].token = "if";k++;  }
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 104 "parser.y" /* yacc.c:1646  */
    {add('f');}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 104 "parser.y" /* yacc.c:1646  */
    {add('a');}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 104 "parser.y" /* yacc.c:1646  */
    {syntax[k].left = ""; syntax[k].right= " "; syntax[k].token = "cout";k++;}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 113 "parser.y" /* yacc.c:1646  */
    {push();}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 113 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 114 "parser.y" /* yacc.c:1646  */
    {push();}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 114 "parser.y" /* yacc.c:1646  */
    {codegen_assign();syntax[k].left = strdup((yyvsp[-3].nam).name); syntax[k].right= strdup("expr"); syntax[k].token = "=";k++;}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 115 "parser.y" /* yacc.c:1646  */
    {push();}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 115 "parser.y" /* yacc.c:1646  */
    {codegen();syntax[k].left = strdup((yyvsp[-3].nam).name); syntax[k].right= strdup((yyvsp[0].nam).name); syntax[k].token = "+";k++;optcount++;}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 116 "parser.y" /* yacc.c:1646  */
    {push();}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 116 "parser.y" /* yacc.c:1646  */
    {codegen();syntax[k].left = strdup((yyvsp[-3].nam).name); syntax[k].right= strdup((yyvsp[0].nam).name); syntax[k].token = "-";k++;}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 117 "parser.y" /* yacc.c:1646  */
    {push();}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 117 "parser.y" /* yacc.c:1646  */
    {codegen();syntax[k].left = (yyvsp[-3].nam).name; syntax[k].right= (yyvsp[0].nam).name; syntax[k].token = "*";k++;}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 118 "parser.y" /* yacc.c:1646  */
    {push();}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 118 "parser.y" /* yacc.c:1646  */
    {codegen();syntax[k].left = (yyvsp[-3].nam).name; syntax[k].right= (yyvsp[0].nam).name; syntax[k].token = "/";k++;}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 119 "parser.y" /* yacc.c:1646  */
    {push();}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 119 "parser.y" /* yacc.c:1646  */
    {codegen();syntax[k].left = strdup((yyvsp[-3].nam).name); syntax[k].right= strdup((yyvsp[0].nam).name); syntax[k].token = strdup((yyvsp[-2].nam).name);k++;}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 120 "parser.y" /* yacc.c:1646  */
    {;}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 120 "parser.y" /* yacc.c:1646  */
    {add('t');}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 121 "parser.y" /* yacc.c:1646  */
    {push();}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 121 "parser.y" /* yacc.c:1646  */
    {codegen_umin();}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 123 "parser.y" /* yacc.c:1646  */
    {push();add('n');(yyval.nam)=(yyvsp[0].nam);}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 124 "parser.y" /* yacc.c:1646  */
    {push();add('c');(yyval.nam)=(yyvsp[0].nam);}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 125 "parser.y" /* yacc.c:1646  */
    {push();}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 125 "parser.y" /* yacc.c:1646  */
    {codegen_assign();syntax[k].left = strdup((yyvsp[-3].nam).name); syntax[k].right= strdup("expr"); syntax[k].token = "++";k++;}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 128 "parser.y" /* yacc.c:1646  */
    {push();add('d');(yyval.nam)=(yyvsp[0].nam);}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1768 "y.tab.c" /* yacc.c:1646  */
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
#line 130 "parser.y" /* yacc.c:1906  */



#include<ctype.h>
char st[100][10];
int top=0;
char i_[2]="0";
char temp[2]="t";
char temp2[2]="t";

//int lnum=1;
int start=1;
int main()
{        
        
	optim[o].t='\0';
	optim[o].arg='\0';
	optim[o].arg2='\0';
	optim[o].op='\0';
	o++;

         
 
	printf("\n");
	printf("Intermediate code\n"); 
	yyparse();
	printf("Parsing is Successful\n");	
	//printf("size : %ld",sizeof(symbolTable));
	printf("\n");
	printf("Symbol Table\n");
	printf("TOKEN\t\tTOKEN TYPE\tTOKEN CLASS\tLINE NUMBER\tVARIABLE COUNT\n");
	int i=0;
	for(i=0;i<count;i++){
		printf("%s\t\t%s\t\t%s\t\t%d\t\t%d\n",symbolTable[i].id_name,symbolTable[i].data_type,symbolTable[i].type,symbolTable[i].line_no,symbolTable[i].depth);
		
	}
     	printf("\n");
	printf("Syntax tree in inorder traversal \n");

    
	int j=0;
	//printf("%s\n",temp1);
	for(j=0;j<k;j++)
	{
		printf("%s\t%s\t%s\n",syntax[j].left,syntax[j].token,syntax[j].right);
		printf("\n");
	}
	return 0;
}
void yyerror(const char* s)
{
	printf("Not accepted\n");
	printf("error at the line no:%d\n",countn);
	exit(0);
}
void insert_type(){
	strcpy(type,yytext);
	//printf("hey");
	q=search(type,dep);
	//printf("qval=%d",q);
	if(q==0){
		symbolTable[count].id_name=strdup(yytext);
		symbolTable[count].data_type=strdup("N/A");
		symbolTable[count].line_no = countn;
		symbolTable[count].type=strdup("KEYWORD\t");
		symbolTable[count].depth=0;
		count++;
	}
	
	
}
void insert_type_table(){
	
		q=search1(yytext,dep);
	//printf("qval=%d",q);
		if(q==0){
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup(type);
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("IDENTIFIER");
			symbolTable[count].depth=dep;
			count++;
		}
	
	
}
void add(char c)
{
	q=search(yytext,dep);
	
	if(q==0){
		if(c=='H')
		{
			symbolTable[count].id_name=strdup("include");
			symbolTable[count].data_type=strdup(type);
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Header");
			
			count++;
		}
		
		if(c=='v')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("CLASS\t");
			
			count++;
		}
		
		else if(c=='o')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Operator");
			count++;
		}
		else if(c=='r')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Rel Op\t");
			count++;
		}
		else if(c=='n')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("NUMBER\t");
			count++;
		}
		
		else if(c=='f')
		{
			symbolTable[count].id_name=strdup("COUT");
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("KEYWORD\t");
			count++;
		}
		else if(c=='a')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("argument");
			count++;
		}
		else if(c=='c')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Character");
			count++;
		}
		else if(c=='d')
		{
			printf("%s not defined at line no. %d\n",yytext,countn+1);
			exit(0);	
		}
	}
	
}
int  search(char *type,int d)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(strcmp(symbolTable[i].id_name,type)==0 &&(symbolTable[i].depth)<=d)
		{
			return -1;
			break;
		}
	
	}
	return 0;
}
int  search1(char *type,int d)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(strcmp(symbolTable[i].id_name,type)==0 &&(symbolTable[i].depth)==d)
		{
			return -1;
			break;
		}
	
	}
	return 0;
}

void add_ptr(){
	strcat(type,"*");
}
void check(char *p1,char *p2)
{
	if(strcmp(p1,p2)==0)
	{
		printf("corect bro\n");
	}
}

push()
 {
  strcpy(st[++top],yytext);
 }

codegen()
 {
 int s;
 strcpy(temp,"t");
 strcat(temp,i_);






 printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
//}
 top-=2;
 strcpy(st[top],temp);
 i_[0]++;
 }

codegen_umin()
 {
 strcpy(temp,"t");
 strcat(temp,i_);
 printf("%s = -%s\n",temp,st[top]);
 top--;
 strcpy(st[top],temp);
 i_[0]++;
 }

codegen_assign()
 {
 printf("%s = %s\n",st[top-2],st[top]);
 top-=2;
 }

lnumwhile = 0;
lnumif = 0;

lab1()
{
if(lnumif){
	lnumwhile = lnumif+1;
}
else{
	lnumwhile++;
}
printf("L%d: \n",lnumwhile);
}


lab2()
{
 lnumwhile=lnumwhile+1;
 strcpy(temp,"t");
 strcat(temp,i_);
 printf("%s = not %s\n",temp,st[top]);
 printf("if %s goto L%d\n",temp,lnumwhile);
 i_[0]++;
 }

lab3()
{
printf("goto L%d \n",start);
printf("L%d: \n",lnumwhile);
}





int label[20];
//int lnum=0;
int ltop=0;



lab4()
{
 if(lnumwhile){
 	lnumif=lnumwhile+1;
 }
 else{
 	lnumif++;
 }
 //lnum++;
 strcpy(temp,"t");
 strcat(temp,i_);
 printf("%s = not %s\n",temp,st[top]);
 printf("if %s goto L%d\n",temp,lnumif);
 i_[0]++;
 label[++ltop]=lnumif;
}

lab5()
{
int x;
if(lnumwhile){
 	lnumif=lnumwhile+1;
}
else{
 	lnumif++;
}
//lnum++;
x=label[ltop--];
printf("goto L%d\n",lnumif);
printf("L%d: \n",x);
label[++ltop]=lnumif;
}

lab6()
{
int y;
y=label[ltop--];
printf("L%d: \n",y);
}

