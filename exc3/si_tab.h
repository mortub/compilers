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


extern YYSTYPE yylval;
