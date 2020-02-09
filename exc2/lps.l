%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "lps_tab.h"
	void yyerror (char *s);
	int yylex(); 
	
	
	
%}
%option yylineno
MULOP	[*/]
ID      [A-Za-z][A-Za-z0-9]{0,14}		
NUMR	([0-9]*\.[0-9]+)
NUMI	[0-9]+
RELOP	[<]|[>]|["<>"]|[=]
LOGOP	[&~]
ADDOP	[+-]

%%

"start"	{return START;}
"do"	{return DO;}
"else"	{return ELSE;}
"if"	{return IF;}
"endi"	{return ENDI;}
"int"	{return INT;}
"put"	{return PUT;}
"prog"	{return PROG;}
"get"	{return GET;}
"real"	{return REAL;}	
"then"	{return THEN;}
"var"	{return VAR;}
"loop"	{return LOOP;}
"endl"	{return ENDL;}
"until"	{return UNTIL;}
"endp"	{return ENDP;}
"mod"	{return MULOP;}
"("		{return LPAR;}	
")"		{return RPAR;}
","		{return COMMA;}
":"		{return COLON;}
";"		{return SEMICOLON;}
"."		{return DOT;}
{ID}	{yylval.name = malloc(strlen(yytext));
		strncpy(yylval.name, yytext, strlen(yytext));;
		return ID;}
{NUMR}	{yylval.number = atof(yytext);return NUMR;}
{NUMI}	{yylval.number = atof(yytext);return NUMI;}
"<="	{return ASSIGNOP;}
{RELOP}	{return RELOP;}
{LOGOP}	{return LOGOP;}
{ADDOP}	{return ADDOP;}
{MULOP}	{return MULOP;}
[ \t]+   ;/* ignore whitespace */;
"\n"	{/*return BACKSLASHN*/;}
"/*".*"*/"	{/*return COMMENT*/;}
.		

%%


int yywrap()
{
	return 1;
}