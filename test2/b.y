%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "tree.h"
int yyparse (void);
void yyerror(char* s);
extern char *yytext;
extern int yylineno;
extern int debug;
extern bool willPrintTree;
extern void printError(const char* msg);
int errorCount = 0;
#define YYERROR_VERBOSE 1
%}

%union {
    int integer;
    struct Node *pnode;
}

%start program

%token <pnode> CONST VAR PROCEDURE BEGIN_ END ODD IF THEN CALL WHILE DO READ WRITE
%token <pnode> LE GE ASSIGN PLUS MINUS MUL DIV LT GT NE EQ
%token <pnode> LEFTBRACKET RIGHTBRACKET SEMICOLON COMMA DOT
%token <integer> INTERGER
%token <pnode> ID

%type <pnode> program
%type <pnode> block
%type <pnode> cons_des_section
%type <pnode> cons_def_pre
%type <pnode> cons_def
%type <pnode> var_des_section
%type <pnode> var_pre
%type <pnode> prog_des_section
%type <pnode> prog_des_section_pre
%type <pnode> prog_header
%type <pnode> statements
%type <pnode> assignment_statements
%type <pnode> compound_statements
%type <pnode> compound_pre
%type <pnode> null_statements
%type <pnode> condition
%type <pnode> expression
%type <pnode> item
%type <pnode> factor
%type <pnode> add_sub_op
%type <pnode> mul_div_op
%type <pnode> relational_op
%type <pnode> conditional_statements
%type <pnode> procedure_call_statements
%type <pnode> loops_statements
%type <pnode> read_statements
%type <pnode> read_pre
%type <pnode> write_statements
%type <pnode> write_pre


%left PLUS MINUS
%left MUL DIV

%%

program
	:	block DOT{
		if(debug){
			printf("%s\t:\t",yytext);printf("program -> block DOT\n");
		}
		$$ = newNode("program");
		insertNodes(3, $$, $1, $2);
		if(errorCount == 0) {
			printf("%d error generated.\n", errorCount);
			if(willPrintTree) {
				printf("-------------------------syntax tree-------------------------------\n");
				printTree($$, 0);
			}
		} else {
			if(errorCount == 1) {
				printf("%d error generated.\n", errorCount);
			} else {
				printf("%d errors generated.\n", errorCount);
			}
            }
	}
	;
	
block
	:	statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> statements\n");
		}
		$$ = newNode("block");
        insertNodes(2, $$, $1);
	}
	|	cons_des_section statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> cons_des_section statements\n");
		}
		$$ = newNode("block");
        insertNodes(3, $$, $1, $2);
	}
	|	var_des_section statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> var_des_section statements\n");
		}
		$$ = newNode("block");
        insertNodes(3, $$, $1, $2);
	}
	|	prog_des_section statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> prog_des_section statements\n");
		}
		$$ = newNode("block");
        insertNodes(3, $$, $1, $2);
	}
	|	cons_des_section var_des_section statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> cons_des_section var_des_section statements\n");
		}
		$$ = newNode("block");
        insertNodes(4, $$, $1, $2, $3);
	}
	|	cons_des_section prog_des_section statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> cons_des_section prog_des_section statements\n");
		}
		$$ = newNode("block");
        insertNodes(4, $$, $1, $2, $3);
	}
	|	var_des_section prog_des_section statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> var_des_section prog_des_section statements\n");
		}
		$$ = newNode("block");
        insertNodes(4, $$, $1, $2, $3);
	}
	|	cons_des_section var_des_section prog_des_section statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("block -> cons_des_section ar_des_section prog_des_section statements\n");
		}
		$$ = newNode("block");
        insertNodes(5, $$, $1, $2, $3, $4);
	}
	;
	
cons_des_section
	:	cons_def_pre SEMICOLON{
		if(debug){
			printf("%s\t:\t",yytext);printf("cons_des_section -> cons_def_pre SEMICOLON\n");
		}
		$$ = newNode("cons_des_section");
        insertNodes(3, $$, $1, $2);
	}
	;

cons_def_pre
	:	CONST cons_def{
		if(debug){
			printf("%s\t:\t",yytext);printf("cons_def_pre -> CONST cons_def\n");
		}
		$$ = newNode("cons_def_pre");
		insertNodes(3, $$, $1, $2);
	}
	|	cons_def_pre COMMA cons_def{
		if(debug){
			printf("%s\t:\t",yytext);printf("cons_def_pre -> cons_def_pre COMMA cons_def\n");
		}
		$$ = newNode("cons_def_pre");
		insertNodes(4, $$, $1, $2, $3);
	}
	;
	
cons_def
	:	ID EQ INTERGER{
		if(debug){
			printf("%s\t:\t",yytext);printf("cons_def -> ID EQ INTERGER\n");
		}
		$$ = newNode("cons_def");
		char buf[10];
		sprintf(buf, "%d", $3);
		pNode p = newNode(buf);
		$1->value = $3;
		insertNodes(4, $$, $1, $2, p);
	}
	;
	
var_des_section
	:	var_pre SEMICOLON{
		if(debug){
			printf("%s\t:\t",yytext);printf("var_des_section -> var_pre SEMICOLON\n");
		}
		$$ = newNode("var_des_section");
		insertNodes(3, $$, $1, $2);
	}
	;
	
var_pre
	:	VAR ID{
		if(debug){
			printf("%s\t:\t",yytext);printf("var_pre -> VAR ID\n");
		}
		$$ = newNode("var_pre");
		insertNodes(3, $$, $1, $2);
	}
	|	var_pre COMMA ID{
		if(debug){
			printf("%s\t:\t",yytext);printf("var_pre -> var_pre COMMA ID\n");
		}
		$$ = newNode("var_pre");
		insertNodes(4, $$, $1, $2, $3);
	}
	;
	
prog_des_section
	:	prog_des_section_pre SEMICOLON{
		if(debug){
			printf("%s\t:\t",yytext);printf("prog_des_section -> prog_des_section_pre SEMICOLON\n");
		}
		$$ = newNode("prog_des_section");
		insertNodes(3, $$, $1, $2);
	}
	;
	
prog_des_section_pre
	:	prog_header block{
		if(debug){
			printf("%s\t:\t",yytext);printf("prog_des_section_pre -> prog_header block\n");
		}
		$$ = newNode("prog_des_section_pre");
		insertNodes(3, $$, $1, $2);
	}
	|	prog_des_section_pre SEMICOLON prog_des_section{
		if(debug){
			printf("%s\t:\t",yytext);printf("prog_des_section_pre -> prog_des_section_pre SEMICOLON prog_des_section\n");
		}
		$$ = newNode("prog_des_section_pre");
		insertNodes(4, $$, $1, $2, $3);
	}
	;
	
prog_header
	:	PROCEDURE ID SEMICOLON{
		if(debug){
			printf("%s\t:\t",yytext);printf("prog_header -> PROCEDURE ID SEMICOLON\n");
		}
		$$ = newNode("prog_header");
		insertNodes(4, $$, $1, $2, $3);
	}
	;
	
statements
	:	assignment_statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> assignment_statements\n");
		}
		$$ = newNode("statements");
		insertNodes(2, $$, $1);
	}
	|	conditional_statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> conditional_statements\n");
		}
		$$ = newNode("statements");
		insertNodes(2, $$, $1);
	}
	|	loops_statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> loops_statements\n");
		}
		$$ = newNode("statements");
		insertNodes(2, $$, $1);
	}
	|	procedure_call_statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> procedure_call_statements\n");
		}
		$$ = newNode("statements");
		insertNodes(2, $$, $1);
	}
	|	read_statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> read_statements\n");
		}
		$$ = newNode("statements");
		insertNodes(2, $$, $1);
	}
	|	write_statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> write_statements\n");
		}
		$$ = newNode("statements");
		insertNodes(2, $$, $1);
	}
	|	compound_statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> compound_statements\n");
		}
		$$ = newNode("statements");
		insertNodes(2, $$, $1);
	}
	|	null_statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("statements -> null_statements\n");
		}
		$$ = newNode("statements");
		insertNodes(2, $$, $1);
	}
	;
	
assignment_statements
	:	ID ASSIGN expression{
		if(debug){
			printf("%s\t:\t",yytext);printf("assignment_statements -> ID ASSIGN expression\n");
		}
		$$ = newNode("assignment_statements");
        insertNodes(4, $$, $1, $2, $3);
	}
	;
	
compound_statements
	:	compound_pre END{
		if(debug){
			printf("%s\t:\t",yytext);printf("compound_statements -> statements_pre END\n");
		}
		$$ = newNode("compound_statements");
        insertNodes(3, $$, $1, $2);
	}
	;
	
compound_pre
	:	BEGIN_ statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("compound_pre -> BEGIN_ statements\n");
		}
		$$ = newNode("compound_pre");
		insertNodes(3, $$, $1, $2);
	}
	|	compound_pre SEMICOLON statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("compound_pre -> statements_pre SEMICOLON statements\n");
		}
		$$ = newNode("compound_pre");
		insertNodes(3, $$, $1, $2);
	}
	;
	
null_statements
	:{
		if(debug){
			printf("%s\t:\t",yytext);printf("null_statements\n");
		}
		$$ = newNode("null_statements");
		char buf[10] = "NULL";
		pNode p = newNode(buf);
		insertNodes(2, $$, p);
	}
	;
	
condition
	:	expression relational_op expression{
		if(debug){
			printf("%s\t:\t",yytext);printf("condition -> expression relational_op expression\n");
		}
		$$ = newNode("condition");
        insertNodes(4, $$, $1, $2, $3);
	}
	|	ODD expression{
		if(debug){
			printf("%s\t:\t",yytext);printf("condition -> ODD expression\n");
		}
		$$ = newNode("condition");
        insertNodes(3, $$, $1, $2);
	}
	;
	
expression
	:	item{
		if(debug){
			printf("%s\t:\t",yytext);printf("expression -> item\n");
		}
		$$ = newNode("expression");
        insertNodes(2, $$, $1);
	}
	|	add_sub_op item{
		if(debug){
			printf("%s\t:\t",yytext);printf("expression -> add_sub_op item\n");
		}
		$$ = newNode("expression");
		insertNodes(3, $$, $1, $2);
	}
	|	expression add_sub_op item{
		if(debug){
			printf("%s\t:\t",yytext);printf("expression -> expression add_sub_op item\n");
		}
		$$ = newNode("expression");
		insertNodes(4, $$, $1, $2, $3);
	}
	;
	
item
	:	factor{
		if(debug){
			printf("%s\t:\t",yytext);printf("item -> factor\n");
		}
		$$ = newNode("item");
        insertNodes(2, $$, $1);
	}
	|	item mul_div_op factor{
		if(debug){
			printf("%s\t:\t",yytext);printf("item -> item mul_div_op factor\n");
		}
		$$ = newNode("item");
		insertNodes(4, $$, $1, $2, $3);
	}
	;
	
factor
	:	ID{
		if(debug){
			printf("%s\t:\t",yytext);printf("factor -> ID\n");
		}
		$$ = newNode("factor");
        insertNodes(2, $$, $1);
	}
	|	INTERGER{
		if(debug){
			printf("%s\t:\t",yytext);printf("factor -> INTERGER\n");
		}
		$$ = newNode("factor");
		char buf[10];
		sprintf(buf, "%d", $1);
		pNode p = newNode(buf);
		$$->value = $1;
		insertNodes(2, $$, p);
	}
	|	LEFTBRACKET expression RIGHTBRACKET{
		if(debug){
			printf("%s\t:\t",yytext);printf("factor -> LEFTBRACKET expression RIGHTBRACKET\n");
		}
		$$ = newNode("factor");
		$$->value = $2->value;
		insertNodes(4, $$, $1, $2, $3);
	}
	;
	
add_sub_op
	:	PLUS{
		if(debug){
			printf("%s\t:\t",yytext);printf("add_sub_op -> PLUS\n");
		}
		$$ = newNode("add_sub_op");
		insertNodes(2, $$, $1);
	}
	|	MINUS{
		if(debug){
			printf("%s\t:\t",yytext);printf("add_sub_op -> MINUS\n");
		}
		$$ = newNode("add_sub_op");
		insertNodes(2, $$, $1);
	}
	;
	
mul_div_op
	:	MUL{
		if(debug){
			printf("%s\t:\t",yytext);printf("mul_div_op -> MUL\n");
		}
		$$ = newNode("mul_div_op");
		insertNodes(2, $$, $1);
	}
	|	DIV{
		if(debug){
			printf("%s\t:\t",yytext);printf("mul_div_op -> DIV\n");
		}
		$$ = newNode("mul_div_op");
		insertNodes(2, $$, $1);
	}
	;
	
relational_op
	:	EQ{
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> EQ\n");
		}
		$$ = newNode("relational_op");
		insertNodes(2, $$, $1);
	}
	|	NE{
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> NE\n");
		}
		$$ = newNode("relational_op");
		insertNodes(2, $$, $1);
	}
	|	LT{
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> LT\n");
		}
		$$ = newNode("relational_op");
		insertNodes(2, $$, $1);
	}
	|	LE{
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> LE\n");
		}
		$$ = newNode("relational_op");
		insertNodes(2, $$, $1);
	}
	|	GT{
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> GT\n");
		}
		$$ = newNode("relational_op");
		insertNodes(2, $$, $1);
	}
	|	GE{
		if(debug){
			printf("%s\t:\t",yytext);printf("relational_op -> GE\n");
		}
		$$ = newNode("relational_op");
		insertNodes(2, $$, $1);
	}
	;
	
conditional_statements
	:	IF condition THEN statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("conditional_statements -> IF	condition THEN statements\n");
		}
		$$ = newNode("conditional_statements");
		insertNodes(5, $$, $1, $2, $3, $4);
	}
	;
	
procedure_call_statements
	:	CALL ID{
		if(debug){
			printf("%s\t:\t",yytext);printf("procedure_call_statements -> CALL ID\n");
		}
		$$ = newNode("procedure_call_statements");
		insertNodes(3, $$, $1, $2);
	}
	;
	
loops_statements
	:	WHILE condition DO statements{
		if(debug){
			printf("%s\t:\t",yytext);printf("loops_statements -> WHILE condition DO statements\n");
		}
		$$ = newNode("loops_statements");
		insertNodes(5, $$, $1, $2, $3, $4);
	}
	;
	
read_statements
	:	read_pre RIGHTBRACKET{
		if(debug){
			printf("%s\t:\t",yytext);printf("read_statements -> read_pre RIGHTBRACKET\n");
		}
		$$ = newNode("read_statements");
		insertNodes(3, $$, $1, $2);
	}
	;
	
read_pre
	:	READ LEFTBRACKET ID{
		if(debug){
			printf("%s\t:\t",yytext);printf("read_pre -> READ LEFTBRACKET ID\n");
		}
		$$ = newNode("read_pre");
		insertNodes(4, $$, $1, $2, $3);
	}
	|	read_pre COMMA ID{
		if(debug){
			printf("%s\t:\t",yytext);printf("read_pre -> read_pre COMMA ID\n");
		}
		$$ = newNode("read_pre");
		insertNodes(4, $$, $1, $2, $3);
	}
	;
	
write_statements
	:	write_pre RIGHTBRACKET{
		if(debug){
			printf("%s\t:\t",yytext);printf("write_statements -> write_pre RIGHTBRACKET\n");
		}
		$$ = newNode("write_statements");
		insertNodes(3, $$, $1, $2);
	}
	;
	
write_pre
	:	WRITE LEFTBRACKET expression{
		if(debug){
			printf("%s\t:\t",yytext);printf("write_pre -> WRITE LEFTBRACKET expression\n");
		}
		$$ = newNode("write_pre");
		insertNodes(4, $$, $1, $2, $3);
	}
	|	write_pre COMMA expression{
		if(debug){
			printf("%s\t:\t",yytext);printf("write_pre -> write_pre COMMA expression\n");
		}
		$$ = newNode("write_pre");
		insertNodes(4, $$, $1, $2, $3);
	}
	;
%%

void yyerror(char* s){
    fprintf(stderr,"Line%d:%s", yylineno, s);
}