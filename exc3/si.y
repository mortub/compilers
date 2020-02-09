%{


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

%}
 
%union{ 
    struct{
        void *val;
       int type;
       char* name;
        }variable;
   int i;
   double d;
   char * tok;
}

%token <tok> REAL INT REALOP LOGOP ADDOP MULOP
%token <tok> LEX_ERROR
%type <tok> case
%token <i>INT_NUMBER 
%type <i> Type BoolExp
%token <d>FLOAT_NUMBER 
%token <d>NUM
%token <variable> ID 
%type <variable> Factor Expression Term
%token WS RES START DO ELSE IF ENDI PUT PROG GET THEN VAR LOOP ENDL UNTIL ENDP PointSep SemicolonSep ColonSep  CommaSep OpenbracketSep ClosebracketSep ASSIGNOP
 


%left '-' '+'
%left '*' '/'
%right NEG     /* negation--unary minus */
%right '^'    /* exponentiation        */
/* Grammar follows */
%%
Program : PROG ID SemicolonSep Declarations START StmtList ENDP PointSep { fprintf (parseFile,"Program –> prog id ; Declarations start StmtList endp.\n");}
        | PROG ID SemicolonSep Declarations START StmtList ENDP LEX_ERROR {errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");}
        | PROG ID SemicolonSep Declarations START LEX_ERROR ENDP PointSep {errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");}
        | PROG ID SemicolonSep Declarations LEX_ERROR StmtList ENDP PointSep {errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");}
        | PROG ID SemicolonSep LEX_ERROR START StmtList ENDP PointSep {errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");}
        | PROG ID LEX_ERROR Declarations START StmtList ENDP PointSep {errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");}
        | PROG LEX_ERROR SemicolonSep Declarations START StmtList ENDP PointSep {errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");}
        | LEX_ERROR ID SemicolonSep Declarations START StmtList ENDP PointSep {errorFlag = TRUE;fprintf(yyout,"lexical error in line - %d in tokent %s\n,nline,yylval");}
;
Declarations : VAR DeclList SemicolonSep { fprintf (parseFile,"Declarations -> var DeclList ;\n");}
;
Type : INT { fprintf (parseFile,"Type -> int\n");$$=INT_ID;}
        |  REAL { fprintf (parseFile,"Type -> real\n");$$=REAL_ID;}
;
DeclList : DeclList CommaSep ID ColonSep Type   { fprintf (parseFile,"DeclList -> DeclList , id : Type ;\n");addId($3.name,$5);}
        |  ID ColonSep Type  { fprintf (parseFile,"DeclList -> id : Type ;\n");addId($1.name,$3);}
;

StmtList : StmtList Statement SemicolonSep { fprintf (parseFile,"StmtList -> StmtList  Statement ;\n");}
        |
;
Statement : ID ASSIGNOP Expression { fprintf (parseFile,"Statement -> id <= Expression ;\n");assignValue($1.name,$3.val);}
        | PUT Expression { fprintf (parseFile,"Statement -> put Expression ;\n");printValue($2.type,$2.val);}
        | GET ID { fprintf (parseFile,"Statement ->  get id ;\n");get($2.name);}
        | IF BoolExp THEN StmtList ELSE StmtList ENDI { fprintf (parseFile,"Statement ->  if BoolExp then StmtList else StmtList endi\n");}
        | IF BoolExp THEN StmtList  ENDI { fprintf (parseFile,"Statement ->  IF BoolExp THEN StmtList  ENDI\n");}
        | LOOP BoolExp DO StmtList ENDL { fprintf (parseFile,"Statement ->  LOOP BoolExp DO StmtList ENDL\n");}
        | DO StmtList UNTIL BoolExp ENDL { fprintf (parseFile,"Statement ->  DO StmtList UNTIL BoolExp ENDL\n");}
;
BoolExp :  Expression case Expression { fprintf (parseFile,"BoolExp ->  Expression case Expression\n");$$=EvalBool($1.val,$3.val,$2);}
;
case : REALOP   { fprintf (parseFile,"case ->  REALOP\n");$$=$1;}
        | LOGOP  { fprintf (parseFile,"case ->  LOGOP\n");$$=$1;}
;
Expression : Expression ADDOP Term { fprintf (parseFile,"Expression ->  Expression ADDOP Term\n");
if(($1.type==INT_ID)||($3.type==INT_ID)){$$.type=INT_ID;$$.val = calculateIntExpretion($1.val,$2,$3.val,$1.type,$3.type);}else {$$.type=REAL_ID;$$.val = calculateRealExpretion($1.val,$2,$3.val,$1.type,$3.type);}}
        | Term { fprintf (parseFile,"Expression ->  Term\n");$$.val=$1.val;$$.type = $1.type;}
        | LEX_ERROR {printf("LEX_ERROR\n");}
;
Term : Term MULOP Factor { fprintf (parseFile,"Term ->  Term MULOP Factor\n");
if(($1.type==REAL_ID)||($3.type==REAL_ID)){$$.type=REAL_ID;$$.val = calculateRealExpretion($1.val,$2,$3.val,$1.type,$3.type);}
else {$$.type=INT_ID;$$.val = calculateIntExpretion($1.val,$2,$3.val,$1.type,$3.type);}}
        | Factor { fprintf (parseFile,"Term ->  Factor\n");$$.type = $1.type;$$.val = $1.val;}
;
Factor : ID {fprintf (parseFile,"Factor ->  ID \n");$$.val=(getValue($1.name));$$.type = getType($1.name);}
        |  INT_NUMBER { fprintf (parseFile,"Factor ->  NUM\n");int * p  = malloc(sizeof(int));*p=$1;$$.val = p;$$.type = INT_ID;}
        |  FLOAT_NUMBER { fprintf (parseFile,"Factor ->  NUM\n");double * p  = malloc(sizeof(double));*p=$1;;$$.val = p;$$.type = REAL_ID;}
        |  '('Expression')' { fprintf (parseFile,"Factor ->  '('Expression')'\n");}
;

%%
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
