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
#line 2 "grammar.y" /* yacc.c:339  */

#include "nodo.h"

extern ast * procedimientos[127]; //cambiar esta forma
extern int idx_prc;

extern ast * pila_programas[32];
extern ast * pila_records[32]; // pila de registros
 extern int idx_prg;

 extern int nro_decimales;
 extern long memoria;


#include "stdio.h"
#include "vars.h"
 
#define MSDOS
//char constantes[127][127];
//char variables[127][127];

#line 88 "grammar.tab.c" /* yacc.c:339  */

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
   by #include "grammar.tab.h".  */
#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
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
    GUARDAR = 258,
    PUSH = 259,
    POP = 260,
    FUNCION = 261,
    RETORNAR = 262,
    BUSCAR = 263,
    INSERTAR = 264,
    ELIMINAR = 265,
    USE_INDICE = 266,
    CLOSE_INDICE = 267,
    STOP = 268,
    REGISTRO = 269,
    FINREGISTRO = 270,
    ABRIR = 271,
    CERRAR = 272,
    MOSTRAR = 273,
    VACIAR = 274,
    LLAMAR = 275,
    PROC = 276,
    END = 277,
    PROCNAME = 278,
    GRAFICOS = 279,
    DIM = 280,
    LINEA = 281,
    CIRCULO = 282,
    CONVERTIR = 283,
    EVALUAR = 284,
    EQ = 285,
    TERMINAR = 286,
    DECIMALES = 287,
    VENTANA = 288,
    FIN = 289,
    BOTON = 290,
    MENSAJE = 291,
    ETIQUETA = 292,
    TEXTO = 293,
    NE = 294,
    LT = 295,
    LE = 296,
    GT = 297,
    GE = 298,
    PLUS = 299,
    MINUS = 300,
    MULT = 301,
    DIVIDE = 302,
    RPAREN = 303,
    LPAREN = 304,
    ASSIGN = 305,
    SEMICOLON = 306,
    COMMA = 307,
    IF = 308,
    THEN = 309,
    ELSE = 310,
    FI = 311,
    WHILE = 312,
    FOR = 313,
    TO = 314,
    DO = 315,
    OD = 316,
    PRINT = 317,
    LEER = 318,
    BORRAR = 319,
    NUMBER = 320,
    NAME = 321,
    SNAME = 322,
    PAUSA = 323,
    CONSULTA = 324,
    LITERAL = 325,
    STRING = 326,
    DOBLECOMILLA = 327,
    OR = 328,
    AND = 329,
    CONTINUAR = 330,
    SALIR = 331,
    ACTUALIZAR = 332
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "grammar.y" /* yacc.c:355  */

 ast * nodo;

#line 210 "grammar.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "grammar.tab.c" /* yacc.c:358  */

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
#define YYFINAL  103
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1111

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  306

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    80,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    76,    83,    84,    89,    90,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   160,
     161,   162,   163,   164,   168,   169,   174,   175,   179,   180,
     181,   186,   187,   191,   192,   196,   197,   201,   202,   203,
     204,   208,   209,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   227,   228,   229,   230,   231,   235,
     236,   237,   241,   242,   243,   244,   245,   246,   247,   248,
     252,   255,   258,   262,   273
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "GUARDAR", "PUSH", "POP", "FUNCION",
  "RETORNAR", "BUSCAR", "INSERTAR", "ELIMINAR", "USE_INDICE",
  "CLOSE_INDICE", "STOP", "REGISTRO", "FINREGISTRO", "ABRIR", "CERRAR",
  "MOSTRAR", "VACIAR", "LLAMAR", "PROC", "END", "PROCNAME", "GRAFICOS",
  "DIM", "LINEA", "CIRCULO", "CONVERTIR", "EVALUAR", "EQ", "TERMINAR",
  "DECIMALES", "VENTANA", "FIN", "BOTON", "MENSAJE", "ETIQUETA", "TEXTO",
  "NE", "LT", "LE", "GT", "GE", "PLUS", "MINUS", "MULT", "DIVIDE",
  "RPAREN", "LPAREN", "ASSIGN", "SEMICOLON", "COMMA", "IF", "THEN", "ELSE",
  "FI", "WHILE", "FOR", "TO", "DO", "OD", "PRINT", "LEER", "BORRAR",
  "NUMBER", "NAME", "SNAME", "PAUSA", "CONSULTA", "LITERAL", "STRING",
  "DOBLECOMILLA", "OR", "AND", "CONTINUAR", "SALIR", "ACTUALIZAR", "'['",
  "']'", "'#'", "$accept", "ROOT", "procedimientos", "subprograma",
  "statement", "lista_campos", "lista_parametros", "parametro",
  "lista_argumentos", "variable", "lista_expr", "lista_expr2", "stmtseq",
  "expression", "expr2", "expr3", "expr4", "sdesignator", "designator",
  "proc_designator", "procedimiento", "funcion", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,    91,    93,
      35
};
# endif

#define YYPACT_NINF -145

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-145)))

#define YYTABLE_NINF -123

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1034,   -54,   -14,   -14,   269,    -3,   -31,   -31,   -31,  -145,
    -145,     3,   -31,     3,   -31,   -31,   -12,    11,   -14,   310,
     310,   -14,    25,    40,     3,   218,   269,   269,     3,   218,
       6,    60,  -145,  -145,    14,  -145,  -145,    34,   110,  -145,
     584,   -15,     0,    62,     3,  -145,  -145,  -145,  -145,  -145,
     310,   310,   269,  -145,  -145,     2,    55,  -145,    10,    37,
      69,     3,     3,     3,  -145,  -145,    49,     3,  -145,  -145,
    -145,     3,  -145,  -145,  -145,     3,    58,    59,    47,    84,
       3,   -31,  -145,  -145,    61,  -145,    75,  -145,  -145,    -8,
      80,    10,    83,   105,    75,     3,     3,  -145,  -145,    88,
      95,     3,     3,  -145,    45,  -145,   142,   119,   269,   269,
      81,    92,    93,    86,   269,   258,   -31,  -145,  -145,   102,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,    -5,     4,   269,   258,     3,     3,     3,   -31,
    -145,  -145,     3,  -145,   109,   310,   310,  -145,  -145,   101,
     218,   310,  1034,  1034,   269,    98,   -31,   -31,   -31,     3,
    -145,    11,    11,    45,  -145,  -145,  -145,  -145,  -145,    94,
     124,   -31,    96,  -145,  -145,    11,   114,   310,   104,  -145,
     138,   144,  -145,    10,   145,  -145,   137,   137,   137,   137,
     137,   137,    55,    55,    55,    55,  -145,  -145,  -145,  -145,
    -145,  -145,   127,   155,  -145,  -145,  -145,   190,   150,     3,
     151,   115,   126,  -145,  -145,    16,   509,   659,   148,  -145,
       3,   165,   167,  -145,   171,  1034,  -145,   269,   258,  -145,
     191,   159,   162,   149,   -10,  -145,   258,   310,   152,  -145,
    -145,   -31,  -145,  -145,   310,   310,  -145,  1034,  -145,  -145,
     269,  -145,   -31,   -31,   -14,   734,   153,   180,    13,   168,
    -145,   310,   269,   269,  -145,   221,   269,  -145,   246,   137,
     809,   178,  -145,  -145,   192,   194,  -145,  -145,  -145,  -145,
     169,  -145,   137,  -145,   176,   188,   179,   310,  -145,  1034,
    1034,   -14,   310,   229,  -145,  -145,   137,   884,   959,  -145,
      43,   269,  -145,  -145,  -145,  -145
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   120,    71,     0,    58,    59,     0,     0,    92,
       2,     0,     0,     0,     0,   121,    65,    84,    83,    66,
       0,     0,     0,   115,    25,    93,   104,   109,    26,   116,
       0,     0,     0,     0,    62,    63,     0,     0,    50,    56,
      57,     0,   122,    41,    22,     0,     0,     0,     0,     0,
       0,     0,    47,    27,     0,    88,    40,    85,    87,    89,
       0,     0,     0,     0,    28,     0,     0,    55,    51,     0,
       0,     0,     0,     1,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    35,     0,    15,    13,     0,     0,    45,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,     0,     3,     4,     6,     7,    10,     9,    11,
       0,     0,     0,     8,    36,     0,     0,     0,     0,    79,
       0,    76,    78,    80,    53,   114,    94,    95,    96,    97,
      98,    99,   105,   106,   107,   108,   110,   111,   100,   101,
     102,   103,     0,     0,    69,    60,    61,     0,     0,     0,
       0,     0,     0,    33,    86,     0,     0,     0,     0,    34,
       0,     0,     0,    70,     0,     0,     5,     0,     0,    12,
       0,     0,     0,     0,     0,    24,     0,     0,   117,   119,
      68,    74,    42,    14,     0,     0,    90,     0,    30,    31,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,    77,     0,     0,    75,     0,    44,
       0,     0,    72,    73,     0,    81,   123,    20,    23,    18,
      19,    37,    39,    16,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,    54,   118,    43,     0,     0,    82,
       0,     0,    32,   124,    21,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,  -145,   111,   -26,    27,  -128,  -145,    -9,    91,
     250,   131,  -144,    30,   223,   211,   -33,    -2,   174,   125,
    -145,  -145
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    38,   163,   164,    39,   207,   180,   181,   274,   275,
      86,    87,    40,   182,    55,    56,    57,    41,    59,    60,
     165,   166
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    47,    58,    62,    63,    64,    65,   203,   216,   217,
      67,    61,    69,    70,   105,   106,    76,   117,   118,    80,
     262,    71,   132,    89,    91,    91,    44,    89,    97,   107,
     109,   133,   120,   110,    54,   111,    32,   112,   113,    95,
     132,   121,   122,   123,   124,   125,   126,   127,   101,   133,
      91,   161,    45,    32,    72,    88,    90,    92,    73,    88,
     126,   127,    32,   108,    32,   198,   162,   102,   263,    45,
     151,    32,    45,    32,   200,   128,   129,    72,   114,   148,
      32,   255,   119,   279,    99,   100,    96,   126,   127,   128,
     129,   126,   127,    46,    49,   246,    82,   196,   197,   145,
     257,   130,   131,   270,   169,    83,    91,    91,   264,  -122,
     103,   115,    91,   183,   184,   134,   128,   129,   135,   139,
     128,   129,   304,   143,   144,    43,   149,   150,   126,   127,
     199,   201,    91,   183,   152,   154,   146,   208,   172,   173,
     157,    74,    75,   153,   178,   297,   298,   158,    89,   171,
     185,   174,    91,   177,   220,   221,   222,   128,   129,   126,
     127,   210,   175,   176,   202,    43,   213,   244,   219,   229,
     126,   127,   227,   228,    42,   230,    48,    48,   245,   232,
      88,   126,   127,   234,   218,    66,   235,    68,   128,   129,
     105,   105,    77,   126,   127,    81,   236,   237,    84,   128,
     129,   261,    93,   239,    98,   240,   238,   250,    72,    32,
     128,   129,   167,   168,    42,   241,   243,   252,   116,   253,
     254,   258,   128,   129,   259,    91,   183,   260,   278,   105,
     266,   170,   277,   281,   183,   136,   137,   138,   289,   208,
     290,   140,    78,    79,   105,   141,   291,   292,    91,   142,
     272,   273,    47,   294,   147,   293,   280,   256,   295,   301,
      91,    91,    50,    51,    91,   126,   127,    52,   267,   155,
     156,   105,   105,   285,   226,   159,   160,    43,    43,    94,
     271,   214,   299,    53,    31,    32,   224,   225,    85,    47,
     126,   127,   283,   284,   128,   129,   286,     0,   287,    91,
     231,     0,    50,    51,     0,     0,     0,    52,     0,     0,
     204,   205,   206,    50,    51,     0,   209,     0,    52,   128,
     129,     0,     0,    53,    31,    32,    42,    42,   179,     0,
       0,   305,     0,   223,    53,    31,    32,   192,   193,   194,
     195,    43,    43,   186,   187,   188,   189,   190,   191,     0,
      43,     0,     0,     0,    50,    51,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,   211,   212,
       0,     0,    43,     0,   215,    53,    31,     0,     0,     0,
      43,     0,     0,   242,     0,     0,     0,     0,     0,     0,
      42,    42,     0,     0,   251,    43,     0,     0,     0,    42,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    43,     0,     0,     0,     0,
       0,    42,    43,    43,     0,     0,     0,     0,    48,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     265,     0,     0,    42,    42,    48,     0,   268,   269,     0,
       0,    42,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   282,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     296,     0,     1,     2,     3,   300,     4,     5,     6,     7,
       8,     9,    10,    11,     0,    12,    13,    14,    15,    16,
       0,     0,     0,    17,    18,    19,    20,    21,    22,     0,
       0,    23,    24,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,   247,   248,    27,    28,     0,     0,
       0,    29,    30,     0,     0,    31,    32,    33,    34,     0,
       0,     0,     0,     0,    35,    36,    37,     1,     2,     3,
       0,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      12,    13,    14,    15,    16,     0,     0,     0,    17,    18,
      19,    20,    21,    22,     0,   104,    23,    24,     0,     0,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,    27,    28,     0,     0,     0,    29,    30,     0,     0,
      31,    32,    33,    34,     0,     0,     0,     0,     0,    35,
      36,    37,     1,     2,     3,     0,     4,     5,     6,     7,
       8,     9,    10,    11,     0,    12,    13,    14,    15,    16,
       0,     0,     0,    17,    18,    19,    20,    21,    22,     0,
       0,    23,    24,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,    27,    28,     0,     0,
     249,    29,    30,     0,     0,    31,    32,    33,    34,     0,
       0,     0,     0,     0,    35,    36,    37,     1,     2,     3,
       0,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      12,    13,    14,    15,    16,     0,   276,     0,    17,    18,
      19,    20,    21,    22,     0,     0,    23,    24,     0,     0,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,    27,    28,     0,     0,     0,    29,    30,     0,     0,
      31,    32,    33,    34,     0,     0,     0,     0,     0,    35,
      36,    37,     1,     2,     3,     0,     4,     5,     6,     7,
       8,     9,    10,    11,     0,    12,    13,    14,    15,    16,
       0,     0,     0,    17,    18,    19,    20,    21,    22,     0,
       0,    23,    24,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,   288,    27,    28,     0,     0,
       0,    29,    30,     0,     0,    31,    32,    33,    34,     0,
       0,     0,     0,     0,    35,    36,    37,     1,     2,     3,
       0,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      12,    13,    14,    15,    16,     0,     0,     0,    17,    18,
      19,    20,    21,    22,     0,     0,    23,    24,     0,     0,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,    27,    28,     0,     0,   302,    29,    30,     0,     0,
      31,    32,    33,    34,     0,     0,     0,     0,     0,    35,
      36,    37,     1,     2,     3,     0,     4,     5,     6,     7,
       8,     9,    10,    11,     0,    12,    13,    14,    15,    16,
       0,   303,     0,    17,    18,    19,    20,    21,    22,     0,
       0,    23,    24,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,    27,    28,     0,     0,
       0,    29,    30,     0,     0,    31,    32,    33,    34,     0,
       0,     0,     0,     0,    35,    36,    37,     1,     2,     3,
       0,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      12,    13,    14,    15,    16,     0,     0,     0,    17,    18,
      19,    20,    21,    22,     0,     0,    23,    24,     0,     0,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,    27,    28,     0,     0,     0,    29,    30,     0,     0,
      31,    32,    33,    34,     0,     0,     0,     0,     0,    35,
      36,    37
};

static const yytype_int16 yycheck[] =
{
       2,     3,     4,     5,     6,     7,     8,   135,   152,   153,
      12,    14,    14,    15,    40,    30,    18,    50,    51,    21,
      30,    33,    30,    25,    26,    27,    80,    29,    30,    44,
      30,    39,    30,    33,     4,    35,    67,    37,    38,    33,
      30,    39,    40,    41,    42,    43,    44,    45,    14,    39,
      52,     6,    66,    67,    66,    25,    26,    27,    70,    29,
      44,    45,    67,    78,    67,    70,    21,    33,    78,    66,
      78,    67,    66,    67,    70,    73,    74,    66,    78,    81,
      67,   225,    52,    70,    70,    71,    80,    44,    45,    73,
      74,    44,    45,     2,     3,    79,    71,   130,   131,    52,
     228,    46,    47,   247,   106,    65,   108,   109,   236,    49,
       0,    49,   114,   115,   116,    78,    73,    74,    49,    70,
      73,    74,    79,    65,    65,     0,    65,    52,    44,    45,
     132,   133,   134,   135,    54,    30,    52,   139,   108,   109,
      52,    16,    17,    60,   114,   289,   290,    52,   150,    30,
      48,    70,   154,    67,   156,   157,   158,    73,    74,    44,
      45,    52,    70,    70,   134,    40,    65,    52,    70,   171,
      44,    45,    78,    49,     0,    79,     2,     3,    52,    65,
     150,    44,    45,    79,   154,    11,    48,    13,    73,    74,
     216,   217,    18,    44,    45,    21,    52,    52,    24,    73,
      74,    52,    28,    48,    30,    15,    79,    59,    66,    67,
      73,    74,    70,    71,    40,    65,    65,    52,    44,    52,
      49,    30,    73,    74,    65,   227,   228,    65,    48,   255,
      78,   106,    79,    65,   236,    61,    62,    63,    60,   241,
      48,    67,    19,    20,   270,    71,    52,    78,   250,    75,
     252,   253,   254,    65,    80,    79,   258,   227,    79,    30,
     262,   263,    44,    45,   266,    44,    45,    49,   241,    95,
      96,   297,   298,    52,   163,   101,   102,   152,   153,    29,
     250,   150,   291,    65,    66,    67,   161,   162,    70,   291,
      44,    45,   262,   263,    73,    74,   266,    -1,    52,   301,
     175,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
     136,   137,   138,    44,    45,    -1,   142,    -1,    49,    73,
      74,    -1,    -1,    65,    66,    67,   152,   153,    70,    -1,
      -1,   301,    -1,   159,    65,    66,    67,   126,   127,   128,
     129,   216,   217,   120,   121,   122,   123,   124,   125,    -1,
     225,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
      -1,    -1,   247,    -1,   151,    65,    66,    -1,    -1,    -1,
     255,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
     216,   217,    -1,    -1,   220,   270,    -1,    -1,    -1,   225,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   289,   290,    -1,    -1,    -1,    -1,
      -1,   247,   297,   298,    -1,    -1,    -1,    -1,   254,   255,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     237,    -1,    -1,   289,   290,   291,    -1,   244,   245,    -1,
      -1,   297,   298,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     287,    -1,     3,     4,     5,   292,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    58,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      61,    62,    63,    -1,    -1,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    -1,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      -1,    22,    -1,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    11,    12,
      13,    14,    16,    17,    18,    19,    20,    24,    25,    26,
      27,    28,    29,    32,    33,    36,    53,    57,    58,    62,
      63,    66,    67,    68,    69,    75,    76,    77,    82,    85,
      93,    98,    99,   100,    80,    66,    90,    98,    99,    90,
      44,    45,    49,    65,    94,    95,    96,    97,    98,    99,
     100,    14,    98,    98,    98,    98,    99,    98,    99,    98,
      98,    33,    66,    70,   100,   100,    98,    99,    95,    95,
      98,    99,    71,    65,    99,    70,    91,    92,    94,    98,
      94,    98,    94,    99,    91,    33,    80,    98,    99,    70,
      71,    14,    33,     0,    31,    85,    30,    44,    78,    30,
      33,    35,    37,    38,    78,    49,    99,    97,    97,    94,
      30,    39,    40,    41,    42,    43,    44,    45,    73,    74,
      46,    47,    30,    39,    78,    49,    99,    99,    99,    70,
      99,    99,    99,    65,    65,    52,    52,    99,    98,    65,
      52,    78,    54,    60,    30,    99,    99,    52,    52,    99,
      99,     6,    21,    83,    84,   101,   102,    70,    71,    98,
     100,    30,    94,    94,    70,    70,    70,    67,    94,    70,
      87,    88,    94,    98,    98,    48,    95,    95,    95,    95,
      95,    95,    96,    96,    96,    96,    97,    97,    70,    98,
      70,    98,    94,    87,    99,    99,    99,    86,    98,    99,
      52,    95,    95,    65,    92,    95,    93,    93,    94,    70,
      98,    98,    98,    99,   100,   100,    84,    78,    49,    98,
      79,   100,    65,    95,    79,    48,    52,    52,    79,    48,
      15,    65,    99,    65,    52,    52,    79,    55,    56,    61,
      59,    99,    52,    52,    49,    93,    94,    87,    30,    65,
      65,    52,    30,    78,    87,    95,    78,    86,    95,    95,
      93,    94,    98,    98,    89,    90,    22,    79,    48,    70,
      98,    65,    95,    94,    94,    52,    94,    52,    56,    60,
      48,    52,    78,    79,    65,    79,    95,    93,    93,    89,
      95,    30,    61,    22,    79,    94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    86,    87,    87,    88,    88,
      88,    89,    89,    90,    90,    91,    91,    92,    92,    92,
      92,    93,    93,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    95,    96,
      96,    96,    97,    97,    97,    97,    97,    97,    97,    97,
      98,    99,   100,   101,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     1,     3,     3,
       3,     3,     4,     3,     5,     3,     6,     9,     6,     6,
       6,     9,     2,     6,     4,     2,     2,     2,     2,     7,
       5,     5,     9,     4,     4,     3,     3,     6,     5,     6,
       2,     2,     5,     8,     6,     3,     3,     2,     1,     3,
       2,     2,     5,     4,     8,     2,     2,     2,     1,     1,
       4,     4,     2,     2,     1,     2,     2,     3,     5,     4,
       4,     1,     6,     6,     2,     3,     1,     3,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       4,     2,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     2,     2,     3,     1,     1,     4,     7,     4,
       1,     1,     1,     4,     7
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
#line 73 "grammar.y" /* yacc.c:1646  */
    {  pila_programas[idx_prg] = ((yyvsp[0].nodo)); /* stmtseq */ ;  idx_prg++ ; 
if (depurar)
  	printf("se ha reducido el programa por la primera  grammar.y\n"); }
#line 1676 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "grammar.y" /* yacc.c:1646  */
    {
if (depurar)
  	printf("se ha reducido el programa por la segunda regla de grammar.y\n");
 	pila_programas[idx_prg] = ((yyvsp[-2].nodo)); /* stmtseq */ ;  idx_prg++; }
#line 1685 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 83 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) =  (yyvsp[0].nodo)  ;  /* un procedimiento  */ }
#line 1691 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 84 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) =  (yyvsp[0].nodo) ; /*varios procedim.*/ }
#line 1697 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 89 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) =  (yyvsp[0].nodo)  ;  /* un procedimiento  */ }
#line 1703 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 90 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) =  (yyvsp[0].nodo)  ;  /* una funcion  */ }
#line 1709 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 95 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(asigna_num, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asignacion*/}
#line 1715 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 96 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(asigna_alfa, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /* asigna string a varalfa */}
#line 1721 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 97 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(asigna_alfa, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asign literal*/}
#line 1727 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 98 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(asigna_alfa_var, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*asign literal*/}
#line 1733 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 99 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(sumar_alfa, (yyvsp[-3].nodo), (yyvsp[0].nodo)); /*suma alfa*/}
#line 1739 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 100 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(dimensionar, (yyvsp[-1].nodo), (yyvsp[0].nodo)); /*dimensionar un vector entero */ }
#line 1745 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 101 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(dimensionar, (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*dimensionar un vector entero */ }
#line 1751 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 102 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(dimensionar_alfa, (yyvsp[-1].nodo), (yyvsp[0].nodo)); /*dimensionar un vector strings */ }
#line 1757 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 103 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(asigna_vector, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
#line 1763 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 104 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo4(asigna_vector, (yyvsp[-8].nodo), (yyvsp[-6].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
#line 1769 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 105 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(asigna_vector_alfa, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
#line 1775 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 106 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(asigna_vector_alfa2, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo) );  }
#line 1781 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 107 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(asigna_vector_alfa3, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo) );  }
#line 1787 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 108 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo4(asigna_vector_alfa4, (yyvsp[-8].nodo), (yyvsp[-6].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo) );  }
#line 1793 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 109 "grammar.y" /* yacc.c:1646  */
    {  (yyval.nodo) = nodo1(llamar, (yyvsp[0].nodo)) ;/*llamar proced.*/}
#line 1799 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 110 "grammar.y" /* yacc.c:1646  */
    {  (yyval.nodo) = nodo3(llamar, (yyvsp[-3].nodo), (yyvsp[-1].nodo), (yyvsp[-5].nodo)) ;/*llamar proced.*/}
#line 1805 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 111 "grammar.y" /* yacc.c:1646  */
    {  (yyval.nodo) = nodo2(llamar, (yyvsp[-3].nodo), (yyvsp[-1].nodo)) ;/*llamar proced.*/}
#line 1811 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 112 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1( retorno, (yyvsp[0].nodo));    }
#line 1817 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 113 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1( retorno, (yyvsp[0].nodo));    }
#line 1823 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 114 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(decimales, (yyvsp[0].nodo) ) ; }
#line 1829 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 115 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(imprimir_varios,  (yyvsp[0].nodo)); /*imprimir lista expr*/}
#line 1835 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 116 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(si, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*if con else */}
#line 1841 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 117 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(si, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*if sin else*/}
#line 1847 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 118 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(mientras, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*while*/}
#line 1853 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 119 "grammar.y" /* yacc.c:1646  */
    {(yyval.nodo) = nodo4(desde, (yyvsp[-7].nodo), (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /*for*/}
#line 1859 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 120 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(crear_ventana, (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
#line 1865 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 121 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(mostrar_ventana, (yyvsp[-1].nodo)) ;  }
#line 1871 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 122 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(mostrar_ventanas, (yyvsp[0].nodo)) ;  }
#line 1877 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 123 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2(cambiar_titulo, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ;  }
#line 1883 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 124 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo5(guardar_boton, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
#line 1889 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 125 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo4(guardar_etiqueta, (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)) ;  }
#line 1895 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 126 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo4(guardar_texto, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ;  }
#line 1901 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 127 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(mensaje,  (yyvsp[0].nodo)); /*imprimir lista expr*/}
#line 1907 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 128 "grammar.y" /* yacc.c:1646  */
    {   (yyval.nodo) = nodo1(interpreta, (yyvsp[0].nodo));  }
#line 1913 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 129 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo4(graficos, (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo));   }
#line 1919 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 130 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo4(dibuja_linea, (yyvsp[-6].nodo), (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; }
#line 1925 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 131 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(dibuja_circulo, (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; }
#line 1931 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 132 "grammar.y" /* yacc.c:1646  */
    {(yyval.nodo)=nodo2(convertir_texto_a_numero, (yyvsp[-1].nodo), (yyvsp[0].nodo));}
#line 1937 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 133 "grammar.y" /* yacc.c:1646  */
    {(yyval.nodo)=nodo2(convertir_numero_a_texto, (yyvsp[-1].nodo), (yyvsp[0].nodo));}
#line 1943 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 134 "grammar.y" /* yacc.c:1646  */
    {  (yyval.nodo) = nodo1(interpreta, (yyvsp[0].nodo) );  }
#line 1949 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 135 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo0(stop, (yyvsp[0].nodo)); }
#line 1955 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 136 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2(abrir, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 1961 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 137 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(cerrar, (yyvsp[0].nodo)); }
#line 1967 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 138 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(leer,  (yyvsp[0].nodo)) ; /*leer variable numerica*/}
#line 1973 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 139 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo3(leer_archivo, (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 1979 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 140 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2(escribir_archivo, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 1985 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 141 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo4(escribir_archivo, (yyvsp[-5].nodo), (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 1991 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 142 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(leertexto,  (yyvsp[0].nodo)) ; /*leer variable alfa*/}
#line 1997 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 143 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(mostrar, (yyvsp[0].nodo)); }
#line 2003 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 144 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(vaciar, (yyvsp[0].nodo)); }
#line 2009 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 145 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo0(continuar, (yyvsp[0].nodo)); }
#line 2015 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 146 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo0(salir, (yyvsp[0].nodo)); }
#line 2021 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(buscar_clave,  (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2027 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 148 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(insertar_clave,  (yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2033 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 149 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(eliminar_clave,  (yyvsp[0].nodo)); }
#line 2039 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 150 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(use_indice, (yyvsp[0].nodo)); }
#line 2045 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 151 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo0(close_indice, (yyvsp[0].nodo)); }
#line 2051 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 152 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(push,  (yyvsp[0].nodo)); }
#line 2057 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 153 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(pop ,  (yyvsp[0].nodo)); }
#line 2063 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 154 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(actualizar, (yyvsp[0].nodo)); }
#line 2069 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 155 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(definir_registro, (yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo));
                        pila_records[idx_rec] = (yyval.nodo)   ; 
			array_variables[(int) (yyvsp[-3].nodo)->num].procedimiento = idx_rec  ;
			idx_rec++;
 }
#line 2079 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 160 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2(buscar_registro, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2085 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 161 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2(actualizar_registro, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2091 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 162 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo0(pausa, (yyvsp[0].nodo)); }
#line 2097 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 163 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(consulta, (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2103 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 164 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(consulta, (yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2109 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 168 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(listacampos, (yyvsp[-1].nodo), (yyvsp[0].nodo)); }
#line 2115 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 169 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(listacampos, (yyvsp[0].nodo), (yyvsp[-2].nodo), (yyvsp[-1].nodo)); }
#line 2121 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 174 "grammar.y" /* yacc.c:1646  */
    {(yyval.nodo) = nodo1(lista_parametros, (yyvsp[0].nodo));}
#line 2127 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 175 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2(lista_parametros, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2133 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 179 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=(yyvsp[0].nodo); }
#line 2139 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 180 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=(yyvsp[0].nodo); }
#line 2145 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 181 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=(yyvsp[0].nodo); }
#line 2151 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 186 "grammar.y" /* yacc.c:1646  */
    {(yyval.nodo) = nodo1(lista_argumentos, (yyvsp[0].nodo));}
#line 2157 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 187 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(lista_argumentos, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 2163 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 191 "grammar.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2169 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 192 "grammar.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2175 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 196 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=(yyvsp[0].nodo) ; /*lista expr*/ }
#line 2181 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 197 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2 (secuencia, (yyvsp[-2].nodo), (yyvsp[0].nodo))  ; /*varias lista expr, separadas por coma*/ }
#line 2187 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 201 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(imprimir_expresion, (yyvsp[0].nodo)); /*lista expresion2*/}
#line 2193 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 202 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(imprimir_literal, (yyvsp[0].nodo) ); /* un literal*/}
#line 2199 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 203 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo1(imprimir_var_alfa, (yyvsp[0].nodo)); /* una variable literal*/}
#line 2205 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 204 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo)=nodo2(imprimir_var_vectoralfa, (yyvsp[-3].nodo), (yyvsp[-1].nodo)); /* una variable literal*/}
#line 2211 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 208 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(secuencia, (yyvsp[-1].nodo), (yyvsp[0].nodo)); /*una seq de comandos*/}
#line 2217 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 209 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /*un comando*/}
#line 2223 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 213 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /* expresion2*/}
#line 2229 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 214 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(igualque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*igualdad*/}
#line 2235 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 215 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(noigualque,    (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*no igual*/}
#line 2241 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 216 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(menorque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*menor que*/}
#line 2247 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 217 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(menorigualque, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*menor o igual que*/}
#line 2253 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 218 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(mayorque,      (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*mayor que*/}
#line 2259 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 219 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(mayorigualque, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*mayor o igual que*/}
#line 2265 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 220 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
#line 2271 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 221 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(comparaliteral, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
#line 2277 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 222 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(comparaliteral2, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
#line 2283 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 223 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(comparaliteral2, (yyvsp[-2].nodo), (yyvsp[0].nodo)) ; /*asigna literal*/}
#line 2289 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 227 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /* expr2*/}
#line 2295 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 228 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(suma, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*suma*/}
#line 2301 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 229 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(resta, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*resta*/}
#line 2307 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 230 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(or, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*or*/}
#line 2313 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 231 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(and, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*and*/}
#line 2319 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 235 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2325 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 236 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(multiplica, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*multiplicar*/}
#line 2331 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 237 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2 (divide, (yyvsp[-2].nodo), (yyvsp[0].nodo)); /*dividir*/}
#line 2337 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 241 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /*positivo*/}
#line 2343 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 242 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo1(negativo, (yyvsp[0].nodo)); /*negativo*/}
#line 2349 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 243 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo); /*expr enter parentesis*/}
#line 2355 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 244 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) =  (yyvsp[0].nodo); /*numero*/}
#line 2361 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 245 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /*designador variable*/}
#line 2367 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 246 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo2(evalua_vector, (yyvsp[-3].nodo), (yyvsp[-1].nodo));   }
#line 2373 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 247 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = nodo3(evalua_vector, (yyvsp[-6].nodo), (yyvsp[-4].nodo), (yyvsp[-1].nodo));   }
#line 2379 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 248 "grammar.y" /* yacc.c:1646  */
    {  (yyval.nodo) = nodo2(llamar, (yyvsp[-3].nodo), (yyvsp[-1].nodo)) ;/*llamar proced.*/}
#line 2385 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 252 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); /*designador string*/}
#line 2391 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 255 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo);  /* nombre designador */ }
#line 2397 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 258 "grammar.y" /* yacc.c:1646  */
    { (yyval.nodo) =  (yyvsp[0].nodo) ;  /*designador proced.*/ }
#line 2403 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 262 "grammar.y" /* yacc.c:1646  */
    { 
			(yyval.nodo) = nodo2(procedimiento, (yyvsp[-2].nodo), (yyvsp[-1].nodo)) ;/*un procedimiento*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = (yyval.nodo)   ;   /* revisar este metodo */	
			array_variables[(int) (yyvsp[-2].nodo)->num].procedimiento = idx_prc  ;
                        array_variables[(int) (yyvsp[-2].nodo)->num].tipo = 'P'  ;
                        printf("P: %s\n", array_variables[(int) (yyvsp[-2].nodo)->num].nombre);
			idx_prc++;
			}
#line 2417 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 273 "grammar.y" /* yacc.c:1646  */
    { 
			(yyval.nodo) = nodo3(funcion, (yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo)) ;/*una funcion*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = (yyval.nodo)   ;   /* revisar este metodo */	
			array_variables[(int) (yyvsp[-5].nodo)->num].procedimiento = idx_prc  ;
                        array_variables[(int) (yyvsp[-5].nodo)->num].tipo = 'F'  ;
                        printf("F: %s\n", array_variables[(int) (yyvsp[-5].nodo)->num].nombre);
			idx_prc++;
			}
#line 2431 "grammar.tab.c" /* yacc.c:1646  */
    break;


#line 2435 "grammar.tab.c" /* yacc.c:1646  */
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
#line 283 "grammar.y" /* yacc.c:1906  */



