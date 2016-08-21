%{
	#include <stdio.h>
	int yyparse (void);
	void yyerror(char* s);
	extern char *yytext;
	extern int yylineno;
%}

%token INTERGER
%token ID
%token CONST VAR PROCEDUR BEGIN_ END ODD IF THEN CALL WHILE DO READ WRITE
%token LE_OP GE_OP ASSIGNMENT_OP


%%

program
	:	block '.'{
		printf("%s:\t",yytext);printf("program -> block\n");
	}
	;
	
block
	:	cons_des_section_ var_des_section_ prog_des_section_ statements{
		printf("%s:\t",yytext);printf("block -> [cons_des_section] [ar_des_section] [prog_des_section] statements\n");
	}
	;

cons_des_section_
	:	cons_des_section{
		printf("%s:\t",yytext);printf("cons_des_section_ -> cons_des_section\n");
	}
	|{
		printf("%s:\t",yytext);printf("cons_des_section_ -> NULL\n");
	}
	;
	
var_des_section_
	:	var_des_section{
		printf("%s:\t",yytext);printf("var_des_section_ -> var_des_section\n");
	}
	|{
		printf("%s:\t",yytext);printf("var_des_section_ -> NULL\n");
	}
	;
	
prog_des_section_
	:	prog_des_section{
		printf("%s:\t",yytext);printf("prog_des_section_ -> prog_des_section\n");
	}
	|{
		printf("%s:\t",yytext);printf("prog_des_section_ -> NULL\n");
	}
	;
	
cons_des_section
	:	CONST cons_def cons_def_re ';'{
		printf("%s:\t",yytext);printf("cons_des_section -> CONST cons_def cons_def_re ';'\n");
	}
	;
	
cons_def
	:	ID '=' INTERGER{
		printf("%s:\t",yytext);printf("cons_def -> ID '=' INTERGER\n");
	}
	;
	
cons_def_re
	:	',' cons_def cons_def_re{
		printf("%s:\t",yytext);printf("cons_def_re -> ',' cons_def cons_def_re\n");
	}
	|{
		printf("%s:\t",yytext);printf("cons_def_re -> NULL\n");
	}
	;
	
var_des_section
	:	VAR ID id_re ';'{
		printf("%s:\t",yytext);printf("var_des_section -> VAR ID id_re ';'\n");
	}
	;
	
id_re
	:	',' ID id_re{
		printf("%s:\t",yytext);printf("id_re -> ',' ID id_re\n");
	}
	|{
		printf("%s:\t",yytext);printf("id_re -> NULL\n");
	}
	;
	
prog_des_section
	:	prog_header block prog_des_section_re ';'{
		printf("%s:\t",yytext);printf("prog_des_section -> prog_header block prog_des_section_re ';'\n");
	}
	;
	
prog_des_section_re
	:	';' prog_des_section prog_des_section_re{
		printf("%s:\t",yytext);printf("prog_des_section_re -> ';' prog_des_section prog_des_section_re\n");
	}
	|{
		printf("%s:\t",yytext);printf("prog_des_section_re -> NULL\n");
	}
	;
	
prog_header
	:	PROCEDUR ID ';'{
		printf("%s:\t",yytext);printf("prog_header -> PROCEDUR ID ';'\n");
	}
	;
	
statements
	:	assignment_statements{
		printf("%s:\t",yytext);printf("statements -> assignment_statements\n");
	}
	|	conditional_statements{
		printf("%s:\t",yytext);printf("statements -> conditional_statements\n");
	}
	|	loops_statements{
		printf("%s:\t",yytext);printf("statements -> loops_statements\n");
	}
	|	procedure_call_statements{
		printf("%s:\t",yytext);printf("statements -> procedure_call_statements\n");
	}
	|	read_statements{
		printf("%s:\t",yytext);printf("statements -> read_statements\n");
	}
	|	write_statements{
		printf("%s:\t",yytext);printf("statements -> write_statements\n");
	}
	|	compound_statements{
		printf("%s:\t",yytext);printf("statements -> compound_statements\n");
	}
	|	null_statements{
		printf("%s:\t",yytext);printf("statements -> null_statements\n");
	}
	;
	
assignment_statements
	:	ID ASSIGNMENT_OP expression{
		printf("%s:\t",yytext);printf("assignment_statements -> ID ASSIGNMENT_OP expression\n");
	}
	;
	
compound_statements
	:	BEGIN_ statements statements_re END{
		printf("%s:\t",yytext);printf("compound_statements -> BEGIN_ statements statements_re END\n");
	}
	;
	
statements_re
	:	';' statements statements_re{
		printf("%s:\t",yytext);printf("statements_re -> ';' statements statements_re\n");
	}
	|{
		printf("%s:\t",yytext);printf("statements_re -> NULL\n");
	}
	;
	
null_statements
	:{
		printf("%s:\t",yytext);printf("null_statements\n");
	}
	;
	
condition
	:	expression relational_op expression{
		printf("%s:\t",yytext);printf("condition -> expression relational_op expression\n");
	}
	|	ODD expression{
		printf("%s:\t",yytext);printf("condition -> ODD expression\n");
	}
	;
	
expression
	:	add_sub_op_ item expression_re{
		printf("%s:\t",yytext);printf("expression -> add_sub_op_ item expression_re\n");
	}
	;
	
add_sub_op_
	:	add_sub_op{
		printf("%s:\t",yytext);printf("add_sub_op_ -> add_sub_op\n");
	}
	|{
		printf("%s:\t",yytext);printf("add_sub_op_ -> NULL\n");
	}
	;
	
expression_re
	:	add_sub_op_ item expression_re{
		printf("%s:\t",yytext);printf("expression_re -> add_sub_op_ item expression_re\n");
	}
	|{
		printf("%s:\t",yytext);printf("expression_re -> NULL\n");
	}
	;
	
item
	:	factor factor_re{
		printf("%s:\t",yytext);printf("item -> factor factor_re\n");
	}
	;
	
factor_re
	:	mul_div_op factor factor_re{
		printf("%s:\t",yytext);printf("factor_re -> mul_div_op factor factor_re\n");
	}
	|{
		printf("%s:\t",yytext);printf("factor_re -> NULL\n");
	}
	;
	
factor
	:	ID{
		printf("%s:\t",yytext);printf("factor -> ID\n");
	}
	|	INTERGER{
		printf("%s:\t",yytext);printf("factor -> INTERGER\n");
	}
	|	'(' expression ')'{
		printf("%s:\t",yytext);printf("factor -> '(' expression ')'\n");
	}
	;
	
add_sub_op
	:	'+'{
		printf("%s:\t",yytext);printf("add_sub_op -> '+'\n");
	}
	|	'-'{
		printf("%s:\t",yytext);printf("add_sub_op -> '-'\n");
	}
	;
	
mul_div_op
	:	'*'{
		printf("%s:\t",yytext);printf("mul_div_op -> '*'\n");
	}
	|	'/'{
		printf("%s:\t",yytext);printf("mul_div_op -> '/'\n");
	}
	;
	
relational_op
	:	'='{
		printf("%s:\t",yytext);printf("relational_op -> '='\n");
	}
	|	'#'{
		printf("%s:\t",yytext);printf("relational_op -> '#'\n");
	}
	|	'<'{
		printf("%s:\t",yytext);printf("relational_op -> '<'\n");
	}
	|	LE_OP{
		printf("%s:\t",yytext);printf("relational_op -> LE_OP\n");
	}
	|	'>'{
		printf("%s:\t",yytext);printf("relational_op -> '>'\n");
	}
	|	GE_OP{
		printf("%s:\t",yytext);printf("relational_op -> GE_OP\n");
	}
	;
	
conditional_statements
	:	IF	condition THEN statements{
		printf("%s:\t",yytext);printf("conditional_statements -> IF	condition THEN statements\n");
	}
	;
	
procedure_call_statements
	:	CALL ID{
		printf("%s:\t",yytext);printf("procedure_call_statements -> CALL ID\n");
	}
	;
	
loops_statements
	:	WHILE condition DO statements{
		printf("%s:\t",yytext);printf("loops_statements -> WHILE condition DO statements\n");
	}
	;
	
read_statements
	:	READ '(' ID id_re ')'{
		printf("%s:\t",yytext);printf("read_statements -> READ '(' ID id_re ')'\n");
	}
	;
	
write_statements
	:	WRITE '(' expression expression_re ')'{
		printf("%s:\t",yytext);printf("write_statements -> WRITE '(' expression expression_re ')'\n");
	}
	;
%%
int main(){
	yyparse();
	return 0;
}
void yyerror(char* s)
{
    fprintf(stderr,"line%d:%s",yylineno,s);
}