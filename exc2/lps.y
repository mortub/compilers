%{
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


 



%}

%token START DO ELSE IF ENDI  PUT PROG GET  THEN VAR LOOP ENDL UNTIL ENDP  COMMA COLON SEMICOLON DOT  RELOP LOGOP ADDOP MULOP ASSIGNOP NUMR NUMI INT REAL LPAR RPAR ID 
%start Program


%union{
	char* name;
    double number;
}

%type <number> NUMR NUMI
%type <name> ID Factor




%%

Program	:PROG ID SEMICOLON Declarations START StmtList ENDP DOT {
fprintf(f3,"Program ->	PROG %s SEMICOLON Declarations START StmtList ENDP \n", $2);}
		
;

Declarations	:VAR DeclList SEMICOLON	{fprintf(f3,"Declarations -> VAR DeclList SEMICOLON\n");}
;

DeclList	:DeclList COMMA ID COLON Type	{fprintf(f3,"DeclList -> DeclList COMMA %s COLON Type\n",$3);}
			|ID COLON Type	{fprintf(f3,"DeclList -> %s COLON Type\n",$1);}
;

Type	:INT	{fprintf(f3,"Type -> INT\n");}
		|REAL	{fprintf(f3,"Type -> REAL\n");}
		|error {yyerror("error in INT or REAL token");}
;

StmtList	:StmtList Statement	SEMICOLON	{fprintf(f3,"StmtList -> StmtList Statement SEMICOLON\n");}
			|/*epsilon*/	{fprintf(f3,"StmtList ->/* empty */\n");}
;

Statement	:ID ASSIGNOP Expression	{fprintf(f3,"Statement -> %s ASSIGNOP Expression\n",$1);}
			|PUT Expression	{fprintf(f3,"Statement -> PUT Expression\n");}
			|GET ID	{fprintf(f3,"Statement -> GET %s\n",$2);}
			|IF BoolExp	THEN StmtList ELSE StmtList ENDI	{fprintf(f3,"Statement -> IF BoolExp THEN StmtList ELSE StmtList ENDI\n");}
			|IF BoolExp THEN StmtList ENDI	{fprintf(f3,"Statement -> IF BoolExp THEN StmtList ENDI\n");}
			|LOOP BoolExp DO StmtList ENDL	{fprintf(f3,"Statement -> LOOP BoolExp DO StmtList ENDL\n");}
			|DO StmtList UNTIL BoolExp ENDL	{fprintf(f3,"Statement -> DO StmtList UNTIL BoolExp ENDL\n");}
;

BoolExp	:Expression Case Expression	{fprintf(f3,"BoolExp -> Expression Case Expression\n");}
;

Case	:RELOP	{fprintf(f3,"Case -> RELOP\n");}
		|LOGOP	{fprintf(f3,"Case -> LOGOP\n");}
		|error {yyerror("error in RELOP or LOGOP token");}
;

Expression	:Expression ADDOP Term	{fprintf(f3,"Expression -> Expression ADDOP Term\n");}
			|Term	{fprintf(f3,"Expression -> Term\n");}
			|Expression error {yyerror("error in ADDOP token");}
			
			
			

			
			
			
			

Term	:Term MULOP Factor	{fprintf(f3,"Term -> Term MULOP Factor\n");}
		|Factor	{fprintf(f3,"Term -> Factor\n");}
		
		
		

	
		

;

Factor	:ID	{$$=$1;fprintf(f3,"Factor -> %s\n",$1);}
		|NUMI	{fprintf(f3,"Factor -> NUMI\n");}
		|NUMR	{fprintf(f3,"Factor -> NUMR\n");}
		|LPAR Expression RPAR	{fprintf(f3,"Factor -> LPAR Expression RPAR\n");}
		


%%





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