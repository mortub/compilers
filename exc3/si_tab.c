
/*  A Bison parser, made from si.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	REAL	258
#define	INT	259
#define	REALOP	260
#define	LOGOP	261
#define	ADDOP	262
#define	MULOP	263
#define	LEX_ERROR	264
#define	INT_NUMBER	265
#define	FLOAT_NUMBER	266
#define	NUM	267
#define	ID	268
#define	WS	269
#define	RES	270
#define	START	271
#define	DO	272
#define	ELSE	273
#define	IF	274
#define	ENDI	275
#define	PUT	276
#define	PROG	277
#define	GET	278
#define	THEN	279
#define	VAR	280
#define	LOOP	281
#define	ENDL	282
#define	UNTIL	283
#define	ENDP	284
#define	PointSep	285
#define	SemicolonSep	286
#define	ColonSep	287
#define	CommaSep	288
#define	OpenbracketSep	289
#define	ClosebracketSep	290
#define	ASSIGNOP	291
#define	NEG	292

#line 1 "si.y"



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0
#define INT_ID 2
#define REAL_ID 3

extern int nline;
extern FILE* yyout;



void yyerror(const char* s);
int yylex();

int createOutputFiles(char *file_name);
void addId(char * name,int type);
void get(char *name);
void assignValue(char* name,void* value);
void * calculateIntExpretion(void* a,char * func,void* b, int type_a, int type_b);
void * calculateRealExpretion(void* a,char * func,void* b, int type_a, int type_b);
int getType(char * name);
void printValue(int type,void *val);
int EvalBool(void * ex1,void * ex2,char* type);
void  *getValue(char * name);


typedef struct {
    void *val;
    int type;
    char* name;
        }variable;


typedef struct Node{
	variable val;
	char id[20];
	struct Node * next;
}Node;


struct Node * idList = NULL; 


FILE *parseFile,*yyin;
int errorFlag = FALSE;
int error = 0;


#line 57 "si.y"
typedef union{ 
    struct{
        void *val;
       int type;
       char* name;
        }variable;
   int i;
   double d;
   char * tok;
} YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		102
#define	YYFLAG		-32768
#define	YYNTBASE	45

#define YYTRANSLATE(x) ((unsigned)(x) <= 292 ? yytranslate[x] : 56)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
    44,    39,    38,     2,    37,     2,    40,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,    42,     2,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    41
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     9,    18,    27,    36,    45,    54,    63,    72,    76,
    78,    80,    86,    90,    94,    95,    99,   102,   105,   113,
   119,   125,   131,   135,   137,   139,   143,   145,   147,   151,
   153,   155,   157,   159
};

static const short yyrhs[] = {    22,
    13,    31,    46,    16,    49,    29,    30,     0,    22,    13,
    31,    46,    16,    49,    29,     9,     0,    22,    13,    31,
    46,    16,     9,    29,    30,     0,    22,    13,    31,    46,
     9,    49,    29,    30,     0,    22,    13,    31,     9,    16,
    49,    29,    30,     0,    22,    13,     9,    46,    16,    49,
    29,    30,     0,    22,     9,    31,    46,    16,    49,    29,
    30,     0,     9,    13,    31,    46,    16,    49,    29,    30,
     0,    25,    48,    31,     0,     4,     0,     3,     0,    48,
    33,    13,    32,    47,     0,    13,    32,    47,     0,    49,
    50,    31,     0,     0,    13,    36,    53,     0,    21,    53,
     0,    23,    13,     0,    19,    51,    24,    49,    18,    49,
    20,     0,    19,    51,    24,    49,    20,     0,    26,    51,
    17,    49,    27,     0,    17,    49,    28,    51,    27,     0,
    53,    52,    53,     0,     5,     0,     6,     0,    53,     7,
    54,     0,    54,     0,     9,     0,    54,     8,    55,     0,
    55,     0,    13,     0,    10,     0,    11,     0,    43,    53,
    44,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    87,    88,    89,    90,    91,    92,    93,    94,    96,    98,
    99,   101,   102,   105,   106,   108,   109,   110,   111,   112,
   113,   114,   116,   118,   119,   121,   123,   124,   126,   129,
   131,   132,   133,   134
};

static const char * const yytname[] = {   "$","error","$undefined.","REAL","INT",
"REALOP","LOGOP","ADDOP","MULOP","LEX_ERROR","INT_NUMBER","FLOAT_NUMBER","NUM",
"ID","WS","RES","START","DO","ELSE","IF","ENDI","PUT","PROG","GET","THEN","VAR",
"LOOP","ENDL","UNTIL","ENDP","PointSep","SemicolonSep","ColonSep","CommaSep",
"OpenbracketSep","ClosebracketSep","ASSIGNOP","'-'","'+'","'*'","'/'","NEG",
"'^'","'('","')'","Program","Declarations","Type","DeclList","StmtList","Statement",
"BoolExp","case","Expression","Term","Factor",""
};
#endif

static const short yyr1[] = {     0,
    45,    45,    45,    45,    45,    45,    45,    45,    46,    47,
    47,    48,    48,    49,    49,    50,    50,    50,    50,    50,
    50,    50,    51,    52,    52,    53,    53,    53,    54,    54,
    55,    55,    55,    55
};

static const short yyr2[] = {     0,
     8,     8,     8,     8,     8,     8,     8,     8,     3,     1,
     1,     5,     3,     3,     0,     3,     2,     2,     7,     5,
     5,     5,     3,     1,     1,     3,     1,     1,     3,     1,
     1,     1,     1,     3
};

static const short yydefact[] = {     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    15,    15,    15,
    15,    15,    15,     0,     9,     0,     0,     0,     0,     0,
     0,     0,     0,    11,    10,    13,     0,     0,    15,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    28,    32,    33,    31,     0,     0,
     0,    27,    30,    17,    18,     0,     8,    14,     7,     6,
     5,     4,     3,     2,     1,    12,    16,     0,     0,    15,
    24,    25,     0,     0,     0,    15,     0,    34,     0,    26,
    23,    29,     0,    22,    15,    20,    21,     0,    19,     0,
     0,     0
};

static const short yydefgoto[] = {   100,
    11,    36,    17,    27,    45,    60,    84,    61,    62,    63
};

static const short yypact[] = {    12,
     6,    20,   -13,    -4,     5,    14,    14,    14,    16,    29,
    42,    50,    72,    75,    15,    17,    53,-32768,-32768,-32768,
-32768,-32768,    73,   132,-32768,    80,     9,    33,    34,    51,
    52,    68,    66,-32768,-32768,-32768,    67,    65,-32768,     2,
     2,    91,     2,    79,    76,    81,    84,    92,    95,    97,
     7,   132,     2,    77,-32768,-32768,-32768,-32768,     2,   105,
   133,   125,-32768,   137,-32768,   128,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   137,     2,    -1,-32768,
-32768,-32768,    -3,     2,    -3,-32768,   119,-32768,   100,   125,
   137,-32768,    89,-32768,-32768,-32768,-32768,   111,-32768,   147,
   148,-32768
};

static const short yypgoto[] = {-32768,
   134,    98,-32768,   -19,-32768,   -34,-32768,   -36,    69,    64
};


#define	YYLAST		152


static const short yytable[] = {    28,
    29,    30,    31,    33,    64,    83,    56,    57,    66,    58,
    55,    56,    57,     8,    58,    74,    77,     6,     3,    54,
     1,    38,    79,    22,    14,    39,     7,    40,     4,    41,
    23,    42,     5,     2,    43,     9,    75,    44,    10,    59,
    10,    16,    88,    87,    59,    38,    38,    91,    24,    39,
    39,    40,    40,    41,    41,    42,    42,    18,    43,    43,
    89,    46,    47,    38,    38,    19,    93,    39,    39,    40,
    40,    41,    41,    42,    42,    98,    43,    43,    38,    48,
    49,    32,    39,    25,    40,    26,    41,    20,    42,    38,
    21,    43,    37,    39,    51,    40,    50,    41,    52,    42,
    53,    38,    43,    65,    78,    39,    68,    40,    67,    41,
    69,    42,    38,    70,    43,    97,    39,    95,    40,    96,
    41,    71,    42,    38,    72,    43,    73,    39,    80,    40,
    99,    41,    85,    42,    34,    35,    43,    81,    82,    83,
    12,    13,    15,    83,    86,    94,   101,   102,    92,    76,
     0,    90
};

static const short yycheck[] = {    19,
    20,    21,    22,    23,    41,     7,    10,    11,    43,    13,
     9,    10,    11,     9,    13,     9,    53,    31,    13,    39,
     9,    13,    59,     9,     9,    17,    31,    19,     9,    21,
    16,    23,    13,    22,    26,    31,    30,    29,    25,    43,
    25,    13,    44,    78,    43,    13,    13,    84,    32,    17,
    17,    19,    19,    21,    21,    23,    23,    16,    26,    26,
    80,    29,    29,    13,    13,    16,    86,    17,    17,    19,
    19,    21,    21,    23,    23,    95,    26,    26,    13,    29,
    29,     9,    17,    31,    19,    33,    21,    16,    23,    13,
    16,    26,    13,    17,    29,    19,    29,    21,    32,    23,
    36,    13,    26,    13,    28,    17,    31,    19,    30,    21,
    30,    23,    13,    30,    26,    27,    17,    18,    19,    20,
    21,    30,    23,    13,    30,    26,    30,    17,    24,    19,
    20,    21,     8,    23,     3,     4,    26,     5,     6,     7,
     7,     8,     9,     7,    17,    27,     0,     0,    85,    52,
    -1,    83
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 87 "si.y"
{ fprintf (parseFile,"Program –> prog id ; Declarations start StmtList endp.\n");;
    break;}
case 2:
#line 88 "si.y"
{errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");;
    break;}
case 3:
#line 89 "si.y"
{errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");;
    break;}
case 4:
#line 90 "si.y"
{errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");;
    break;}
case 5:
#line 91 "si.y"
{errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");;
    break;}
case 6:
#line 92 "si.y"
{errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");;
    break;}
case 7:
#line 93 "si.y"
{errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");;
    break;}
case 8:
#line 94 "si.y"
{errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");;
    break;}
case 9:
#line 96 "si.y"
{ fprintf (parseFile,"Declarations -> var DeclList ;\n");;
    break;}
case 10:
#line 98 "si.y"
{ fprintf (parseFile,"Type -> int\n");yyval.i=INT_ID;;
    break;}
case 11:
#line 99 "si.y"
{ fprintf (parseFile,"Type -> real\n");yyval.i=REAL_ID;;
    break;}
case 12:
#line 101 "si.y"
{ fprintf (parseFile,"DeclList -> DeclList , id : Type ;\n");addId(yyvsp[-2].variable.name,yyvsp[0].i);;
    break;}
case 13:
#line 102 "si.y"
{ fprintf (parseFile,"DeclList -> id : Type ;\n");addId(yyvsp[-2].variable.name,yyvsp[0].i);;
    break;}
case 14:
#line 105 "si.y"
{ fprintf (parseFile,"StmtList -> StmtList  Statement ;\n");;
    break;}
case 16:
#line 108 "si.y"
{ fprintf (parseFile,"Statement -> id <= Expression ;\n");assignValue(yyvsp[-2].variable.name,yyvsp[0].variable.val);;
    break;}
case 17:
#line 109 "si.y"
{ fprintf (parseFile,"Statement -> put Expression ;\n");printValue(yyvsp[0].variable.type,yyvsp[0].variable.val);;
    break;}
case 18:
#line 110 "si.y"
{ fprintf (parseFile,"Statement ->  get id ;\n");get(yyvsp[0].variable.name);;
    break;}
case 19:
#line 111 "si.y"
{ fprintf (parseFile,"Statement ->  if BoolExp then StmtList else StmtList endi\n");;
    break;}
case 20:
#line 112 "si.y"
{ fprintf (parseFile,"Statement ->  IF BoolExp THEN StmtList  ENDI\n");;
    break;}
case 21:
#line 113 "si.y"
{ fprintf (parseFile,"Statement ->  LOOP BoolExp DO StmtList ENDL\n");;
    break;}
case 22:
#line 114 "si.y"
{ fprintf (parseFile,"Statement ->  DO StmtList UNTIL BoolExp ENDL\n");;
    break;}
case 23:
#line 116 "si.y"
{ fprintf (parseFile,"BoolExp ->  Expression case Expression\n");yyval.i=EvalBool(yyvsp[-2].variable.val,yyvsp[0].variable.val,yyvsp[-1].tok);;
    break;}
case 24:
#line 118 "si.y"
{ fprintf (parseFile,"case ->  REALOP\n");yyval.tok=yyvsp[0].tok;;
    break;}
case 25:
#line 119 "si.y"
{ fprintf (parseFile,"case ->  LOGOP\n");yyval.tok=yyvsp[0].tok;;
    break;}
case 26:
#line 121 "si.y"
{ fprintf (parseFile,"Expression ->  Expression ADDOP Term\n");
if((yyvsp[-2].variable.type==INT_ID)||(yyvsp[0].variable.type==INT_ID)){yyval.variable.type=INT_ID;yyval.variable.val = calculateIntExpretion(yyvsp[-2].variable.val,yyvsp[-1].tok,yyvsp[0].variable.val,yyvsp[-2].variable.type,yyvsp[0].variable.type);}else {yyval.variable.type=REAL_ID;yyval.variable.val = calculateRealExpretion(yyvsp[-2].variable.val,yyvsp[-1].tok,yyvsp[0].variable.val,yyvsp[-2].variable.type,yyvsp[0].variable.type);};
    break;}
case 27:
#line 123 "si.y"
{ fprintf (parseFile,"Expression ->  Term\n");yyval.variable.val=yyvsp[0].variable.val;yyval.variable.type = yyvsp[0].variable.type;;
    break;}
case 28:
#line 124 "si.y"
{printf("LEX_ERROR\n");;
    break;}
case 29:
#line 126 "si.y"
{ fprintf (parseFile,"Term ->  Term MULOP Factor\n");
if((yyvsp[-2].variable.type==REAL_ID)||(yyvsp[0].variable.type==REAL_ID)){yyval.variable.type=REAL_ID;yyval.variable.val = calculateRealExpretion(yyvsp[-2].variable.val,yyvsp[-1].tok,yyvsp[0].variable.val,yyvsp[-2].variable.type,yyvsp[0].variable.type);}
else {yyval.variable.type=INT_ID;yyval.variable.val = calculateIntExpretion(yyvsp[-2].variable.val,yyvsp[-1].tok,yyvsp[0].variable.val,yyvsp[-2].variable.type,yyvsp[0].variable.type);};
    break;}
case 30:
#line 129 "si.y"
{ fprintf (parseFile,"Term ->  Factor\n");yyval.variable.type = yyvsp[0].variable.type;yyval.variable.val = yyvsp[0].variable.val;;
    break;}
case 31:
#line 131 "si.y"
{fprintf (parseFile,"Factor ->  ID \n");yyval.variable.val=(getValue(yyvsp[0].variable.name));yyval.variable.type = getType(yyvsp[0].variable.name);;
    break;}
case 32:
#line 132 "si.y"
{ fprintf (parseFile,"Factor ->  NUM\n");int * p  = malloc(sizeof(int));*p=yyvsp[0].i;yyval.variable.val = p;yyval.variable.type = INT_ID;;
    break;}
case 33:
#line 133 "si.y"
{ fprintf (parseFile,"Factor ->  NUM\n");double * p  = malloc(sizeof(double));*p=yyvsp[0].d;;yyval.variable.val = p;yyval.variable.type = REAL_ID;;
    break;}
case 34:
#line 134 "si.y"
{ fprintf (parseFile,"Factor ->  '('Expression')'\n");;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}

#line 137 "si.y"

void yyerror(const char* s)
{
printf("error - %s in line %d\n",s,nline);
errorFlag = TRUE;
}

int main(int argc, char *argv[])
{
 //check if user send input file
        if(argc<2) {
                printf("no input file argument\n");
                return 1;
        }

        //check if user input file is sle file
        char *extenion = strrchr(argv[1], '.');
        if (extenion && strcmp(extenion, ".sle")&& strcmp(extenion, ".SLE")) {
                printf("input file isn't *.sle file\n");
                return 1;
        }

        //read tokens till end of file
        if(createOutputFiles(argv[1])) {
                yyparse();
        }

        //check if process succeeded 
        if(!errorFlag)
                printf("input is valid\n");
        else
                printf("input is not valid\n");



  return 0;
}

int createOutputFiles(char *file_name){

        char fileOut[strlen(file_name)+1];
        char fileParserOut[strlen(file_name)+1];
        char filename[strlen(file_name)+1];
        char *extention =  strrchr(file_name, '.');

        sscanf(file_name,"%[^.]",filename);
        snprintf(fileOut, sizeof(fileOut), "%s.lst", filename);
        snprintf(fileParserOut, sizeof(fileOut), "%s.stx",filename);
        yyin = fopen(file_name,"r"); //open input and output file's
        yyout = fopen(fileOut,"w");
        parseFile = fopen(fileParserOut,"w");
        if((yyin == NULL)||(yyout == NULL)||(parseFile == NULL)) { //check for file open fail
                printf("Error in create output file\n");
                return 0;
        }
        return 1;
}

void addId(char * name,int type){
         Node  * toAdd = (Node*)malloc(sizeof(Node)); 
         strcpy(toAdd->id,name);
        if(type==INT_ID) toAdd->val.type = INT_ID;
        else toAdd->val.type = REAL_ID;
        toAdd->next = idList; //add to ID table
        idList = toAdd;
}



void get(char *name){
        Node * temp = idList;
        while((temp!=NULL)&&(strcmp(temp->id,name))){ //search for id
                temp = temp->next;
        }
        if(temp!=NULL){ //asign value
                if(temp->val.type==INT_ID){
                int * p = (int*)malloc(sizeof(int));
                *p = 1;
                (temp->val).val  = p;
                }
                else{
               double * p = (double*)malloc(sizeof(double));
                *p = 1.0;
                (temp->val).val  = p;
                }
        }
}

void assignValue(char* name,void* value){
         Node * temp = idList;
         int * val =(int*) value;
        while((temp!=NULL)&&(strcmp(temp->id,name))){//search for id
                temp = temp->next;
        }
        if(temp!=NULL){ //asign value
                temp->val.val = value;
        } 

}

void * getValue(char * name){
        Node * temp = idList;
        while((temp!=NULL)&&(strcmp(temp->id,name)!=0)){//search for id
                temp = temp->next;
        }
        if(temp!=NULL){
               return (temp->val).val; 
        }
        printf("error var  %s isn't define in line %d\n",name,nline);
        return &error;
}

int getType(char * name){
        Node * temp = idList;
        while((temp!=NULL)&&(strcmp(temp->id,name)!=0)){//search for id
                temp = temp->next;
        }
        if(temp!=NULL){
               return (temp->val).type;
        }
        return -1;
}

void * calculateIntExpretion(void* a,char * func,void* b, int type_a, int type_b){
        if((type_a==REAL_ID)||(type_b==REAL_ID)){ //dont asign Real value to int
                printf("error - can't assighn real value to int in line %d\n",nline);
                return &error;

        }
        int*  a_val = (int*)a,*b_val =(int*)b;
        int *p = (int*) malloc(sizeof(int));
                if(!strcmp(func,"PLUS")){ //calculate expretion
                        *p = *a_val+*b_val;
                }
                else if(!strcmp(func,"MINUS")){
                         *p = *a_val-*b_val;
                }
                else if(!strcmp(func,"MULT")){
                         *p = (*a_val)*(*b_val);
                }
                else if(!strcmp(func,"DIV")){
                        if((*b_val)==0)
                        {
                                printf("error - divide in zero in line %d\n",nline);
                                return p;
                        }
                         *p = (*a_val)/(*b_val);
                }
                else{ 
                         *p = (*a_val)%(*b_val);
                }
        return p;
}
void * calculateRealExpretion(void* a,char * func,void* b, int type_a, int type_b){
        double*  a_val = (double*)a,*b_val =(double*)b;
        double *p = (double*) malloc(sizeof(int));
                 if(!strcmp(func,"PLUS")){ //calculate expretion
                        *p = *a_val+*b_val;
                }

                else if(!strcmp(func,"MINUS")){
                         *p = *a_val-*b_val;
                }
                else if(!strcmp(func,"MULT")){
                         *p = (*a_val)*(*b_val);
                }
                else if(!strcmp(func,"DIV")){
                        if((*b_val)==0)
                        {
                                printf("error - divide in zero in line %d\n",nline);
                                return p;
                        }
                         *p = (*a_val)/(*b_val);
                }
                else{ 
                         *p = fmod((*a_val),(*b_val));
                }
        return p;
}
       
void printValue(int type,void *val){
        if(type==INT_ID){ //print int val
                int * v = (int*) val;
                printf("%d\n",*v);
        }
        else{ //print real val
                double * v = (double*) val;
                printf("%lf\n",*v);
        }
}

int EvalBool(void * ex1,void * ex2,char* type){
        double* val_a = (double*)ex1;
        double* val_b = (double*)ex2;

        if(strcmp(type,"ET")==0) //calculate expretion
        {
              return ((*val_a)&&(*val_b));
        }
        else if(strcmp(type,"TL")==0)
        {
                return 0;
        }
        if(strcmp(type,"GT")==0)
        {
              return ((*val_a)>(*val_b));
        }
        if(strcmp(type,"LT")==0)
        {
              return ((*val_a)<(*val_b));
        }
        if(strcmp(type,"EQ")==0)
        {
              return ((*val_a)==(*val_b));
        }
        else //NE
        {
              return ((*val_a)!=(*val_b));
        }
}
