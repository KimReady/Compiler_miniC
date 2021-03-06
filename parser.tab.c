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

#include <stdio.h>
#include <string.h>
#include "AST.h"
#include "Ucode.h"
extern FILE* yyin;
extern int yylex();
extern int yylineno;
extern char* yytext;
extern Node* valueStack[STACK_SIZE];
extern int sp;
void yyerror(char *msg);

Node* root;

#line 82 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
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
#line 17 "parser.y" /* yacc.c:355  */

	struct nodeType* node;
	char* ch_val;

#line 176 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 193 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    48,    49,    51,    52,    54,    55,    57,
      59,    61,    62,    64,    65,    67,    69,    70,    71,    72,
      74,    76,    78,    79,    81,    82,    84,    85,    87,    89,
      90,    92,    93,    95,    97,    98,   100,   101,   102,   103,
     105,   106,   108,   109,   111,   131,   133,   134,   136,   137,
     138,   139,   140,   141,   143,   148,   150,   151,   153,   154,
     157,   159,   161,   163,   164,   165,   166,   167,   168,   170,
     171,   173,   174,   176,   177,   178,   180,   181,   182,   183,
     184,   186,   187,   188,   190,   191,   192,   193,   195,   196,
     197,   198,   199,   201,   202,   203,   204,   205,   207,   208,
     210,   212,   213,   215,   216,   217,   218,   219,   221,   222,
     223,   224
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tident", "tinumber", "tfnumber",
  "tstring", "tconst", "telse", "tif", "tint", "treturn", "tvoid",
  "twhile", "tfloat", "tfor", "tchar", "tequal", "tnotequ", "tlesse",
  "tless", "tgreate", "tgreat", "tand", "tor", "tinc", "tdec",
  "taddAssign", "tsubAssign", "tmulAssign", "tdivAssign", "topen",
  "tclose", "oopen", "cclose", "comma", "semi", "ttinc", "ttdec", "ttdiv",
  "ttmul", "ttmod", "arrayopen", "arrayclose", "equal", "not", "less",
  "bigger", "LOWER_THAN_ELSE", "$accept", "mini_c", "translation_unit",
  "external_dcl", "function_def", "function_header", "dcl_spec",
  "dcl_specifiers", "dcl_specifier", "type_qualifier", "type_specifier",
  "function_name", "formal_param", "opt_formal_param", "formal_param_list",
  "param_dcl", "compound_st", "opt_dcl_list", "declaration_list",
  "declaration", "init_dcl_list", "init_declarator", "declarator",
  "opt_number", "opt_stat_list", "statement_list", "statement", "for_st",
  "expression_st", "opt_expression", "if_st", "while_st", "return_st",
  "expression", "assignment_exp", "logical_or_exp", "logical_and_exp",
  "equality_exp", "relational_exp", "additive_exp", "multiplicative_exp",
  "unary_exp", "postfix_exp", "opt_actual_param", "actual_param",
  "actual_param_list", "primary_exp", "ident", "inumber", "fnumber",
  "string", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF -85

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-85)))

#define YYTABLE_NINF -58

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      68,   -85,   -85,   -85,   -85,   -85,    12,    68,   -85,   -85,
     -26,    14,    68,   -85,   -85,   -85,   -85,   -85,   -85,    68,
     -85,   -85,   -85,    -5,    11,   -85,    37,    -6,   -85,    14,
     116,    68,   -85,    78,   -85,    14,   -85,    91,    38,    41,
     -85,   -85,   -85,    56,    48,    58,    60,    48,    48,    48,
      48,    48,   -85,    69,   116,   -85,   -85,   -85,    77,   -85,
     -85,   -85,   -85,   -85,    92,    94,    32,    -8,    64,    59,
      -9,    -2,   -85,   -85,   -85,   -85,   -85,   -85,     9,    14,
      96,    88,   -85,   -85,   -85,   -85,   -85,    83,   -85,    48,
      97,    48,    48,   -85,   -85,    98,   -85,   -85,   -85,   -85,
     -85,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,   -85,
     -85,    48,    48,   -85,   -85,    78,   -85,   100,   -85,   102,
      99,   -85,    94,   -85,    32,    -8,    -8,    64,    64,    64,
      64,    59,    59,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   104,   -85,   103,   101,   -85,   153,   153,    48,
     -85,    48,   -85,   129,   -85,   107,   -85,   153,    48,   -85,
     108,   153,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    15,    16,    17,    18,    19,     0,     2,     3,     5,
       0,     0,    10,    11,    13,    14,     6,     1,     4,    30,
       8,     7,   108,     0,     0,    34,    36,    40,    12,     0,
      45,    29,    31,    23,     9,     0,    33,     0,    43,    40,
     109,   110,   111,     0,    57,     0,     0,     0,     0,     0,
       0,     0,    48,     0,    44,    46,    52,    49,     0,    50,
      51,    53,    56,    62,    63,    69,    71,    73,    76,    81,
      84,    88,    93,   103,   104,   105,   106,    32,    17,     0,
       0,    22,    24,    35,    37,    38,    39,     0,    42,     0,
       0,     0,    57,    91,    92,     0,    89,    90,    28,    47,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    99,     0,    26,    21,     0,    41,     0,    61,     0,
       0,   107,    70,    84,    72,    74,    75,    80,    79,    78,
      77,    82,    83,    86,    85,    87,    65,    66,    67,    68,
      64,   101,     0,    98,   100,     0,    25,    57,    57,    57,
      95,     0,    94,    58,    60,     0,   102,    57,    57,    59,
       0,    57,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   132,   -85,   -85,   -17,   -85,   133,   -85,
     -85,   -85,   -85,   -85,   -85,    21,   138,   -85,   -85,    -4,
     -85,   115,    72,   -85,   -85,   -85,   -53,   -85,   -85,   -44,
     -85,   -85,   -85,   -46,   -84,   -85,    52,    53,     3,   -50,
       0,   -42,   -85,   -85,   -85,   -85,   -85,    -7,    74,   123,
     126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    23,    34,    80,    81,    82,    52,    30,    31,    16,
      24,    25,    26,    87,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,   152,   153,   154,    72,    73,    74,    75,
      76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,    99,    29,    95,    27,    93,    94,    19,    96,    97,
      20,   105,    17,   106,    29,    32,    79,    22,   114,   115,
     116,   117,    39,   119,   120,   -20,    33,    77,    39,   121,
     146,   147,   148,   149,   150,   118,    38,   151,   107,   108,
     122,   -27,    40,   127,   -27,   129,    35,    36,   130,   103,
     104,    22,    40,    41,    42,   137,   138,   139,   140,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   143,
     144,   145,    39,    47,    48,     1,   155,   166,     2,    49,
       3,    37,     4,    38,     5,     1,    50,    89,     2,    91,
      78,    92,     4,    51,     5,    40,    41,    42,   111,   112,
     113,   109,   110,    98,   163,   164,   135,   136,    79,   141,
     142,    84,    88,   100,   169,   165,   101,   102,   172,    22,
      40,    41,    42,   125,   170,    43,   126,    44,   124,    45,
     131,    46,   157,   128,   158,   159,   160,   167,   161,    18,
     171,    47,    48,   168,   162,    28,   156,    49,    21,    19,
      83,   123,   -57,   132,    50,   134,    22,    40,    41,    42,
      85,    51,    43,    86,    44,     0,    45,     0,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
       0,     0,     0,     0,    49,     0,    19,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,    51
};

static const yytype_int16 yycheck[] =
{
      44,    54,    19,    49,    11,    47,    48,    33,    50,    51,
      36,    19,     0,    21,    31,    19,    33,     3,    27,    28,
      29,    30,    29,    25,    26,    31,    31,    31,    35,    31,
     114,   115,   116,   117,   118,    44,    42,   121,    46,    47,
      42,    32,     4,    89,    35,    91,    35,    36,    92,    17,
      18,     3,     4,     5,     6,   105,   106,   107,   108,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    79,    25,    26,     7,   122,   161,    10,    31,
      12,    44,    14,    42,    16,     7,    38,    31,    10,    31,
      12,    31,    14,    45,    16,     4,     5,     6,    39,    40,
      41,    37,    38,    34,   157,   158,   103,   104,   125,   109,
     110,    37,    38,    36,   167,   159,    24,    23,   171,     3,
       4,     5,     6,    35,   168,     9,    43,    11,    32,    13,
      32,    15,    32,    36,    32,    36,    32,     8,    35,     7,
      32,    25,    26,    36,    43,    12,   125,    31,    10,    33,
      35,    79,    36,   101,    38,   102,     3,     4,     5,     6,
      37,    45,     9,    37,    11,    -1,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    10,    12,    14,    16,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    68,     0,    52,    33,
      36,    65,     3,    60,    69,    70,    71,    96,    57,    55,
      66,    67,    68,    31,    61,    35,    36,    44,    42,    96,
       4,     5,     6,     9,    11,    13,    15,    25,    26,    31,
      38,    45,    65,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    95,    96,    97,    98,    99,    68,    12,    55,
      62,    63,    64,    70,    97,    98,    99,    72,    97,    31,
      78,    31,    31,    90,    90,    82,    90,    90,    34,    75,
      36,    24,    23,    17,    18,    19,    21,    46,    47,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    44,    25,
      26,    31,    42,    71,    32,    35,    43,    82,    36,    82,
      78,    32,    85,    90,    86,    87,    87,    88,    88,    88,
      88,    89,    89,    90,    90,    90,    83,    83,    83,    83,
      83,    83,    92,    93,    94,    82,    64,    32,    32,    36,
      32,    35,    43,    75,    75,    78,    83,     8,    36,    75,
      78,    32,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      55,    56,    56,    57,    57,    58,    59,    59,    59,    59,
      60,    61,    62,    62,    63,    63,    64,    64,    65,    66,
      66,    67,    67,    68,    69,    69,    70,    70,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      75,    75,    75,    75,    76,    77,    78,    78,    79,    79,
      80,    81,    82,    83,    83,    83,    83,    83,    83,    84,
      84,    85,    85,    86,    86,    86,    87,    87,    87,    87,
      87,    88,    88,    88,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    91,    91,    91,    91,    91,    92,    92,
      93,    94,    94,    95,    95,    95,    95,    95,    96,    97,
      98,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     2,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     0,     1,     3,     2,     1,     4,     1,
       0,     1,     2,     3,     1,     3,     1,     3,     3,     3,
       1,     4,     1,     0,     1,     0,     1,     2,     1,     1,
       1,     1,     1,     1,     9,     2,     1,     0,     5,     7,
       5,     3,     1,     1,     3,     3,     3,     3,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     2,
       2,     2,     2,     1,     4,     4,     2,     2,     1,     0,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     1
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
#line 44 "parser.y" /* yacc.c:1646  */
    {
	root = buildTree(PROGRAM, rightHandsLen[PROGRAM]);
}
#line 1419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[PROGRAM]++;	}
#line 1425 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 49 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[PROGRAM]++;	}
#line 1431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 54 "parser.y" /* yacc.c:1646  */
    { buildTree(FUNC_DEF, 2);	}
#line 1437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "parser.y" /* yacc.c:1646  */
    { buildTree(FUNC_HEAD, 3);	}
#line 1443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 59 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_SPEC, rightHandsLen[DCL_SPEC]);	}
#line 1449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 61 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL_SPEC]++;		}
#line 1455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 62 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL_SPEC]++;		}
#line 1461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 67 "parser.y" /* yacc.c:1646  */
    { buildTree(CONST_NODE, 0);	}
#line 1467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 69 "parser.y" /* yacc.c:1646  */
    { buildTree(INT_NODE, 0);	}
#line 1473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 70 "parser.y" /* yacc.c:1646  */
    { buildTree(VOID_NODE, 0);	}
#line 1479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 71 "parser.y" /* yacc.c:1646  */
    { buildTree(FLOAT_NODE, 0);	}
#line 1485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 72 "parser.y" /* yacc.c:1646  */
    { buildTree(CHAR_NODE, 0);	}
#line 1491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "parser.y" /* yacc.c:1646  */
    { buildTree(FORMAL_PARA, rightHandsLen[FORMAL_PARA]); }
#line 1497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 79 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 81 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[FORMAL_PARA]++;	}
#line 1509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 82 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[FORMAL_PARA]++;	}
#line 1515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 84 "parser.y" /* yacc.c:1646  */
    { buildTree(PARAM_DCL, 2);	}
#line 1521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 85 "parser.y" /* yacc.c:1646  */
    { buildTree(VOID_NODE, 0);}
#line 1527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 87 "parser.y" /* yacc.c:1646  */
    { buildTree(COMPOUND_ST, 2); }
#line 1533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 89 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_LIST, rightHandsLen[DCL_LIST]); rightHandsLen[COMPOUND_ST]++;}
#line 1539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 90 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_LIST, 0);			}
#line 1545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 92 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL_LIST]++;	}
#line 1551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 93 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL_LIST]++;	}
#line 1557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 95 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL, rightHandsLen[DCL]+1);	}
#line 1563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 97 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL]++;		}
#line 1569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 98 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL]++;		}
#line 1575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 100 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_ITEM, 1);	}
#line 1581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 101 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_ITEM, 2);	}
#line 1587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 102 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_ITEM, 2);	}
#line 1593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 103 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_ITEM, 2);	}
#line 1599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 105 "parser.y" /* yacc.c:1646  */
    { buildTree(SIMPLE_VAR, 1);		}
#line 1605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 106 "parser.y" /* yacc.c:1646  */
    { buildTree(ARRAY_VAR, rightHandsLen[ARRAY_VAR]+1);	}
#line 1611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 108 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[ARRAY_VAR]++;		}
#line 1617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 109 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 111 "parser.y" /* yacc.c:1646  */
    {

	rightHandsLen[STAT_LIST] = 0;
	i = sp;

	while(i > 0)
	{
		if(valueStack[i]->token.tokenNumber == COMPOUND_ST || valueStack[i]->token.tokenNumber == EXP_ST
			|| valueStack[i]->token.tokenNumber == IF_ST || valueStack[i]->token.tokenNumber == WHILE_ST
			|| valueStack[i]->token.tokenNumber == IF_ELSE_ST || valueStack[i]->token.tokenNumber == FOR_ST
			|| valueStack[i]->token.tokenNumber == RETURN_ST)
		{
			rightHandsLen[STAT_LIST]++; i--;
		}
		else i=0;
	}

	buildTree(STAT_LIST, rightHandsLen[STAT_LIST]);
	rightHandsLen[COMPOUND_ST]++;
}
#line 1648 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 131 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1654 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 133 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[STAT_LIST]++;		}
#line 1660 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 134 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[STAT_LIST]++;		}
#line 1666 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 146 "parser.y" /* yacc.c:1646  */
    { buildTree(FOR_ST, 0);			}
#line 1672 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 148 "parser.y" /* yacc.c:1646  */
    { buildTree(EXP_ST, rightHandsLen[EXP_ST]);	}
#line 1678 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 150 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[EXP_ST]++;	}
#line 1684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 151 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1690 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 153 "parser.y" /* yacc.c:1646  */
    { buildTree(IF_ST, 2);	}
#line 1696 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 155 "parser.y" /* yacc.c:1646  */
    { buildTree(IF_ELSE_ST, 3);	}
#line 1702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 157 "parser.y" /* yacc.c:1646  */
    { buildTree(WHILE_ST, 2);	}
#line 1708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 159 "parser.y" /* yacc.c:1646  */
    { buildTree(RETURN_ST, rightHandsLen[EXP_ST]);	}
#line 1714 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 164 "parser.y" /* yacc.c:1646  */
    { buildTree(ASSIGN_OP, 2);	}
#line 1720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 165 "parser.y" /* yacc.c:1646  */
    { buildTree(ADD_ASSIGN, 2);	}
#line 1726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 166 "parser.y" /* yacc.c:1646  */
    { buildTree(SUB_ASSIGN, 2);	}
#line 1732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 167 "parser.y" /* yacc.c:1646  */
    { buildTree(MUL_ASSIGN, 2);	}
#line 1738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 168 "parser.y" /* yacc.c:1646  */
    { buildTree(DIV_ASSIGN, 2);	}
#line 1744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 171 "parser.y" /* yacc.c:1646  */
    { buildTree(LOGICAL_OR, 2);	}
#line 1750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 174 "parser.y" /* yacc.c:1646  */
    { buildTree(LOGICAL_AND, 2);	}
#line 1756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 177 "parser.y" /* yacc.c:1646  */
    { buildTree(EQ, 2);		}
#line 1762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 178 "parser.y" /* yacc.c:1646  */
    { buildTree(NE, 2);		}
#line 1768 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 181 "parser.y" /* yacc.c:1646  */
    { buildTree(GT, 2);		}
#line 1774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 182 "parser.y" /* yacc.c:1646  */
    { buildTree(LT, 2);		}
#line 1780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 183 "parser.y" /* yacc.c:1646  */
    { buildTree(GE, 2);		}
#line 1786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 184 "parser.y" /* yacc.c:1646  */
    { buildTree(LE, 2);		}
#line 1792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 187 "parser.y" /* yacc.c:1646  */
    { buildTree(ADD, 2);		}
#line 1798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 188 "parser.y" /* yacc.c:1646  */
    { buildTree(SUB, 2);		}
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 191 "parser.y" /* yacc.c:1646  */
    { buildTree(MUL, 2);		}
#line 1810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 192 "parser.y" /* yacc.c:1646  */
    { buildTree(DIV, 2);		}
#line 1816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 193 "parser.y" /* yacc.c:1646  */
    { buildTree(MOD, 2);		}
#line 1822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 196 "parser.y" /* yacc.c:1646  */
    { buildTree(UNARY_MINUS, 1);	}
#line 1828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 197 "parser.y" /* yacc.c:1646  */
    { buildTree(LOGICAL_NOT, 1);	}
#line 1834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 198 "parser.y" /* yacc.c:1646  */
    { buildTree(PRE_INC, 1);	}
#line 1840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 199 "parser.y" /* yacc.c:1646  */
    { buildTree(PRE_DEC, 1);	}
#line 1846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 202 "parser.y" /* yacc.c:1646  */
    { buildTree(INDEX, 2);		}
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 203 "parser.y" /* yacc.c:1646  */
    { buildTree(CALL, 2);		}
#line 1858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 204 "parser.y" /* yacc.c:1646  */
    { buildTree(POST_INC, 1);	}
#line 1864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 205 "parser.y" /* yacc.c:1646  */
    { buildTree(POST_DEC, 1);	}
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 208 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 210 "parser.y" /* yacc.c:1646  */
    { buildTree(ACTUAL_PARAM, 1);	}
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 219 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 1888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 221 "parser.y" /* yacc.c:1646  */
    { buildNode(IDENT, (yyvsp[0].ch_val));		}
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 222 "parser.y" /* yacc.c:1646  */
    { buildNode(NUMBER, (yyvsp[0].ch_val));	}
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 223 "parser.y" /* yacc.c:1646  */
    { buildNode(NUMBER, (yyvsp[0].ch_val));	}
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 224 "parser.y" /* yacc.c:1646  */
    { buildNode(STRING, (yyvsp[0].ch_val));	}
#line 1912 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1916 "parser.tab.c" /* yacc.c:1646  */
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
#line 225 "parser.y" /* yacc.c:1906  */

void yyerror(char* msg) {
	printf("%d : %s %d\n", lineno, msg, yytext[0]);
}

Node* parser(FILE* srcFile) {
	yyin = srcFile;
	do {
		yyparse();
	} while(!feof(yyin));

	return root;
}

int main(int argc, char *argv[])
{
	FILE* srcFile;
	FILE* dstFile;
	char ifileName[100];
	char ofileName[100];
	Node *root;

	if(argc != 3) {
		printf("usage './execfile inputfile outputfile' format.\n");
		return 1;
	}

	if(argv[1] != NULL)
		strcpy(ifileName, argv[1]);
	if(argv[2] != NULL)
		strcpy(ofileName, argv[2]);

	srcFile= fopen(ifileName, "r");
	dstFile = fopen(ofileName, "w");

	if(!srcFile || !dstFile) {
		fprintf(stderr, "could not open file\n");
		perror("omygod:");
		return 2;
	}

	root = parser(srcFile);

	fprintf(dstFile, " \tSymbol table!\n");
	fprintf(dstFile, "num id \tvalue\n");
	fprintf(dstFile, "======================\n");
	codeGen(valueStack[sp], dstFile);
	fprintf(dstFile, "======================\n");
	fclose(srcFile);
	fclose(dstFile);

	return 0;
}
