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
extern FILE* yyin;
extern int yylex();
extern int yylineno;
extern char* yytext;
void yyerror(char *msg);

Node* root;

#line 79 "parser.tab.c" /* yacc.c:339  */

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
#line 14 "parser.y" /* yacc.c:355  */

	struct nodeType* node;
	char* ch_val;
	int int_val;

#line 174 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

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
      49,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       0,    39,    39,    43,    45,    46,    48,    49,    51,    52,
      54,    56,    58,    59,    61,    62,    64,    66,    67,    68,
      69,    71,    73,    75,    76,    78,    79,    81,    82,    84,
      86,    87,    89,    90,    92,    94,    95,    97,    98,    99,
     100,   102,   103,   105,   106,   108,   128,   130,   131,   133,
     134,   135,   136,   137,   138,   140,   145,   147,   148,   150,
     151,   154,   156,   158,   160,   161,   162,   163,   164,   165,
     167,   168,   170,   171,   173,   174,   175,   177,   178,   179,
     180,   181,   183,   184,   185,   187,   188,   189,   190,   192,
     193,   194,   195,   196,   198,   199,   200,   201,   202,   204,
     205,   207,   209,   210,   212,   213,   214,   215,   216,   218,
     219,   220,   221
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
  "bigger", "LOWER_THAN_ELSE", "'\\n'", "$accept", "mini_c",
  "translation_unit", "external_dcl", "function_def", "function_header",
  "dcl_spec", "dcl_specifiers", "dcl_specifier", "type_qualifier",
  "type_specifier", "function_name", "formal_param", "opt_formal_param",
  "formal_param_list", "param_dcl", "compound_st", "opt_dcl_list",
  "declaration_list", "declaration", "init_dcl_list", "init_declarator",
  "declarator", "opt_number", "opt_stat_list", "statement_list",
  "statement", "for_st", "expression_st", "opt_expression", "if_st",
  "while_st", "return_st", "expression", "assignment_exp",
  "logical_or_exp", "logical_and_exp", "equality_exp", "relational_exp",
  "additive_exp", "multiplicative_exp", "unary_exp", "postfix_exp",
  "opt_actual_param", "actual_param", "actual_param_list", "primary_exp",
  "ident", "inumber", "fnumber", "string", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,    10
};
# endif

#define YYPACT_NINF -87

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-87)))

#define YYTABLE_NINF -59

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   -87,   -87,   -87,   -87,   -87,   -87,    25,    74,   -87,
     -87,    46,     4,   123,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   123,   -87,   -87,   -87,    13,    71,   -87,    12,   -14,
     -87,     4,   116,   123,   -87,   160,   -87,     4,   -87,    45,
      54,    30,   -87,   -87,   -87,    47,    49,    52,    58,    49,
      49,    49,    49,    49,   -87,    51,   116,   -87,   -87,   -87,
      55,   -87,   -87,   -87,   -87,   -87,    79,    72,    18,     0,
      73,    61,   -17,    67,   -87,   -87,   -87,   -87,   -87,   -87,
      64,     4,    65,    91,   -87,   -87,   -87,   -87,   -87,    85,
     -87,    49,    96,    49,    49,   -87,   -87,   102,   -87,   -87,
     -87,   -87,   -87,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,   -87,   -87,    49,    49,   -87,   -87,   160,   -87,   104,
     -87,   106,   109,   -87,    72,   -87,    18,     0,     0,    73,
      73,    73,    73,    61,    61,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   108,   -87,   111,   105,   -87,   153,
     153,    49,   -87,    49,   -87,   142,   -87,   115,   -87,   153,
      49,   -87,   121,   153,   -87
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    16,    17,    18,    19,    20,     3,     0,     0,     4,
       6,     0,     0,    11,    12,    14,    15,     7,     1,     2,
       5,    31,     9,     8,   109,     0,     0,    35,    37,    41,
      13,     0,    46,    30,    32,    24,    10,     0,    34,     0,
      44,    41,   110,   111,   112,     0,    58,     0,     0,     0,
       0,     0,     0,     0,    49,     0,    45,    47,    53,    50,
       0,    51,    52,    54,    57,    63,    64,    70,    72,    74,
      77,    82,    85,    89,    94,   104,   105,   106,   107,    33,
      18,     0,     0,    23,    25,    36,    38,    39,    40,     0,
      43,     0,     0,     0,    58,    92,    93,     0,    90,    91,
      29,    48,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,    98,   100,     0,    27,    22,     0,    42,     0,
      62,     0,     0,   108,    71,    85,    73,    75,    76,    81,
      80,    79,    78,    83,    84,    87,    86,    88,    66,    67,
      68,    69,    65,   102,     0,    99,   101,     0,    26,    58,
      58,    58,    96,     0,    95,    59,    61,     0,   103,    58,
      58,    60,     0,    58,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -87,   -87,   147,   -87,   -87,   -19,   -87,   150,   -87,
     -87,   -87,   -87,   -87,   -87,    33,   154,   -87,   -87,     5,
     -87,   132,    90,   -87,   -87,   -87,   -55,   -87,   -87,   -46,
     -87,   -87,   -87,   -48,   -86,   -87,    70,    76,     7,   -68,
      32,   -44,   -87,   -87,   -87,   -87,   -87,    -8,    77,   136,
     138
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    25,    36,    82,    83,    84,    54,    32,    33,    17,
      26,    27,    28,    89,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,   154,   155,   156,    74,    75,    76,    77,
      78
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,   101,    31,    97,    29,    95,    96,    24,    98,    99,
     116,   117,   118,   119,    31,     1,    81,   -21,     2,   107,
       3,   108,     4,    41,     5,    18,    34,   120,    40,    41,
     148,   149,   150,   151,   152,   105,   106,   153,    79,   139,
     140,   141,   142,   129,    35,   131,   109,   110,   132,    42,
      43,    44,    24,    42,    43,    44,    39,     6,    42,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   145,
     146,   147,    40,    41,    49,    50,   157,   168,    91,    21,
      51,     1,    22,    93,     2,   100,     3,    52,     4,    94,
       5,   102,   121,   122,    53,   104,   -28,   126,   123,   -28,
     113,   114,   115,   103,   165,   166,    37,    38,    81,   124,
     111,   112,   137,   138,   171,   167,    86,    90,   174,    24,
      42,    43,    44,    19,   172,    45,   127,    46,   128,    47,
       1,    48,   130,     2,   133,     3,   159,     4,   160,     5,
     162,    49,    50,   143,   144,   161,   163,    51,   164,    21,
     169,   170,   -58,   173,    52,    20,    24,    42,    43,    44,
     158,    53,    45,    30,    46,    23,    47,     1,    48,    85,
       2,   125,    80,   134,     4,    87,     5,    88,    49,    50,
     136,     0,     0,     0,    51,     0,    21,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,    53
};

static const yytype_int16 yycheck[] =
{
      46,    56,    21,    51,    12,    49,    50,     3,    52,    53,
      27,    28,    29,    30,    33,     7,    35,    31,    10,    19,
      12,    21,    14,    31,    16,     0,    21,    44,    42,    37,
     116,   117,   118,   119,   120,    17,    18,   123,    33,   107,
     108,   109,   110,    91,    31,    93,    46,    47,    94,     4,
       5,     6,     3,     4,     5,     6,    44,    49,     4,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,    42,    81,    25,    26,   124,   163,    31,    33,
      31,     7,    36,    31,    10,    34,    12,    38,    14,    31,
      16,    36,    25,    26,    45,    23,    32,    32,    31,    35,
      39,    40,    41,    24,   159,   160,    35,    36,   127,    42,
      37,    38,   105,   106,   169,   161,    39,    40,   173,     3,
       4,     5,     6,    49,   170,     9,    35,    11,    43,    13,
       7,    15,    36,    10,    32,    12,    32,    14,    32,    16,
      32,    25,    26,   111,   112,    36,    35,    31,    43,    33,
       8,    36,    36,    32,    38,     8,     3,     4,     5,     6,
     127,    45,     9,    13,    11,    11,    13,     7,    15,    37,
      10,    81,    12,   103,    14,    39,    16,    39,    25,    26,
     104,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    10,    12,    14,    16,    49,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    69,     0,    49,
      53,    33,    36,    66,     3,    61,    70,    71,    72,    97,
      58,    56,    67,    68,    69,    31,    62,    35,    36,    44,
      42,    97,     4,     5,     6,     9,    11,    13,    15,    25,
      26,    31,    38,    45,    66,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    96,    97,    98,    99,   100,    69,
      12,    56,    63,    64,    65,    71,    98,    99,   100,    73,
      98,    31,    79,    31,    31,    91,    91,    83,    91,    91,
      34,    76,    36,    24,    23,    17,    18,    19,    21,    46,
      47,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      44,    25,    26,    31,    42,    72,    32,    35,    43,    83,
      36,    83,    79,    32,    86,    91,    87,    88,    88,    89,
      89,    89,    89,    90,    90,    91,    91,    91,    84,    84,
      84,    84,    84,    84,    93,    94,    95,    83,    65,    32,
      32,    36,    32,    35,    43,    76,    76,    79,    84,     8,
      36,    76,    79,    32,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    53,    53,    54,    54,
      55,    56,    57,    57,    58,    58,    59,    60,    60,    60,
      60,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    69,    70,    70,    71,    71,    71,
      71,    72,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    76,    76,    76,    76,    77,    78,    79,    79,    80,
      80,    81,    82,    83,    84,    84,    84,    84,    84,    84,
      85,    85,    86,    86,    87,    87,    87,    88,    88,    88,
      88,    88,    89,    89,    89,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    92,    92,    92,    92,    92,    93,
      93,    94,    95,    95,    96,    96,    96,    96,    96,    97,
      98,    99,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     1,     1,     2,     2,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     1,     3,     2,     1,     4,
       1,     0,     1,     2,     3,     1,     3,     1,     3,     3,
       3,     1,     4,     1,     0,     1,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     9,     2,     1,     0,     5,
       7,     5,     3,     1,     1,     3,     3,     3,     3,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     2,     1,     4,     4,     2,     2,     1,
       0,     1,     1,     3,     1,     1,     1,     1,     3,     1,
       1,     1,     1
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
#line 40 "parser.y" /* yacc.c:1646  */
    {
	root = buildTree(PROGRAM, rightHandsLen[PROGRAM]);
}
#line 1417 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1423 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 45 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[PROGRAM]++;	}
#line 1429 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 46 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[PROGRAM]++;	}
#line 1435 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "parser.y" /* yacc.c:1646  */
    { buildTree(FUNC_DEF, 2);	}
#line 1441 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "parser.y" /* yacc.c:1646  */
    { buildTree(FUNC_HEAD, 3);	}
#line 1447 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_SPEC, rightHandsLen[DCL_SPEC]);	}
#line 1453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL_SPEC]++;		}
#line 1459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 59 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL_SPEC]++;		}
#line 1465 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 64 "parser.y" /* yacc.c:1646  */
    { buildTree(CONST_NODE, 0);	}
#line 1471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 66 "parser.y" /* yacc.c:1646  */
    { buildTree(INT_NODE, 0);	}
#line 1477 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 67 "parser.y" /* yacc.c:1646  */
    { buildTree(VOID_NODE, 0);	}
#line 1483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 68 "parser.y" /* yacc.c:1646  */
    { buildTree(FLOAT_NODE, 0);	}
#line 1489 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 69 "parser.y" /* yacc.c:1646  */
    { buildTree(CHAR_NODE, 0);	}
#line 1495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 73 "parser.y" /* yacc.c:1646  */
    { buildTree(FORMAL_PARA, rightHandsLen[FORMAL_PARA]); }
#line 1501 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 76 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1507 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 78 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[FORMAL_PARA]++;	}
#line 1513 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 79 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[FORMAL_PARA]++;	}
#line 1519 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 81 "parser.y" /* yacc.c:1646  */
    { buildTree(PARAM_DCL, 2);	}
#line 1525 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 82 "parser.y" /* yacc.c:1646  */
    { buildTree(VOID_NODE, 0);	/*rightHandsLen[PARAM_DCL]++;*/}
#line 1531 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 84 "parser.y" /* yacc.c:1646  */
    { buildTree(COMPOUND_ST, 2);	}
#line 1537 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 86 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_LIST, rightHandsLen[DCL_LIST]); rightHandsLen[COMPOUND_ST]++;}
#line 1543 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 87 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_LIST, 0);			}
#line 1549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 89 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL_LIST]++;	}
#line 1555 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 90 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL_LIST]++;	}
#line 1561 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 92 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL, rightHandsLen[DCL]+1);	}
#line 1567 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 94 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL]++;		}
#line 1573 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 95 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[DCL]++;		}
#line 1579 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 97 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_ITEM, 1);	}
#line 1585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 98 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_ITEM, 2);	}
#line 1591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 99 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_ITEM, 2);	}
#line 1597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 100 "parser.y" /* yacc.c:1646  */
    { buildTree(DCL_ITEM, 2);	}
#line 1603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 102 "parser.y" /* yacc.c:1646  */
    { buildTree(SIMPLE_VAR, 1);		}
#line 1609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 103 "parser.y" /* yacc.c:1646  */
    { buildTree(ARRAY_VAR, rightHandsLen[ARRAY_VAR]+1);	}
#line 1615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 105 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[ARRAY_VAR]++;		}
#line 1621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 108 "parser.y" /* yacc.c:1646  */
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
#line 1652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 128 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 130 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[STAT_LIST]++;		}
#line 1664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 131 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[STAT_LIST]++;		}
#line 1670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 143 "parser.y" /* yacc.c:1646  */
    { buildTree(FOR_ST, 0);			}
#line 1676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 145 "parser.y" /* yacc.c:1646  */
    { buildTree(EXP_ST, rightHandsLen[EXP_ST]);	}
#line 1682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 147 "parser.y" /* yacc.c:1646  */
    { rightHandsLen[EXP_ST]++;	}
#line 1688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 148 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 150 "parser.y" /* yacc.c:1646  */
    { buildTree(IF_ST, 2);	}
#line 1700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 152 "parser.y" /* yacc.c:1646  */
    { buildTree(IF_ELSE_ST, 3);	}
#line 1706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 154 "parser.y" /* yacc.c:1646  */
    { buildTree(WHILE_ST, 2);	}
#line 1712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 156 "parser.y" /* yacc.c:1646  */
    { buildTree(RETURN_ST, rightHandsLen[EXP_ST]);	}
#line 1718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 161 "parser.y" /* yacc.c:1646  */
    { buildTree(ASSIGN_OP, 2);	}
#line 1724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 162 "parser.y" /* yacc.c:1646  */
    { buildTree(ADD_ASSIGN, 2);	}
#line 1730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 163 "parser.y" /* yacc.c:1646  */
    { buildTree(SUB_ASSIGN, 2);	}
#line 1736 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 164 "parser.y" /* yacc.c:1646  */
    { buildTree(MUL_ASSIGN, 2);	}
#line 1742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 165 "parser.y" /* yacc.c:1646  */
    { buildTree(DIV_ASSIGN, 2);	}
#line 1748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 168 "parser.y" /* yacc.c:1646  */
    { buildTree(LOGICAL_OR, 2);	}
#line 1754 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 171 "parser.y" /* yacc.c:1646  */
    { buildTree(LOGICAL_AND, 2);	}
#line 1760 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 174 "parser.y" /* yacc.c:1646  */
    { buildTree(EQ, 2);		}
#line 1766 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 175 "parser.y" /* yacc.c:1646  */
    { buildTree(NE, 2);		}
#line 1772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 178 "parser.y" /* yacc.c:1646  */
    { buildTree(GT, 2);		}
#line 1778 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 179 "parser.y" /* yacc.c:1646  */
    { buildTree(LT, 2);		}
#line 1784 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 180 "parser.y" /* yacc.c:1646  */
    { buildTree(GE, 2);		}
#line 1790 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 181 "parser.y" /* yacc.c:1646  */
    { buildTree(LE, 2);		}
#line 1796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 184 "parser.y" /* yacc.c:1646  */
    { buildTree(ADD, 2);		}
#line 1802 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 185 "parser.y" /* yacc.c:1646  */
    { buildTree(SUB, 2);		}
#line 1808 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 188 "parser.y" /* yacc.c:1646  */
    { buildTree(MUL, 2);		}
#line 1814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 189 "parser.y" /* yacc.c:1646  */
    { buildTree(DIV, 2);		}
#line 1820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 190 "parser.y" /* yacc.c:1646  */
    { buildTree(MOD, 2);		}
#line 1826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 193 "parser.y" /* yacc.c:1646  */
    { buildTree(UNARY_MINUS, 1);	}
#line 1832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 194 "parser.y" /* yacc.c:1646  */
    { buildTree(LOGICAL_NOT, 1);	}
#line 1838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 195 "parser.y" /* yacc.c:1646  */
    { buildTree(PRE_INC, 1);	}
#line 1844 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 196 "parser.y" /* yacc.c:1646  */
    { buildTree(PRE_DEC, 1);	}
#line 1850 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 199 "parser.y" /* yacc.c:1646  */
    { buildTree(INDEX, 2);		}
#line 1856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 200 "parser.y" /* yacc.c:1646  */
    { buildTree(CALL, 2);		}
#line 1862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 201 "parser.y" /* yacc.c:1646  */
    { buildTree(POST_INC, 1);	}
#line 1868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 202 "parser.y" /* yacc.c:1646  */
    { buildTree(POST_DEC, 1);	}
#line 1874 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 205 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1880 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 207 "parser.y" /* yacc.c:1646  */
    { buildTree(ACTUAL_PARAM, 1);	}
#line 1886 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 216 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 1892 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 218 "parser.y" /* yacc.c:1646  */
    { buildNode(IDENT, (yyvsp[0].ch_val));		}
#line 1898 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 219 "parser.y" /* yacc.c:1646  */
    { buildNode(NUMBER, (yyvsp[0].ch_val));	}
#line 1904 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 220 "parser.y" /* yacc.c:1646  */
    { buildNode(NUMBER, (yyvsp[0].ch_val));	}
#line 1910 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 221 "parser.y" /* yacc.c:1646  */
    { buildNode(STRING, (yyvsp[0].ch_val));	}
#line 1916 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1920 "parser.tab.c" /* yacc.c:1646  */
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
#line 222 "parser.y" /* yacc.c:1906  */


void yyerror(char* msg) {
	printf("%d : %s %s\n", lineno, msg, yytext);
}

Node* parser(FILE* srcFile) {
	yyin = srcFile;
	do {
		yyrestart(yyin);
		yyparse();
	} while(!feof(yyin));

	return root;
}

int main(int argc, char *argv[])
{
	FILE* srcFile;
	FILE* astFile;
	char filename[100];
	Node *root;

	strcpy(filename, argv[1]);

	srcFile= fopen(filename, "r");
	astFile = fopen("astFile.txt", "w");

	if(!srcFile || !astFile)
		fprintf(stderr, "could not open file\n");
	yyin = srcFile;

	fprintf(astFile, "   AST Result  \n");
	fprintf(astFile, " ==============\n");
	root = parser(srcFile);
	printTree(root, 0, astFile);
	fprintf(astFile, " ==============\n");
	fprintf(astFile, "  End Prasing!\n");

	fclose(srcFile);
	fclose(astFile);

	return 1;
}
