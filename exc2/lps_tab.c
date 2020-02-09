
/*  A Bison parser, made from lps.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	START	258
#define	DO	259
#define	ELSE	260
#define	IF	261
#define	ENDI	262
#define	PUT	263
#define	PROG	264
#define	GET	265
#define	THEN	266
#define	VAR	267
#define	LOOP	268
#define	ENDL	269
#define	UNTIL	270
#define	ENDP	271
#define	COMMA	272
#define	COLON	273
#define	SEMICOLON	274
#define	DOT	275
#define	RELOP	276
#define	LOGOP	277
#define	ADDOP	278
#define	MULOP	279
#define	ASSIGNOP	280
#define	NUMR	281
#define	NUMI	282
#define	INT	283
#define	REAL	284
#define	LPAR	285
#define	RPAR	286
#define	ID	287

#line 1 "lps.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int yylex();
char* yytext;
int yyleng;
FILE* yyin,*f2,*f3;
int yyerror(char *s);
extern int yylineno;


int flag=0;


 




#line 30 "lps.y"
typedef union{
	char* name;
    double number;
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



#define	YYFINAL		70
#define	YYFLAG		-32768
#define	YYNTBASE	33

#define YYTRANSLATE(x) ((unsigned)(x) <= 287 ? yytranslate[x] : 44)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     9,    13,    19,    23,    25,    27,    29,    33,    34,
    38,    41,    44,    52,    58,    64,    70,    74,    76,    78,
    80,    84,    86,    89,    93,    95,    97,    99,   101
};

static const short yyrhs[] = {     9,
    32,    19,    34,     3,    37,    16,    20,     0,    12,    35,
    19,     0,    35,    17,    32,    18,    36,     0,    32,    18,
    36,     0,    28,     0,    29,     0,     1,     0,    37,    38,
    19,     0,     0,    32,    25,    41,     0,     8,    41,     0,
    10,    32,     0,     6,    39,    11,    37,     5,    37,     7,
     0,     6,    39,    11,    37,     7,     0,    13,    39,     4,
    37,    14,     0,     4,    37,    15,    39,    14,     0,    41,
    40,    41,     0,    21,     0,    22,     0,     1,     0,    41,
    23,    42,     0,    42,     0,    41,     1,     0,    42,    24,
    43,     0,    43,     0,    32,     0,    27,     0,    26,     0,
    30,    41,    31,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    43,    48,    51,    52,    55,    56,    57,    60,    61,    64,
    65,    66,    67,    68,    69,    70,    73,    76,    77,    78,
    81,    82,    83,    93,    94,   104,   105,   106,   107
};

static const char * const yytname[] = {   "$","error","$undefined.","START",
"DO","ELSE","IF","ENDI","PUT","PROG","GET","THEN","VAR","LOOP","ENDL","UNTIL",
"ENDP","COMMA","COLON","SEMICOLON","DOT","RELOP","LOGOP","ADDOP","MULOP","ASSIGNOP",
"NUMR","NUMI","INT","REAL","LPAR","RPAR","ID","Program","Declarations","DeclList",
"Type","StmtList","Statement","BoolExp","Case","Expression","Term","Factor",
""
};
#endif

static const short yyr1[] = {     0,
    33,    34,    35,    35,    36,    36,    36,    37,    37,    38,
    38,    38,    38,    38,    38,    38,    39,    40,    40,    40,
    41,    41,    41,    42,    42,    43,    43,    43,    43
};

static const short yyr2[] = {     0,
     8,     3,     5,     3,     1,     1,     1,     3,     0,     3,
     2,     2,     7,     5,     5,     5,     3,     1,     1,     1,
     3,     1,     2,     3,     1,     1,     1,     1,     3
};

static const short yydefact[] = {     0,
     0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
     2,     0,     7,     5,     6,     4,     0,     9,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    28,    27,     0,
    26,     0,     0,    22,    25,     0,    12,     0,     1,     0,
     8,     3,     0,     0,     9,    20,    18,    19,     0,     0,
     0,    23,     9,     0,     0,    29,     0,    21,     0,    24,
     0,    16,     9,    14,    15,     0,    13,     0,     0,     0
};

static const short yydefgoto[] = {    68,
     5,     7,    16,    12,    25,    32,    50,    33,    34,    35
};

static const short yypact[] = {     4,
   -28,     0,    13,    -4,    26,    12,   -14,-32768,    49,    22,
-32768,    10,-32768,-32768,-32768,-32768,    15,-32768,    65,    65,
    23,    65,    16,    44,    52,    49,    33,-32768,-32768,    65,
-32768,    61,    58,    59,-32768,    21,-32768,    78,-32768,    65,
-32768,-32768,    65,     1,-32768,    67,-32768,-32768,    65,    65,
    65,-32768,-32768,    51,    70,-32768,     2,    59,    62,-32768,
    43,-32768,-32768,-32768,-32768,    54,-32768,    87,    93,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,    68,   -18,-32768,    -5,-32768,   -19,    47,    48
};


#define	YYLAST		99


static const short yytable[] = {    27,
    36,    52,    10,     2,    11,    18,    63,    19,    64,    20,
    44,    21,     1,    18,    22,    19,    38,    20,     3,    21,
    54,    52,    22,    49,     4,    23,    57,     6,     8,     9,
    59,    56,    26,    24,    61,    39,    18,    55,    19,   -11,
    20,    24,    21,    49,    66,    22,    18,    43,    19,    13,
    20,    52,    21,    17,    37,    22,    65,    18,    46,    19,
    67,    20,    52,    21,    24,   -17,    22,   -23,    40,   -10,
    41,    45,   -17,    49,    24,   -17,    14,    15,    47,    48,
    49,    53,    51,    62,    49,    24,    69,   -23,   -23,   -23,
    28,    29,    70,    42,    30,    58,    31,     0,    60
};

static const short yycheck[] = {    18,
    20,     1,    17,    32,    19,     4,     5,     6,     7,     8,
    30,    10,     9,     4,    13,     6,    22,     8,    19,    10,
    40,     1,    13,    23,    12,    16,    45,    32,     3,    18,
    50,    31,    18,    32,    53,    20,     4,    43,     6,    19,
     8,    32,    10,    23,    63,    13,     4,    15,     6,     1,
     8,     1,    10,    32,    32,    13,    14,     4,     1,     6,
     7,     8,     1,    10,    32,     4,    13,     1,    25,    19,
    19,    11,    11,    23,    32,    14,    28,    29,    21,    22,
    23,     4,    24,    14,    23,    32,     0,    21,    22,    23,
    26,    27,     0,    26,    30,    49,    32,    -1,    51
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
#line 43 "lps.y"
{
fprintf(f3,"Program ->	PROG %s SEMICOLON Declarations START StmtList ENDP \n", yyvsp[-6].name);;
    break;}
case 2:
#line 48 "lps.y"
{fprintf(f3,"Declarations -> VAR DeclList SEMICOLON\n");;
    break;}
case 3:
#line 51 "lps.y"
{fprintf(f3,"DeclList -> DeclList COMMA %s COLON Type\n",yyvsp[-2].name);;
    break;}
case 4:
#line 52 "lps.y"
{fprintf(f3,"DeclList -> %s COLON Type\n",yyvsp[-2].name);;
    break;}
case 5:
#line 55 "lps.y"
{fprintf(f3,"Type -> INT\n");;
    break;}
case 6:
#line 56 "lps.y"
{fprintf(f3,"Type -> REAL\n");;
    break;}
case 7:
#line 57 "lps.y"
{yyerror("error in INT or REAL token");;
    break;}
case 8:
#line 60 "lps.y"
{fprintf(f3,"StmtList -> StmtList Statement SEMICOLON\n");;
    break;}
case 9:
#line 61 "lps.y"
{fprintf(f3,"StmtList ->/* empty */\n");;
    break;}
case 10:
#line 64 "lps.y"
{fprintf(f3,"Statement -> %s ASSIGNOP Expression\n",yyvsp[-2].name);;
    break;}
case 11:
#line 65 "lps.y"
{fprintf(f3,"Statement -> PUT Expression\n");;
    break;}
case 12:
#line 66 "lps.y"
{fprintf(f3,"Statement -> GET %s\n",yyvsp[0].name);;
    break;}
case 13:
#line 67 "lps.y"
{fprintf(f3,"Statement -> IF BoolExp THEN StmtList ELSE StmtList ENDI\n");;
    break;}
case 14:
#line 68 "lps.y"
{fprintf(f3,"Statement -> IF BoolExp THEN StmtList ENDI\n");;
    break;}
case 15:
#line 69 "lps.y"
{fprintf(f3,"Statement -> LOOP BoolExp DO StmtList ENDL\n");;
    break;}
case 16:
#line 70 "lps.y"
{fprintf(f3,"Statement -> DO StmtList UNTIL BoolExp ENDL\n");;
    break;}
case 17:
#line 73 "lps.y"
{fprintf(f3,"BoolExp -> Expression Case Expression\n");;
    break;}
case 18:
#line 76 "lps.y"
{fprintf(f3,"Case -> RELOP\n");;
    break;}
case 19:
#line 77 "lps.y"
{fprintf(f3,"Case -> LOGOP\n");;
    break;}
case 20:
#line 78 "lps.y"
{yyerror("error in RELOP or LOGOP token");;
    break;}
case 21:
#line 81 "lps.y"
{fprintf(f3,"Expression -> Expression ADDOP Term\n");;
    break;}
case 22:
#line 82 "lps.y"
{fprintf(f3,"Expression -> Term\n");;
    break;}
case 23:
#line 83 "lps.y"
{yyerror("error in ADDOP token");;
    break;}
case 24:
#line 93 "lps.y"
{fprintf(f3,"Term -> Term MULOP Factor\n");;
    break;}
case 25:
#line 94 "lps.y"
{fprintf(f3,"Term -> Factor\n");;
    break;}
case 26:
#line 104 "lps.y"
{yyval.name=yyvsp[0].name;fprintf(f3,"Factor -> %s\n",yyvsp[0].name);;
    break;}
case 27:
#line 105 "lps.y"
{fprintf(f3,"Factor -> NUMI\n");;
    break;}
case 28:
#line 106 "lps.y"
{fprintf(f3,"Factor -> NUMR\n");;
    break;}
case 29:
#line 107 "lps.y"
{fprintf(f3,"Factor -> LPAR Expression RPAR\n");;
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

#line 111 "lps.y"






//function to check the file ends with .sle or .SLE
int checkFileEnding(char argv[]){
	int i;
	for(i=0;i<(int)strlen(argv);i++){
		if(argv[i] =='.'){
			if(argv[i+1] =='s' && argv[i+2] =='l' && argv[i+3] =='e'){
				return 1;
			}
			if(argv[i+1] =='S' &&argv[i+2] =='L' && argv[i+3] =='E'){
				return 1;
			}
		}
	}
	return 0;	
}

void errorMessages(int argc, char argv[],FILE *f1,FILE *f2,FILE *f3 ){
	//error messages
	if(argc != 2){
		fprintf(stderr,"wrong amount of arguments\n");
		exit(1);
	}
		
	if(f1 == NULL){
		fprintf(stderr,"cannot open input file\n");
		exit(1);
	}
	if(f2==NULL || f3==NULL){
		fprintf(stderr,"cannot open output file\n");	
		exit(1);
	}
	//checks the file ends with .sle or .SLE
	if(checkFileEnding(argv)== 0){
		fprintf(stderr,"file ending has to be .sle or .SLE\n");
		fprintf(f2,"file ending has to be .sle or .SLE\n");
		exit(1);
	}
	
}
void returningTokens(int argc, char argv[]){
	char filename1[20],filename2[20] ;
	FILE *f1;
	char c;
	strcpy(filename1,argv);
	strcat(filename1,".lst");
	strcpy(filename2,argv);
	strcat(filename2,".stx");
	f2= fopen(filename1, "w");
	f3= fopen(filename2, "w");
	if (argc == 2 && (f1 = fopen(argv, "r")))
        yyin = f1;
	errorMessages(argc,argv,f1,f2,f3 );
	//writing the input file into the .lst file
	c=(char)fgetc( yyin);
	while(c!=EOF){
	putc(c, f2);
	c=(char)fgetc( yyin);
	}
	fprintf(f2, "\n");
	//get the pointer back to the beginning of the file for parsing
	rewind(yyin);
	
	
}

int yyerror(char *s)
{
	flag=1;
	fprintf(f2," At line %d %s \n",yylineno,s);
	return 0;
}


int main(int argc, char* argv[])
{
	
	returningTokens( argc, argv[1]); 
	yyparse();
	if(flag==0)
		printf("parsing was successful\n");
	if(flag==1)
		printf("parsing failed\n");
	
    return 0;
}