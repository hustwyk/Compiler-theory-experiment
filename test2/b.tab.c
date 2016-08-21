
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
#line 1 "b.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "tree.h"
int yyparse (void);
void yyerror(char* s);
extern char *yytext;
extern int yylineno;
extern int debug;
extern bool willPrintTree;
extern void printError(const char* msg);
int errorCount = 0;
#define YYERROR_VERBOSE 1


/* Line 189 of yacc.c  */
#line 90 "b.tab.c"

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
     CONST = 258,
     VAR = 259,
     PROCEDURE = 260,
     BEGIN_ = 261,
     END = 262,
     ODD = 263,
     IF = 264,
     THEN = 265,
     CALL = 266,
     WHILE = 267,
     DO = 268,
     READ = 269,
     WRITE = 270,
     LE = 271,
     GE = 272,
     ASSIGN = 273,
     PLUS = 274,
     MINUS = 275,
     MUL = 276,
     DIV = 277,
     LT = 278,
     GT = 279,
     NE = 280,
     EQ = 281,
     LEFTBRACKET = 282,
     RIGHTBRACKET = 283,
     SEMICOLON = 284,
     COMMA = 285,
     DOT = 286,
     INTERGER = 287,
     ID = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 17 "b.y"

    int integer;
    struct Node *pnode;



/* Line 214 of yacc.c  */
#line 166 "b.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 178 "b.tab.c"

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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  112

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    14,    17,    21,    25,
      29,    34,    37,    40,    44,    48,    51,    54,    58,    61,
      64,    68,    72,    74,    76,    78,    80,    82,    84,    86,
      88,    92,    95,    98,   102,   103,   107,   110,   112,   115,
     119,   121,   125,   127,   129,   133,   135,   137,   139,   141,
     143,   145,   147,   149,   151,   153,   158,   161,   166,   169,
     173,   177,   180,   184
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      35,     0,    -1,    36,    31,    -1,    45,    -1,    37,    45,
      -1,    40,    45,    -1,    42,    45,    -1,    37,    40,    45,
      -1,    37,    42,    45,    -1,    40,    42,    45,    -1,    37,
      40,    42,    45,    -1,    38,    29,    -1,     3,    39,    -1,
      38,    30,    39,    -1,    33,    26,    32,    -1,    41,    29,
      -1,     4,    33,    -1,    41,    30,    33,    -1,    43,    29,
      -1,    44,    36,    -1,    43,    29,    42,    -1,     5,    33,
      29,    -1,    46,    -1,    57,    -1,    59,    -1,    58,    -1,
      60,    -1,    62,    -1,    47,    -1,    49,    -1,    33,    18,
      51,    -1,    48,     7,    -1,     6,    45,    -1,    48,    29,
      45,    -1,    -1,    51,    56,    51,    -1,     8,    51,    -1,
      52,    -1,    54,    52,    -1,    51,    54,    52,    -1,    53,
      -1,    52,    55,    53,    -1,    33,    -1,    32,    -1,    27,
      51,    28,    -1,    19,    -1,    20,    -1,    21,    -1,    22,
      -1,    26,    -1,    25,    -1,    23,    -1,    16,    -1,    24,
      -1,    17,    -1,     9,    50,    10,    45,    -1,    11,    33,
      -1,    12,    50,    13,    45,    -1,    61,    28,    -1,    14,
      27,    33,    -1,    61,    30,    33,    -1,    63,    28,    -1,
      15,    27,    51,    -1,    63,    30,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    90,    97,   104,   111,   118,   125,   132,
     139,   149,   159,   166,   176,   190,   200,   207,   217,   227,
     234,   244,   254,   261,   268,   275,   282,   289,   296,   303,
     313,   323,   333,   340,   350,   362,   369,   379,   386,   393,
     403,   410,   420,   427,   438,   449,   456,   466,   473,   483,
     490,   497,   504,   511,   518,   528,   538,   548,   558,   568,
     575,   585,   595,   602
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONST", "VAR", "PROCEDURE", "BEGIN_",
  "END", "ODD", "IF", "THEN", "CALL", "WHILE", "DO", "READ", "WRITE", "LE",
  "GE", "ASSIGN", "PLUS", "MINUS", "MUL", "DIV", "LT", "GT", "NE", "EQ",
  "LEFTBRACKET", "RIGHTBRACKET", "SEMICOLON", "COMMA", "DOT", "INTERGER",
  "ID", "$accept", "program", "block", "cons_des_section", "cons_def_pre",
  "cons_def", "var_des_section", "var_pre", "prog_des_section",
  "prog_des_section_pre", "prog_header", "statements",
  "assignment_statements", "compound_statements", "compound_pre",
  "null_statements", "condition", "expression", "item", "factor",
  "add_sub_op", "mul_div_op", "relational_op", "conditional_statements",
  "procedure_call_statements", "loops_statements", "read_statements",
  "read_pre", "write_statements", "write_pre", 0
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
     285,   286,   287,   288
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    36,    36,    36,    36,    36,    36,    36,
      36,    37,    38,    38,    39,    40,    41,    41,    42,    43,
      43,    44,    45,    45,    45,    45,    45,    45,    45,    45,
      46,    47,    48,    48,    49,    50,    50,    51,    51,    51,
      52,    52,    53,    53,    53,    54,    54,    55,    55,    56,
      56,    56,    56,    56,    56,    57,    58,    59,    60,    61,
      61,    62,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     3,     3,     3,
       4,     2,     2,     3,     3,     2,     2,     3,     2,     2,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     2,     3,     0,     3,     2,     1,     2,     3,
       1,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     2,     4,     2,     3,
       3,     2,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      34,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,    34,     0,    34,     0,    34,
       3,    22,    28,     0,    29,    23,    25,    24,    26,     0,
      27,     0,     0,    12,    16,     0,    32,     0,    45,    46,
       0,    43,    42,     0,     0,    37,    40,     0,    56,     0,
       0,     0,     0,     1,     2,    34,    34,     4,    11,     0,
      34,     5,    15,     0,     6,    18,    19,    31,    34,    58,
       0,    61,     0,     0,    21,    36,     0,    34,    52,    54,
      51,    53,    50,    49,     0,     0,    47,    48,     0,    38,
      34,    59,    62,    30,    34,     7,     8,    13,     9,    17,
      20,    33,    60,    63,    14,    44,    55,    39,    35,    41,
      57,    10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    33,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    43,    44,    45,    46,
      47,    88,    85,    25,    26,    27,    28,    29,    30,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -44
static const yytype_int8 yypact[] =
{
      12,   -30,   -19,    -8,    70,    85,    -5,    85,    10,    14,
       4,    46,    24,    63,    29,    83,    41,    70,    32,    12,
     -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -18,
     -44,     8,    40,   -44,   -44,    51,   -44,    15,   -44,   -44,
      15,   -44,   -44,    73,   103,    78,   -44,    30,   -44,    74,
      58,    15,    15,   -44,   -44,    83,    70,   -44,   -44,   -30,
      70,   -44,   -44,    75,   -44,   101,   -44,   -44,    70,   -44,
      76,   -44,    15,    79,   -44,    82,    11,    70,   -44,   -44,
     -44,   -44,   -44,   -44,    30,    15,   -44,   -44,    30,    78,
      70,   -44,    82,    82,    70,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,    82,   -44,   -44,   -44,    78,    82,   -44,
     -44,   -44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,    88,   -44,   -44,    54,    97,   -44,   -11,   -44,
     -44,    -4,   -44,   -44,   -44,   -44,   107,   -32,   -41,    27,
     -43,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      36,    84,    56,    32,    60,    75,    89,    67,    76,    57,
      69,    61,    70,    64,    34,     1,     2,     3,     4,    92,
      93,     5,    52,     6,     7,    35,     8,     9,    48,    68,
      38,    39,    84,    84,    38,    39,    71,    50,    72,   105,
     103,    51,    40,   107,    94,    10,    53,    41,    42,    84,
      84,    95,    96,   108,   100,    54,    98,    40,    58,    59,
      84,    65,    41,    42,   101,    84,    73,     2,     3,     4,
      62,    63,     5,   106,     6,     7,     4,     8,     9,     5,
      74,     6,     7,    77,     8,     9,   110,    90,     3,     4,
     111,    91,     5,    37,     6,     7,    10,     8,     9,    86,
      87,    38,    39,    10,    38,    39,     3,    66,    99,   102,
      55,   104,    40,    97,    49,   109,    10,    41,    42,    78,
      79,     0,    38,    39,     0,     0,    80,    81,    82,    83
};

static const yytype_int8 yycheck[] =
{
       4,    44,    13,    33,    15,    37,    47,     7,    40,    13,
      28,    15,    30,    17,    33,     3,     4,     5,     6,    51,
      52,     9,    18,    11,    12,    33,    14,    15,    33,    29,
      19,    20,    75,    76,    19,    20,    28,    27,    30,    28,
      72,    27,    27,    84,    55,    33,     0,    32,    33,    92,
      93,    55,    56,    85,    65,    31,    60,    27,    29,    30,
     103,    29,    32,    33,    68,   108,    26,     4,     5,     6,
      29,    30,     9,    77,    11,    12,     6,    14,    15,     9,
      29,    11,    12,    10,    14,    15,    90,    13,     5,     6,
      94,    33,     9,     8,    11,    12,    33,    14,    15,    21,
      22,    19,    20,    33,    19,    20,     5,    19,    33,    33,
      13,    32,    27,    59,     7,    88,    33,    32,    33,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    11,    12,    14,    15,
      33,    35,    36,    37,    38,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    57,    58,    59,    60,    61,
      62,    63,    33,    39,    33,    33,    45,     8,    19,    20,
      27,    32,    33,    50,    51,    52,    53,    54,    33,    50,
      27,    27,    18,     0,    31,    40,    42,    45,    29,    30,
      42,    45,    29,    30,    45,    29,    36,     7,    29,    28,
      30,    28,    30,    26,    29,    51,    51,    10,    16,    17,
      23,    24,    25,    26,    54,    56,    21,    22,    55,    52,
      13,    33,    51,    51,    42,    45,    45,    39,    45,    33,
      42,    45,    33,    51,    32,    28,    45,    52,    51,    53,
      45,    45
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
#line 67 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("program -> block DOT\n");
		}
		(yyval.pnode) = newNode("program");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
		if(errorCount == 0) {
			printf("%d error generated.\n", errorCount);
			if(willPrintTree) {
				printf("-------------------------syntax tree-------------------------------\n");
				printTree((yyval.pnode), 0);
			}
		} else {
			if(errorCount == 1) {
				printf("%d error generated.\n", errorCount);
			} else {
				printf("%d errors generated.\n", errorCount);
			}
            }
	;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 90 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> statements\n");
		}
		(yyval.pnode) = newNode("block");
        insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 97 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> cons_des_section statements\n");
		}
		(yyval.pnode) = newNode("block");
        insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 104 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> var_des_section statements\n");
		}
		(yyval.pnode) = newNode("block");
        insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 111 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> prog_des_section statements\n");
		}
		(yyval.pnode) = newNode("block");
        insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 118 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> cons_des_section var_des_section statements\n");
		}
		(yyval.pnode) = newNode("block");
        insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 125 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> cons_des_section prog_des_section statements\n");
		}
		(yyval.pnode) = newNode("block");
        insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 132 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> var_des_section prog_des_section statements\n");
		}
		(yyval.pnode) = newNode("block");
        insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 139 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> cons_des_section ar_des_section prog_des_section statements\n");
		}
		(yyval.pnode) = newNode("block");
        insertNodes(5, (yyval.pnode), (yyvsp[(1) - (4)].pnode), (yyvsp[(2) - (4)].pnode), (yyvsp[(3) - (4)].pnode), (yyvsp[(4) - (4)].pnode));
	;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 149 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("cons_des_section -> cons_def_pre SEMICOLON\n");
		}
		(yyval.pnode) = newNode("cons_des_section");
        insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 159 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("cons_def_pre -> CONST cons_def\n");
		}
		(yyval.pnode) = newNode("cons_def_pre");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 166 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("cons_def_pre -> cons_def_pre COMMA cons_def\n");
		}
		(yyval.pnode) = newNode("cons_def_pre");
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 176 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("cons_def -> ID EQ INTERGER\n");
		}
		(yyval.pnode) = newNode("cons_def");
		char buf[10];
		sprintf(buf, "%d", (yyvsp[(3) - (3)].integer));
		pNode p = newNode(buf);
		(yyvsp[(1) - (3)].pnode)->value = (yyvsp[(3) - (3)].integer);
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), p);
	;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 190 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("var_des_section -> var_pre SEMICOLON\n");
		}
		(yyval.pnode) = newNode("var_des_section");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 200 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("var_pre -> VAR ID\n");
		}
		(yyval.pnode) = newNode("var_pre");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 207 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("var_pre -> var_pre COMMA ID\n");
		}
		(yyval.pnode) = newNode("var_pre");
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 217 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("prog_des_section -> prog_des_section_pre SEMICOLON\n");
		}
		(yyval.pnode) = newNode("prog_des_section");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 227 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("prog_des_section_pre -> prog_header block\n");
		}
		(yyval.pnode) = newNode("prog_des_section_pre");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 234 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("prog_des_section_pre -> prog_des_section_pre SEMICOLON prog_des_section\n");
		}
		(yyval.pnode) = newNode("prog_des_section_pre");
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 244 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("prog_header -> PROCEDURE ID SEMICOLON\n");
		}
		(yyval.pnode) = newNode("prog_header");
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 254 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> assignment_statements\n");
		}
		(yyval.pnode) = newNode("statements");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 261 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> conditional_statements\n");
		}
		(yyval.pnode) = newNode("statements");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 268 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> loops_statements\n");
		}
		(yyval.pnode) = newNode("statements");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 275 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> procedure_call_statements\n");
		}
		(yyval.pnode) = newNode("statements");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 282 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> read_statements\n");
		}
		(yyval.pnode) = newNode("statements");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 289 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> write_statements\n");
		}
		(yyval.pnode) = newNode("statements");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 296 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> compound_statements\n");
		}
		(yyval.pnode) = newNode("statements");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 303 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> null_statements\n");
		}
		(yyval.pnode) = newNode("statements");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 313 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("assignment_statements -> ID ASSIGN expression\n");
		}
		(yyval.pnode) = newNode("assignment_statements");
        insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 323 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("compound_statements -> statements_pre END\n");
		}
		(yyval.pnode) = newNode("compound_statements");
        insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 333 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("compound_pre -> BEGIN_ statements\n");
		}
		(yyval.pnode) = newNode("compound_pre");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 340 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("compound_pre -> statements_pre SEMICOLON statements\n");
		}
		(yyval.pnode) = newNode("compound_pre");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode));
	;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 350 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("null_statements\n");
		}
		(yyval.pnode) = newNode("null_statements");
		char buf[10] = "NULL";
		pNode p = newNode(buf);
		insertNodes(2, (yyval.pnode), p);
	;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 362 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("condition -> expression relational_op expression\n");
		}
		(yyval.pnode) = newNode("condition");
        insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 369 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("condition -> ODD expression\n");
		}
		(yyval.pnode) = newNode("condition");
        insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 379 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("expression -> item\n");
		}
		(yyval.pnode) = newNode("expression");
        insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 386 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("expression -> add_sub_op item\n");
		}
		(yyval.pnode) = newNode("expression");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 393 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("expression -> expression add_sub_op item\n");
		}
		(yyval.pnode) = newNode("expression");
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 403 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("item -> factor\n");
		}
		(yyval.pnode) = newNode("item");
        insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 410 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("item -> item mul_div_op factor\n");
		}
		(yyval.pnode) = newNode("item");
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 420 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("factor -> ID\n");
		}
		(yyval.pnode) = newNode("factor");
        insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 427 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("factor -> INTERGER\n");
		}
		(yyval.pnode) = newNode("factor");
		char buf[10];
		sprintf(buf, "%d", (yyvsp[(1) - (1)].integer));
		pNode p = newNode(buf);
		(yyval.pnode)->value = (yyvsp[(1) - (1)].integer);
		insertNodes(2, (yyval.pnode), p);
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 438 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("factor -> LEFTBRACKET expression RIGHTBRACKET\n");
		}
		(yyval.pnode) = newNode("factor");
		(yyval.pnode)->value = (yyvsp[(2) - (3)].pnode)->value;
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 449 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("add_sub_op -> PLUS\n");
		}
		(yyval.pnode) = newNode("add_sub_op");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 456 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("add_sub_op -> MINUS\n");
		}
		(yyval.pnode) = newNode("add_sub_op");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 466 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("mul_div_op -> MUL\n");
		}
		(yyval.pnode) = newNode("mul_div_op");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 473 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("mul_div_op -> DIV\n");
		}
		(yyval.pnode) = newNode("mul_div_op");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 483 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> EQ\n");
		}
		(yyval.pnode) = newNode("relational_op");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 490 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> NE\n");
		}
		(yyval.pnode) = newNode("relational_op");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 497 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> LT\n");
		}
		(yyval.pnode) = newNode("relational_op");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 504 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> LE\n");
		}
		(yyval.pnode) = newNode("relational_op");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 511 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> GT\n");
		}
		(yyval.pnode) = newNode("relational_op");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 518 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> GE\n");
		}
		(yyval.pnode) = newNode("relational_op");
		insertNodes(2, (yyval.pnode), (yyvsp[(1) - (1)].pnode));
	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 528 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("conditional_statements -> IF	condition THEN statements\n");
		}
		(yyval.pnode) = newNode("conditional_statements");
		insertNodes(5, (yyval.pnode), (yyvsp[(1) - (4)].pnode), (yyvsp[(2) - (4)].pnode), (yyvsp[(3) - (4)].pnode), (yyvsp[(4) - (4)].pnode));
	;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 538 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("procedure_call_statements -> CALL ID\n");
		}
		(yyval.pnode) = newNode("procedure_call_statements");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 548 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("loops_statements -> WHILE condition DO statements\n");
		}
		(yyval.pnode) = newNode("loops_statements");
		insertNodes(5, (yyval.pnode), (yyvsp[(1) - (4)].pnode), (yyvsp[(2) - (4)].pnode), (yyvsp[(3) - (4)].pnode), (yyvsp[(4) - (4)].pnode));
	;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 558 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("read_statements -> read_pre RIGHTBRACKET\n");
		}
		(yyval.pnode) = newNode("read_statements");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 568 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("read_pre -> READ LEFTBRACKET ID\n");
		}
		(yyval.pnode) = newNode("read_pre");
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 575 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("read_pre -> read_pre COMMA ID\n");
		}
		(yyval.pnode) = newNode("read_pre");
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 585 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("write_statements -> write_pre RIGHTBRACKET\n");
		}
		(yyval.pnode) = newNode("write_statements");
		insertNodes(3, (yyval.pnode), (yyvsp[(1) - (2)].pnode), (yyvsp[(2) - (2)].pnode));
	;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 595 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("write_pre -> WRITE LEFTBRACKET expression\n");
		}
		(yyval.pnode) = newNode("write_pre");
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 602 "b.y"
    {
		if(debug){
			printf("%s\t:\t",yytext);printf("write_pre -> write_pre COMMA expression\n");
		}
		(yyval.pnode) = newNode("write_pre");
		insertNodes(4, (yyval.pnode), (yyvsp[(1) - (3)].pnode), (yyvsp[(2) - (3)].pnode), (yyvsp[(3) - (3)].pnode));
	;}
    break;



/* Line 1455 of yacc.c  */
#line 2304 "b.tab.c"
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
#line 610 "b.y"


void yyerror(char* s){
    fprintf(stderr,"Line%d:%s", yylineno, s);
}
