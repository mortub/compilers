typedef union{
	char* name;
    double number;
} YYSTYPE;
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


extern YYSTYPE yylval;
