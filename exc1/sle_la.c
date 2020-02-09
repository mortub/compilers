
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern char* yytext;
extern int yyleng;
extern FILE* yyin;

//an enum for all of the 29 tokens in SLE
	
enum tokens{START, DO, ELSE, IF, ENDI, INT, PUT,PROG, GET, REAL,THEN,
VAR,LOOP,ENDL,UNTIL, ENDP,LPAR,RPAR, COMMA, COLON,SEMICOLON, DOT,
ID, NUMR,NUMI, RELOP,LOGOP,ADDOP,MULOP,ASSIGNOP,COMMENT,BACKSLASHN};

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
void switchCase(int ntoken, FILE* f3){
	switch(ntoken){
		case START:
			fprintf(f3,"START\n");
			break;
		case DO:
			fprintf(f3,"DO\n");
			break;
		case ELSE:
			fprintf(f3,"ELSE\n");
			break;
		case IF:
			fprintf(f3,"IF\n");
			break;
		case ENDI:
			fprintf(f3,"ENDI\n");
			break;
		case INT:
			fprintf(f3,"INT\n");
			break;
		case PUT:
			fprintf(f3,"PUT\n");
			break;
		case PROG:
			fprintf(f3,"PROG\n");
			break;
		case GET:
			fprintf(f3,"GET\n");
			break;
		case REAL:
			fprintf(f3,"REAL\n");
			break;
		case THEN:
			fprintf(f3,"THEN\n");
			break;
		case VAR:
			fprintf(f3,"VAR\n");
			break;
		case LOOP:
			fprintf(f3,"LOOP\n");
			break;
		case ENDL:
			fprintf(f3,"ENDL\n");
			break;
		case UNTIL:
			fprintf(f3,"UNTIL\n");
			break;
		case ENDP:
			fprintf(f3,"ENDP\n");
			break;
		case LPAR:
			fprintf(f3,"LPAR\n");
			break;
		case RPAR:
			fprintf(f3,"RPAR\n");
			break;
		case COMMA:
			fprintf(f3,"COMMA\n");
			break;
		case COLON:
			fprintf(f3,"COLON\n");
			break;
		case SEMICOLON:
			fprintf(f3,"SEMICOLON\n");
			break;
		case DOT:
			fprintf(f3,"DOT\n");
			break;
		case ID:
			fprintf(f3,"ID\t\t\t");
			fprintf(f3,"ID=%s, Length=%d\n",yytext,yyleng);
			break;
		case NUMR:
			fprintf(f3,"NUM\t\t\t");
			fprintf(f3,"type= Real, val=%s\n", yytext);
			break;
		case NUMI:
			fprintf(f3,"NUM\t\t\t");
			fprintf(f3,"type= Integer, val=%s\n", yytext);
			break;
		case RELOP:
			fprintf(f3,"RELOP\t\t\t");
			if(yytext[0] == '<')
				fprintf(f3,"LT\n");
			if(yytext[0] == '>')
				fprintf(f3,"GT\n");
			if(yytext[0] == '=')
				fprintf(f3,"EQ\n");
			if(yytext[0] == '<'&& yytext[1]== '>')
				fprintf(f3,"NE\n");
			break;
		case LOGOP:
			fprintf(f3,"LOGOP\t\t\t");
			if(yytext[0] == '&')
				fprintf(f3,"AND\n");
			if(yytext[0] == '~')
				fprintf(f3,"NOT\n");
			break;
		case ADDOP:
			fprintf(f3,"ADDOP\t\t\t");
			if(yytext[0] == '+')
				fprintf(f3,"ADD\n");
			if(yytext[0] == '-')
				fprintf(f3,"SUBTRACT\n");
			break;
		case MULOP:
			fprintf(f3,"MULOP\t\t\t");
			if(yytext[0] == '*')
				fprintf(f3,"MULTIPLY\n");
			if(yytext[0] == '/')
				fprintf(f3,"DIVIDE\n");
			else
				fprintf(f3,"MODULO\n");
			break;
		case ASSIGNOP:
			fprintf(f3,"ASSIGNOP\n");
			break;
		case COMMENT:
			break;
		case BACKSLASHN:
			break;
		default:
			fprintf(stderr,"error\n");
			break;
		
	}
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
	//checks the file ends with .sle or .SLE
	if(checkFileEnding(argv)== 0){
		fprintf(stderr,"file ending has to be .sle or .SLE\n");
		exit(1);
	}
	if(f2==NULL || f3==NULL){
		fprintf(stderr,"cannot open output file\n");	
		exit(1);
	}
}
void returningTokens(int argc, char argv[]){
	char filename1[20],filename2[20] ;
	//a flag for if we saw \n
	int saw_bsn=0;
	//counter of the lines
	int lines=0;
	int ntoken;
	FILE *f1,*f2,*f3;
	strcpy(filename1,argv);
	strcat(filename1,".lst");
	strcpy(filename2,argv);
	strcat(filename2,".tok");
	f2= fopen(filename1, "w");
	f3= fopen(filename2, "w");
	if (argc == 2 && (f1 = fopen(argv, "r")))
        yyin = f1;
	
		
	//writes the first line number in mor.lst
	fprintf(f2, "%d ", lines);	
    
    //constructing a table in filename.tok
	fprintf(f3,"%15s\t", "LEXEME");
	fprintf(f3,"%s\t\t\t", "TOKEN");
	fprintf(f3,"%s\n", "ATTRIBUTES");
	ntoken=  yylex();
	
	while(ntoken != DOT){
	//printing the lexeme in filename.tok
	if(ntoken != BACKSLASHN && ntoken != COMMENT)
		fprintf(f3,"%15s\t", yytext);	
	switchCase(ntoken,f3);
		saw_bsn=0;	
		//has to ignore comments when writing
		if(ntoken != COMMENT){
			//writes to filename.lst
			if(ntoken == BACKSLASHN){
				lines++;
				fprintf(f2,"%s", yytext);
				fprintf(f2,"%d ", lines);
				saw_bsn=1;
				
			}		
			if(saw_bsn==0)
				fprintf(f2,"%s ", yytext); 
		}
		//reads every token from the file
		ntoken=  yylex();		
	}
	
}
main(int argc, char* argv[] )
{
	returningTokens( argc, argv[1]);
	return 0;
}


