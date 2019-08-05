%{
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#include "lex.yy.c"
struct node
 {
  char *left;
  char *right;
  char *token;
 } syntax[100];
int o=0;

int optcount=0;
struct opt
{
	char *t;
	char *arg;
	char *arg2;
	char *op;
}optim[100];

void yyerror(const char*);
int yylex();
char *temp1;
int yywrap();
void insert_type();
void add(char);
int search(char *,int);
int search1(char*,int);
void FOO();
void add_ptr();
int dep=0;
void insert_type_table();
struct dataType{
	char * id_name;
	char * data_type;
	char * type;
	int line_no;
	int depth;
	}symbolTable[100];

char typeStack[10][100];
int typeStack_top = 0;
char type[10];
char count=0;

int c=0;
int t=0;
int flag;
int z=0;
int q;
int k=0;
extern countn;
%}
%union {struct var_name{char name[100];char *type;}nam;}
%token <nam> ID NUM FOR IF ELSE  REL VOID INCLUDE RETURN INT FLOAT CHAR MAIN  COUT STRL CH
%type <nam> E V S 
%right '='
%left '+' '-'
%left '*' '/'
%left UMINUS
%%
S1: H F S1;
H : H H | INCLUDE; 
F : INT{insert_type();}|FLOAT{insert_type();}|CHAR{insert_type();}|VOID{insert_type();};
S1: MAIN'{'{dep++;} S '}'{dep--;} 
T : ID{push();insert_type_table();} G| T','{}T| '*'{add_ptr();} T
G : '['{} NUM{add('n');} ']'| ;

S : P|P2|W1|C1;
C1: P|P2|W2|W3;

P : COUT{add('f');} 
         
          STRL{add('a');} 
          ';' 
         ;
          
P2 :      COUT{add('f');} 
         
          ID{add('d');}
          ';'
            
          ;

W1 : FOR{insert_type();c++;if(c>=2){flag=1;};lab1();} '(' E ';' E ';' E ')'{lab2();} '{' {dep++;} S '}'{dep--;lab3();} S2{syntax[k].left = "cond";  syntax[k].right= "stmt"; syntax[k].token = "for";k++;  }
       | E ';' 
       |DECL S2;


W2 : IF{insert_type();} '(' E ')'{lab4();}'{'{dep++;} S {dep--;}'}'{lab5();}ELSE{insert_type();} '{'{dep++;} S {dep--;}'}'{lab6();} S2{syntax[k].left = "cond"; syntax[k].right= "stmt"; 
          syntax[k].token = "if";k++;  }
        | E ';' S2 
        | DECL S2;
        


W3 :IF{insert_type();}'('E')''{'{dep++;} S {dep++;} '}' S2{syntax[k].left = "cond"; syntax[k].right= "stmt"; syntax[k].token = "if";k++;  } 
        | E ';' S2
        | DECL S2 
        | COUT{add('f');}STRL{add('a');} ';' S2{syntax[k].left = ""; syntax[k].right= " "; syntax[k].token = "cout";k++;};
        | P2
	;


S2:S S2| ;
DECL: F T DECL_2';'
       |
       ;
DECL_2: '='{push();} E{codegen();}| ;
E :V '='{push();} E{codegen_assign();syntax[k].left = strdup($1.name); syntax[k].right= strdup("expr"); syntax[k].token = "=";k++;}
  | E '+'{push();} E{codegen();syntax[k].left = strdup($1.name); syntax[k].right= strdup($4.name); syntax[k].token = "+";k++;optcount++;}
  | E '-'{push();} E{codegen();syntax[k].left = strdup($1.name); syntax[k].right= strdup($4.name); syntax[k].token = "-";k++;}
  | E '*'{push();} E{codegen();syntax[k].left = $1.name; syntax[k].right= $4.name; syntax[k].token = "*";k++;}
  | E '/'{push();} E{codegen();syntax[k].left = $1.name; syntax[k].right= $4.name; syntax[k].token = "/";k++;}
  | E REL{push();} E{codegen();syntax[k].left = strdup($1.name); syntax[k].right= strdup($4.name); syntax[k].token = strdup($2.name);k++;}
  | '('{;} E ')'{add('t');}
  | '-'{push();} E{codegen_umin();} %prec UMINUS
  | V   
  | NUM{push();add('n');$$=$1;}
  | CH{push();add('c');$$=$1;} 
  | V'+''+' {push();} {codegen_assign();syntax[k].left = strdup($1.name); syntax[k].right= strdup("expr"); syntax[k].token = "++";k++;} 
  |
  ;
V : ID {push();add('d');$$=$1;}
  ;
%%


#include<ctype.h>
char st[100][10];
int top=0;
char i_[2]="0";
char temp[2]="t";
char temp2[2]="t";

//int lnum=1;
int start=1;
int main()
{        
        
	optim[o].t='\0';
	optim[o].arg='\0';
	optim[o].arg2='\0';
	optim[o].op='\0';
	o++;

         
 
	printf("\n");
	printf("Intermediate code\n"); 
	yyparse();
	printf("Parsing is Successful\n");	
	//printf("size : %ld",sizeof(symbolTable));
	printf("\n");
	printf("Symbol Table\n");
	printf("TOKEN\t\tTOKEN TYPE\tTOKEN CLASS\tLINE NUMBER\tVARIABLE COUNT\n");
	int i=0;
	for(i=0;i<count;i++){
		printf("%s\t\t%s\t\t%s\t\t%d\t\t%d\n",symbolTable[i].id_name,symbolTable[i].data_type,symbolTable[i].type,symbolTable[i].line_no,symbolTable[i].depth);
		
	}
     	printf("\n");
	printf("Syntax tree in inorder traversal \n");

    
	int j=0;
	//printf("%s\n",temp1);
	for(j=0;j<k;j++)
	{
		printf("%s\t%s\t%s\n",syntax[j].left,syntax[j].token,syntax[j].right);
		printf("\n");
	}
	return 0;
}
void yyerror(const char* s)
{
	printf("Not accepted\n");
	printf("error at the line no:%d\n",countn);
	exit(0);
}
void insert_type(){
	strcpy(type,yytext);
	//printf("hey");
	q=search(type,dep);
	//printf("qval=%d",q);
	if(q==0){
		symbolTable[count].id_name=strdup(yytext);
		symbolTable[count].data_type=strdup("N/A");
		symbolTable[count].line_no = countn;
		symbolTable[count].type=strdup("KEYWORD\t");
		symbolTable[count].depth=0;
		count++;
	}
	
	
}
void insert_type_table(){
	
		q=search1(yytext,dep);
	//printf("qval=%d",q);
		if(q==0){
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup(type);
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("IDENTIFIER");
			symbolTable[count].depth=dep;
			count++;
		}
	
	
}
void add(char c)
{
	q=search(yytext,dep);
	
	if(q==0){
		if(c=='H')
		{
			symbolTable[count].id_name=strdup("include");
			symbolTable[count].data_type=strdup(type);
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Header");
			
			count++;
		}
		
		/*if(c=='v')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("CLASS\t");
			
			count++;
		}*/
		
		else if(c=='o')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Operator");
			count++;
		}
		else if(c=='r')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Rel Op\t");
			count++;
		}
		else if(c=='n')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("NUMBER\t");
			count++;
		}
		
		else if(c=='f')
		{
			symbolTable[count].id_name=strdup("COUT");
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("KEYWORD\t");
			count++;
		}
		else if(c=='a')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("argument");
			count++;
		}
		else if(c=='c')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Character");
			count++;
		}
		else if(c=='d')
		{
			printf("%s not defined at line no. %d\n",yytext,countn+1);
			exit(0);	
		}
	}
	
}
int  search(char *type,int d)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(strcmp(symbolTable[i].id_name,type)==0 &&(symbolTable[i].depth)<=d)
		{
			return -1;
			break;
		}
	
	}
	return 0;
}
int  search1(char *type,int d)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(strcmp(symbolTable[i].id_name,type)==0 &&(symbolTable[i].depth)==d)
		{
			return -1;
			break;
		}
	
	}
	return 0;
}

void add_ptr(){
	strcat(type,"*");
}
void check(char *p1,char *p2)
{
	if(strcmp(p1,p2)==0)
	{
		printf("corect bro\n");
	}
}

push()
 {
  strcpy(st[++top],yytext);
 }

codegen()
 {
 int s;
 strcpy(temp,"t");
 strcat(temp,i_);






 printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
//}
 top-=2;
 strcpy(st[top],temp);
 i_[0]++;
 }

codegen_umin()
 {
 strcpy(temp,"t");
 strcat(temp,i_);
 printf("%s = -%s\n",temp,st[top]);
 top--;
 strcpy(st[top],temp);
 i_[0]++;
 }

codegen_assign()
 {
 printf("%s = %s\n",st[top-2],st[top]);
 top-=2;
 }

lnumwhile = 0;
lnumif = 0;

lab1()
{
if(lnumif){
	lnumwhile = lnumif+1;
}
else{
	lnumwhile++;
}
printf("L%d: \n",lnumwhile);
}


lab2()
{
 lnumwhile=lnumwhile+1;
 strcpy(temp,"t");
 strcat(temp,i_);
 printf("%s = not %s\n",temp,st[top]);
 printf("if %s goto L%d\n",temp,lnumwhile);
 i_[0]++;
 }

lab3()
{
printf("goto L%d \n",start);
printf("L%d: \n",lnumwhile);
}





int label[20];
//int lnum=0;
int ltop=0;



lab4()
{
 if(lnumwhile){
 	lnumif=lnumwhile+1;
 }
 else{
 	lnumif++;
 }
 //lnum++;
 strcpy(temp,"t");
 strcat(temp,i_);
 printf("%s = not %s\n",temp,st[top]);
 printf("if %s goto L%d\n",temp,lnumif);
 i_[0]++;
 label[++ltop]=lnumif;
}

lab5()
{
int x;
if(lnumwhile){
 	lnumif=lnumwhile+1;
}
else{
 	lnumif++;
}
//lnum++;
x=label[ltop--];
printf("goto L%d\n",lnumif);
printf("L%d: \n",x);
label[++ltop]=lnumif;
}

lab6()
{
int y;
y=label[ltop--];
printf("L%d: \n",y);
}

