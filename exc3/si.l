%{
#include <stdio.h>
#include <stdlib.h>
#include "si_tab.h"
void printTok(int token);
int createOutputFiles(char *file_name);
extern YYSTYPE yylval;

int nline=0;

char *atr[11] = {"GT","LT","EQ","ET","TL","PLUS","MINUS","MULT","DIV","MOD","NE"};

%}

INT_NUMBER		[0-9][0-9]*
FLOAT_NUMBER	[0-9]*"."[0-9][0-9]*
ID    [a-zA-Z][a-zA-Z0-9]*
WS		[ \t]+
%x comment
%%

"/*"		BEGIN comment;
<comment>"*/"	BEGIN INITIAL;
<comment>.|\n	;

start {ECHO;return START;}
do {ECHO;return DO;}
else {ECHO;return ELSE;}
if {ECHO;return IF;}
endi {ECHO;return ENDI;}
int {ECHO;return INT;}
prog {ECHO;return PROG;}
real {ECHO;return REAL;}
then {ECHO;return THEN;}
var {ECHO;return VAR;}
loop {ECHO;return LOOP;}
endl {ECHO;return ENDL;}
until {ECHO;return UNTIL;}
endp {ECHO;return ENDP;}
put {ECHO;return PUT;}

"*"|"/"|mod {if(!(strcmp(yytext,"*"))) yylval.tok = atr[7];
                  else if(!(strcmp(yytext,"/")))yylval.tok = atr[8];
                  else yylval.tok = atr[9];
                  ECHO;
                  return MULOP;}

{INT_NUMBER}		{yylval.i = atoi(yytext);ECHO;return INT_NUMBER;}
{FLOAT_NUMBER}		{yylval.d = atof(yytext);ECHO;return FLOAT_NUMBER;}

{ID}		{ECHO;yylval.variable.name = strdup(yytext);return ID;}
{WS}        {ECHO;}
">"|"<"|"<>"|"="	{if(!(strcmp(yytext,">"))) yylval.tok = atr[0];
                   else if(!(strcmp(yytext,"<"))) yylval.tok = atr[1];
                   else if(!(strcmp(yytext,"="))) yylval.tok = atr[2];
                   else yylval.tok = atr[10];
                   ECHO;
                   return REALOP;}

"," {ECHO;return CommaSep;}
";" {ECHO;return SemicolonSep;}
":" {ECHO;return ColonSep;}
"." {ECHO;return PointSep;}
"(" {ECHO;return OpenbracketSep;}
")"	{ECHO;return ClosebracketSep;}

"&"|"~" {if(!(strcmp(yytext,"&"))) yylval.tok = atr[3];
         else yylval.tok = atr[4];
         return LOGOP;}
\+|\-  {if(!(strcmp(yytext,"+"))) yylval.tok = atr[5];
         else yylval.tok = atr[6];
         ECHO;
         return ADDOP;}

"<=" {ECHO;return ASSIGNOP;}
\n        {nline++;fprintf(yyout,"\n");}
.		{yylval.tok =yytext;return LEX_ERROR;}

%%




int yywrap()
{
	return 1;
}
