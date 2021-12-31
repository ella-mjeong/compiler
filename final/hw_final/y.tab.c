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
#line 1 "kim.y" /* yacc.c:339  */

#include <stdio.h>
#include "type.h"
 extern int line_no, syntax_err;
 extern A_NODE *root;
 extern A_ID *current_id;
 extern int current_level;
 extern A_TYPE *int_type;
 int yylex();

#line 77 "y.tab.c" /* yacc.c:339  */

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
    IDENTIFIER = 258,
    TYPE_IDENTIFIER = 259,
    AUTO_SYM = 260,
    BREAK_SYM = 261,
    CASE_SYM = 262,
    CONTINUE_SYM = 263,
    DEFAULT_SYM = 264,
    DO_SYM = 265,
    ELSE_SYM = 266,
    ENUM_SYM = 267,
    FOR_SYM = 268,
    IF_SYM = 269,
    RETURN_SYM = 270,
    SIZEOF_SYM = 271,
    STATIC_SYM = 272,
    STRUCT_SYM = 273,
    SWITCH_SYM = 274,
    TYPEDEF_SYM = 275,
    UNION_SYM = 276,
    WHILE_SYM = 277,
    CONST_SYM = 278,
    PLUSPLUS = 279,
    MINUSMINUS = 280,
    BAR = 281,
    AMP = 282,
    AMPAMP = 283,
    BARBAR = 284,
    ARROW = 285,
    LSS = 286,
    GTR = 287,
    LEQ = 288,
    GEQ = 289,
    EQL = 290,
    NEQ = 291,
    DOTDOTDOT = 292,
    LP = 293,
    RP = 294,
    LB = 295,
    RB = 296,
    LR = 297,
    RR = 298,
    COLON = 299,
    PERIOD = 300,
    COMMA = 301,
    EXCL = 302,
    STAR = 303,
    SLASH = 304,
    PERCENT = 305,
    SEMICOLON = 306,
    ASSIGN = 307,
    PLUS = 308,
    MINUS = 309,
    INTEGER_CONSTANT = 310,
    FLOAT_CONSTANT = 311,
    STRING_LITERAL = 312,
    CHARACTER_CONSTANT = 313
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define AUTO_SYM 260
#define BREAK_SYM 261
#define CASE_SYM 262
#define CONTINUE_SYM 263
#define DEFAULT_SYM 264
#define DO_SYM 265
#define ELSE_SYM 266
#define ENUM_SYM 267
#define FOR_SYM 268
#define IF_SYM 269
#define RETURN_SYM 270
#define SIZEOF_SYM 271
#define STATIC_SYM 272
#define STRUCT_SYM 273
#define SWITCH_SYM 274
#define TYPEDEF_SYM 275
#define UNION_SYM 276
#define WHILE_SYM 277
#define CONST_SYM 278
#define PLUSPLUS 279
#define MINUSMINUS 280
#define BAR 281
#define AMP 282
#define AMPAMP 283
#define BARBAR 284
#define ARROW 285
#define LSS 286
#define GTR 287
#define LEQ 288
#define GEQ 289
#define EQL 290
#define NEQ 291
#define DOTDOTDOT 292
#define LP 293
#define RP 294
#define LB 295
#define RB 296
#define LR 297
#define RR 298
#define COLON 299
#define PERIOD 300
#define COMMA 301
#define EXCL 302
#define STAR 303
#define SLASH 304
#define PERCENT 305
#define SEMICOLON 306
#define ASSIGN 307
#define PLUS 308
#define MINUS 309
#define INTEGER_CONSTANT 310
#define FLOAT_CONSTANT 311
#define STRING_LITERAL 312
#define CHARACTER_CONSTANT 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 244 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   477

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    17,    17,    21,    22,    25,    26,    29,    29,    30,
      30,    33,    34,    37,    38,    41,    44,    45,    46,    47,
      50,    51,    52,    55,    56,    59,    60,    63,    64,    67,
      68,    71,    72,    75,    76,    77,    80,    80,    80,    81,
      81,    81,    82,    85,    86,    89,    90,    93,    96,    97,
     100,   103,   103,   104,   104,   105,   108,   109,   112,   113,
     113,   116,   117,   120,   121,   124,   125,   126,   127,   127,
     130,   131,   134,   135,   138,   139,   142,   143,   146,   147,
     150,   151,   152,   155,   156,   157,   158,   159,   162,   163,
     166,   167,   170,   171,   172,   173,   174,   175,   178,   179,
     182,   182,   185,   186,   189,   190,   191,   194,   195,   196,
     199,   202,   203,   206,   207,   208,   211,   212,   215,   216,
     219,   220,   223,   226,   229,   232,   233,   236,   239,   240,
     243,   244,   247,   250,   253,   256,   257,   258,   261,   262,
     263,   264,   265,   268,   271,   272,   273,   276,   277,   278,
     279,   282,   283,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   298,   299,   300,   301,   302,   303,   304,
     307,   308,   309,   310,   311,   312,   315
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "AUTO_SYM", "BREAK_SYM", "CASE_SYM", "CONTINUE_SYM", "DEFAULT_SYM",
  "DO_SYM", "ELSE_SYM", "ENUM_SYM", "FOR_SYM", "IF_SYM", "RETURN_SYM",
  "SIZEOF_SYM", "STATIC_SYM", "STRUCT_SYM", "SWITCH_SYM", "TYPEDEF_SYM",
  "UNION_SYM", "WHILE_SYM", "CONST_SYM", "PLUSPLUS", "MINUSMINUS", "BAR",
  "AMP", "AMPAMP", "BARBAR", "ARROW", "LSS", "GTR", "LEQ", "GEQ", "EQL",
  "NEQ", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR", "RR", "COLON",
  "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT", "SEMICOLON",
  "ASSIGN", "PLUS", "MINUS", "INTEGER_CONSTANT", "FLOAT_CONSTANT",
  "STRING_LITERAL", "CHARACTER_CONSTANT", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition", "@1",
  "@2", "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

#define YYPACT_NINF -205

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-205)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     402,  -205,  -205,  -205,    39,  -205,  -205,  -205,  -205,    34,
      -4,    51,   402,  -205,  -205,  -205,    34,   456,   456,  -205,
      74,  -205,  -205,    12,    40,    32,    46,    65,  -205,  -205,
    -205,    57,   105,  -205,    -6,  -205,  -205,   113,   120,   124,
      40,  -205,   329,   127,   155,  -205,  -205,    34,   293,   124,
     128,  -205,  -205,  -205,   456,  -205,   341,   377,   377,   329,
     268,   329,   329,   329,   329,  -205,  -205,  -205,  -205,   130,
    -205,  -205,  -205,  -205,  -205,   144,   151,  -205,  -205,  -205,
      61,   102,  -205,    59,    90,  -205,   132,   217,  -205,   155,
     133,    44,  -205,  -205,   134,   293,  -205,  -205,  -205,  -205,
      20,   456,    31,   158,  -205,   153,  -205,   268,  -205,   329,
    -205,  -205,  -205,  -205,   -15,   162,   163,  -205,  -205,  -205,
    -205,  -205,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,  -205,  -205,   187,   329,
     329,   200,    60,   152,  -205,   155,  -205,    71,    20,    34,
     170,  -205,   212,   456,  -205,    34,   160,   329,  -205,     9,
    -205,  -205,   104,  -205,   434,   168,   424,   116,  -205,  -205,
     329,   151,  -205,   102,   102,  -205,  -205,  -205,  -205,    90,
      90,  -205,  -205,  -205,  -205,  -205,   172,   166,  -205,   175,
    -205,  -205,   329,  -205,  -205,   293,   171,    35,  -205,  -205,
    -205,  -205,   173,   329,   178,   179,   212,   192,   202,   329,
     205,   206,  -205,   174,   212,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,   194,  -205,   199,   209,   208,   104,   456,   329,
    -205,  -205,  -205,  -205,  -205,   329,  -205,  -205,  -205,  -205,
      34,  -205,  -205,   207,  -205,   212,   230,   329,   329,   210,
    -205,   329,   329,  -205,  -205,  -205,  -205,  -205,  -205,   214,
     215,  -205,  -205,   212,  -205,   220,   225,   223,   236,  -205,
     237,   238,  -205,  -205,  -205,   329,   212,   329,   212,   212,
     212,   239,  -205,   228,   270,  -205,  -205,   231,   329,   212,
    -205,  -205,  -205
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,    20,    53,    21,    43,    22,    44,     0,
      63,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,    55,     0,     0,    64,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,     0,     0,    66,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,   172,   174,   173,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,     0,   161,     0,
     154,   155,   156,   151,    78,     0,     0,   158,   157,   160,
     159,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,     0,   116,
       0,     0,     0,     0,    54,     0,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,    70,   120,    76,    81,
      77,    79,    80,    69,     0,     0,    70,    81,   176,   175,
       0,   129,   131,   136,   137,   139,   140,   141,   142,   145,
     146,   148,   149,   150,   126,   167,     0,   117,   118,     0,
     166,    52,     0,    57,    30,     0,     0,     0,    48,    50,
      41,    46,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,   102,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,    70,   120,
      73,    75,   162,   152,   165,     0,   164,    60,    32,    38,
       0,    47,   115,     0,   114,     0,     0,   111,     0,     0,
     112,     0,     0,   101,    91,   103,    86,    83,    84,     0,
       0,   119,    49,     0,    99,     0,     0,     0,     0,   113,
       0,     0,    87,    85,    98,     0,     0,   111,     0,     0,
       0,     0,   109,     0,   104,   106,   107,     0,   111,     0,
     108,   110,   105
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -205,  -205,  -205,   271,  -205,  -205,  -205,  -205,  -205,   -87,
       4,  -205,  -205,  -205,   240,   -85,  -205,   -80,  -205,  -205,
    -205,  -205,  -205,  -205,   142,  -133,  -205,    54,  -205,  -205,
    -205,   211,   146,  -205,    -8,    -7,   -16,  -205,   -52,  -205,
    -205,   135,   183,  -121,  -119,  -205,  -205,  -187,  -205,    36,
    -205,  -205,  -205,  -205,  -205,  -204,  -205,  -205,  -205,  -146,
     -43,   -42,  -205,  -126,  -205,  -205,   176,   180,  -205,  -205,
    -205,    21,    67,  -205,   -12,   -33,    -2,  -205,  -205,   195
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    43,
      26,    91,    92,   143,    22,    23,    24,    54,   224,   104,
     105,   106,   160,   161,   162,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   266,   249,   221,   186,   187,    69,
      70,   222,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    27,   103,    28,    16,    97,    71,    40,    34,   184,
     146,   226,     1,   188,   154,     1,    16,   201,   115,   246,
     149,    35,    36,   166,     2,   157,   112,   254,   117,   118,
     119,   120,     4,    10,     1,   225,    -7,     1,     6,    94,
     227,     8,    25,   267,    10,   225,    48,   156,   227,   157,
       9,    29,    97,    71,   108,   110,   111,   113,   264,   113,
     113,   113,   113,   201,   114,   115,   223,   115,   149,   156,
     149,   157,     9,   283,   -51,    53,   274,    37,    41,    10,
      42,   240,    10,   260,   291,    98,   241,   144,    44,   282,
     145,   284,   285,   286,   158,   159,   124,   125,   189,   181,
     182,   183,   292,   191,    45,   155,   145,   167,    46,   261,
     238,   114,   130,   131,   194,    71,   149,   195,   179,   180,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   126,   127,   128,   129,   233,   132,   133,
     134,   199,   228,    40,   229,   173,   174,    94,    27,   159,
     237,    47,    97,    71,   166,   -36,   157,   155,    90,   167,
     243,    71,    51,     1,     2,     3,    52,   250,   113,    89,
      99,   121,     4,   122,     2,     2,   259,     5,     6,   123,
       7,     8,     4,     4,   135,   -59,    48,    71,     6,     6,
     185,     8,     8,   175,   176,   177,   178,   163,   156,   164,
     157,   169,   170,   190,   192,   250,   268,   232,    10,   270,
     271,   234,   235,   200,   239,    55,   236,   253,   202,   203,
     204,   205,   206,   245,   242,   207,   208,   209,    56,   244,
     247,   210,   199,   281,   211,   250,    57,    58,   256,    59,
     248,   136,   137,   251,   252,   255,   250,   138,   257,   258,
      60,   263,   265,   272,    52,   139,   273,   140,   275,    61,
      62,   269,   141,   212,   276,    63,    64,    65,    66,    67,
      68,    55,     2,     3,   277,   278,   279,   280,   287,   288,
       4,   289,   290,    30,    56,     5,     6,    93,     7,     8,
     196,   193,    57,    58,   262,    59,    55,   168,   171,   231,
     142,     0,   165,   172,     0,     0,    60,     0,     0,    56,
       0,     0,     0,     0,     0,    61,    62,    57,    58,     0,
      59,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,    60,    55,     0,     0,    95,     0,     0,     0,     0,
      61,    62,     0,     0,    55,    56,    63,    64,    65,    66,
      67,    68,     0,    57,    58,     0,    59,    56,     0,     0,
       0,     0,     0,     0,     0,    57,    58,    60,    59,     0,
       0,     0,     0,     0,     0,     0,    61,    62,     0,   107,
      55,     0,    63,    64,    65,    66,    67,    68,    61,    62,
       0,     0,     0,    56,    63,    64,    65,    66,    67,    68,
       0,    57,    58,     0,    59,     1,     2,     3,     0,     0,
       0,     0,     0,     0,     4,   109,     0,     0,     0,     5,
       6,     0,     7,     8,    61,    62,     0,     0,     2,     3,
      63,    64,    65,    66,    67,    68,     4,     0,     2,     3,
       9,     5,     6,     0,     7,     8,     4,     0,     0,     0,
      10,     5,     6,     0,     7,     8,     0,     0,     0,     0,
       2,     3,   166,     0,   157,     0,     0,     0,     4,     0,
       0,   230,    10,     5,     6,     0,     7,     8
};

static const yytype_int16 yycheck[] =
{
      42,     9,    54,    10,     0,    48,    48,    23,    16,   135,
      95,   157,     3,   139,   101,     3,    12,   150,    60,   206,
     100,    17,    18,    38,     4,    40,    59,   214,    61,    62,
      63,    64,    12,    48,     3,   156,    42,     3,    18,    47,
     159,    21,     3,   247,    48,   166,    52,    38,   167,    40,
      38,     0,    95,    95,    56,    57,    58,    59,   245,    61,
      62,    63,    64,   196,    60,   107,   153,   109,   148,    38,
     150,    40,    38,   277,    42,    39,   263,     3,    38,    48,
      40,    46,    48,   229,   288,    49,    51,    43,    42,   276,
      46,   278,   279,   280,   102,   102,    35,    36,   140,   132,
     133,   134,   289,    43,    39,   101,    46,   114,    51,   235,
     195,   107,    53,    54,    43,   157,   196,    46,   130,   131,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    31,    32,    33,    34,   170,    48,    49,
      50,   149,    38,   159,    40,   124,   125,   155,   156,   156,
     192,    46,   195,   195,    38,    42,    40,   153,     3,   166,
     203,   203,    42,     3,     4,     5,    42,   209,   170,    42,
      42,    41,    12,    29,     4,     4,   228,    17,    18,    28,
      20,    21,    12,    12,    52,    52,    52,   229,    18,    18,
       3,    21,    21,   126,   127,   128,   129,    39,    38,    46,
      40,    39,    39,     3,    52,   247,   248,    39,    48,   251,
     252,    39,    46,    43,    43,     3,    41,    43,     6,     7,
       8,     9,    10,    44,    51,    13,    14,    15,    16,    51,
      38,    19,   240,   275,    22,   277,    24,    25,    39,    27,
      38,    24,    25,    38,    38,    51,   288,    30,    39,    41,
      38,    44,    22,    39,    42,    38,    41,    40,    38,    47,
      48,    51,    45,    51,    39,    53,    54,    55,    56,    57,
      58,     3,     4,     5,    51,    39,    39,    39,    39,    51,
      12,    11,    51,    12,    16,    17,    18,    47,    20,    21,
     148,   145,    24,    25,   240,    27,     3,   114,   122,   164,
      89,    -1,   107,   123,    -1,    -1,    38,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    47,    48,    24,    25,    -1,
      27,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    38,     3,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    48,    -1,    -1,     3,    16,    53,    54,    55,    56,
      57,    58,    -1,    24,    25,    -1,    27,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    38,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    38,
       3,    -1,    53,    54,    55,    56,    57,    58,    47,    48,
      -1,    -1,    -1,    16,    53,    54,    55,    56,    57,    58,
      -1,    24,    25,    -1,    27,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    38,    -1,    -1,    -1,    17,
      18,    -1,    20,    21,    47,    48,    -1,    -1,     4,     5,
      53,    54,    55,    56,    57,    58,    12,    -1,     4,     5,
      38,    17,    18,    -1,    20,    21,    12,    -1,    -1,    -1,
      48,    17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,
       4,     5,    38,    -1,    40,    -1,    -1,    -1,    12,    -1,
      -1,    37,    48,    17,    18,    -1,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    12,    17,    18,    20,    21,    38,
      48,    60,    61,    62,    63,    68,    69,    70,    76,    77,
      82,    87,    93,    94,    95,     3,    89,    93,    94,     0,
      62,    71,    72,    73,    93,    69,    69,     3,    80,    65,
      95,    38,    40,    88,    42,    39,    51,    46,    52,    64,
      78,    42,    42,   108,    96,     3,    16,    24,    25,    27,
      38,    47,    48,    53,    54,    55,    56,    57,    58,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    42,
       3,    90,    91,    73,    93,    42,    74,   119,   108,    42,
      81,   109,    69,    97,    98,    99,   100,    38,   135,    38,
     135,   135,   134,   135,    69,   120,   138,   134,   134,   134,
     134,    41,    29,    28,    35,    36,    31,    32,    33,    34,
      53,    54,    48,    49,    50,    52,    24,    25,    30,    38,
      40,    45,    90,    92,    43,    46,    74,    75,    79,    76,
      83,    84,    66,    67,    68,    69,    38,    40,    93,    94,
     101,   102,   103,    39,    46,   138,    38,    94,   101,    39,
      39,   125,   126,   130,   130,   131,   131,   131,   131,   133,
     133,   134,   134,   134,   122,     3,   116,   117,   122,   120,
       3,    43,    52,    91,    43,    46,    83,    85,    86,    93,
      43,    84,     6,     7,     8,     9,    10,    13,    14,    15,
      19,    22,    51,   104,   105,   106,   107,   108,   110,   111,
     112,   115,   120,    68,    97,   102,   118,   103,    38,    40,
      37,   100,    39,   134,    39,    46,    41,   120,    74,    43,
      46,    51,    51,   119,    51,    44,   106,    38,    38,   114,
     120,    38,    38,    43,   106,    51,    39,    39,    41,    97,
     118,   122,    86,    44,   106,    22,   113,   114,   120,    51,
     120,   120,    39,    41,   106,    38,    39,    51,    39,    39,
      39,   120,   106,   114,   106,   106,   106,    39,    51,    11,
      51,   114,   106
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    64,    63,    65,
      63,    66,    66,    67,    67,    68,    69,    69,    69,    69,
      70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    78,    79,    77,    80,
      81,    77,    77,    82,    82,    83,    83,    84,    85,    85,
      86,    88,    87,    89,    87,    87,    90,    90,    91,    92,
      91,    93,    93,    94,    94,    95,    95,    95,    96,    95,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   107,   107,
     109,   108,   110,   110,   111,   111,   111,   112,   112,   112,
     113,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   120,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   127,   128,   129,   129,   129,   130,   130,
     130,   130,   130,   131,   132,   132,   132,   133,   133,   133,
     133,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   137,   137,   137,   138
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
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
#line 18 "kim.y" /* yacc.c:1646  */
    {root = makeNode(N_PROGRAM, NIL, (yyvsp[0]), NIL); checkForwardReference();}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 21 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 22 "kim.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-1]), (yyvsp[0]));}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 25 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 26 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 29 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 29 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 30 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]), makeSpecifier(int_type, 0));}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 30 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 33 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 34 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 37 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 38 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]), (yyvsp[0]));}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 41 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 44 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier((yyvsp[0]),0);}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 45 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier(0,(yyvsp[0]));}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 46 "kim.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),(yyvsp[-1]),0);}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 47 "kim.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),0,(yyvsp[-1]));}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 50 "kim.y" /* yacc.c:1646  */
    {(yyval)=S_AUTO;}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 51 "kim.y" /* yacc.c:1646  */
    {(yyval)=S_STATIC;}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 52 "kim.y" /* yacc.c:1646  */
    {(yyval)=S_TYPEDEF;}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 55 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeDummyIdentifier();}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 56 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 59 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 60 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 63 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 64 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 67 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST_ONE, NIL, (yyvsp[0]), NIL);}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 68 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 71 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST, (yyvsp[0]), NIL, makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 72 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_INIT_LIST, (yyvsp[-2]), (yyvsp[0]));}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 75 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 76 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 77 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 80 "kim.y" /* yacc.c:1646  */
    {(yyval) = setTypeStructOrEnumIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 80 "kim.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 80 "kim.y" /* yacc.c:1646  */
    {checkForwardReference();(yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]));current_level--; current_id = (yyvsp[-2]);}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 81 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType((yyvsp[0]));}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 81 "kim.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 81 "kim.y" /* yacc.c:1646  */
    {checkForwardReference();(yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]));current_level--; current_id = (yyvsp[-2]);}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 82 "kim.y" /* yacc.c:1646  */
    {(yyval) = getTypeOfStructOrEnumRefIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 85 "kim.y" /* yacc.c:1646  */
    {(yyval)=T_STRUCT;}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 86 "kim.y" /* yacc.c:1646  */
    {(yyval)=T_UNION;}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 89 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 90 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 93 "kim.y" /* yacc.c:1646  */
    {(yyval)=setStructDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 96 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 97 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 100 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 103 "kim.y" /* yacc.c:1646  */
    {(yyval) = setTypeStructOrEnumIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 103 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 104 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_ENUM);}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 104 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 105 "kim.y" /* yacc.c:1646  */
    {(yyval) = getTypeOfStructOrEnumRefIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 108 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 109 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 112 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 113 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 113 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 116 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[0]),(yyvsp[-1]));}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 117 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 120 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 121 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 124 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeIdentifier((yyvsp[0]));}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 125 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 126 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 127 "kim.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 127 "kim.y" /* yacc.c:1646  */
    {checkForwardReference(); current_id = (yyvsp[-2]); current_level--; (yyval)=setDeclaratorElementType((yyvsp[-4]),setTypeField(makeType(T_FUNC),(yyvsp[-1])));}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 130 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 131 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 134 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 135 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 138 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 139 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 142 "kim.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 143 "kim.y" /* yacc.c:1646  */
    { (yyval) = setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),(yyvsp[0])),(yyvsp[-1]));}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 146 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 147 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 150 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 151 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 152 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 155 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 156 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_ARRAY), (yyvsp[-1]));}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 157 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 158 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_FUNC),(yyvsp[-1]));}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 159 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_FUNC),(yyvsp[-1])));}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 162 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST_NIL, NIL,NIL,NIL);}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 163 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 166 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST, (yyvsp[0]), NIL, makeNode(N_STMT_LIST_NIL, NIL,NIL,NIL));}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 167 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_STMT_LIST, (yyvsp[-1]), (yyvsp[0]));}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 170 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 171 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 172 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 173 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 174 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 175 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 178 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_CASE, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 179 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT, NIL, (yyvsp[0]), NIL);}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 182 "kim.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 182 "kim.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval)=makeNode(N_STMT_COMPOUND, (yyvsp[-2]), NIL, (yyvsp[-1])); current_id=(yyvsp[-3]); current_level--;}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 185 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 186 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EXPRESSION,NIL, (yyvsp[-1]), NIL);}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 189 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 190 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF_ELSE, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 191 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_SWITCH, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 194 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_WHILE, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 195 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_DO, (yyvsp[-5]), NIL, (yyvsp[-2]));}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 196 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_FOR, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 199 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_FOR_EXP, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 202 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 203 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 206 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_RETURN,NIL,(yyvsp[-1]),NIL);}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 207 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 208 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 211 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 212 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 215 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST,(yyvsp[0]),NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 216 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_ARG_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 219 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 220 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 223 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 226 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 229 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 232 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 233 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ASSIGN, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 236 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 239 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 240 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_OR, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 243 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 244 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AND, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 247 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 250 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 253 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 256 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 257 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_EQL, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 258 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NEQ, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 261 "kim.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 262 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LSS, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 263 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GTR, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 264 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LEQ, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 265 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GEQ, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 268 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 271 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 272 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ADD, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 273 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SUB, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 276 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 277 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MUL, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 278 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_DIV, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 279 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MOD, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 282 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 283 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CAST, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 286 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 287 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_INC,NIL,(yyvsp[0]),NIL);}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 288 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_DEC,NIL,(yyvsp[0]),NIL);}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 289 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AMP,NIL,(yyvsp[0]),NIL);}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 290 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STAR,NIL,(yyvsp[0]),NIL);}
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 291 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NOT,NIL,(yyvsp[0]),NIL);}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 292 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MINUS,NIL,(yyvsp[0]),NIL);}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 293 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PLUS,NIL,(yyvsp[0]),NIL);}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 294 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_EXP,NIL,(yyvsp[0]),NIL);}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 295 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_TYPE,NIL,(yyvsp[-1]),NIL);}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 298 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 299 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARRAY,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 300 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FUNCTION_CALL,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 301 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRUCT,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 302 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARROW,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 303 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_INC,NIL,(yyvsp[-1]),NIL);}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 304 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_DEC,NIL,(yyvsp[-1]),NIL);}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 307 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared((yyvsp[0])),NIL);}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 308 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_INT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 309 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FLOAT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 310 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CHAR_CONST,NIL,(yyvsp[0]),NIL);}
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 311 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRING_LITERAL,NIL,(yyvsp[0]),NIL);}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 312 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 315 "kim.y" /* yacc.c:1646  */
    {(yyval) = setTypeNameSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2647 "y.tab.c" /* yacc.c:1646  */
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
#line 320 "kim.y" /* yacc.c:1906  */

extern char *yytext;
int yywrap(){return(1);}
int yyerror(char *s){
	syntax_err++;
	printf("line %d: %s near %s\n", line_no, s, yytext);
}
