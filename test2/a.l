%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "tree.h"
	#include "b.tab.h"
	#define YYERROR_VERBOSE 1
%}

delim [" "\n\t]
whitespace {delim}+
interger ([0-9])+
identfier [A-Za-z]([A-Za-z]|[0-9])*
exp \/\*.*\*\/
%option yylineno
%option noyywrap
%%

{whitespace}	{ /* do nothing*/ }
{exp}			{ /* do nothing*/ }

"const"			{yylval.pnode = newNode(yytext);return(CONST);}
"var"			{yylval.pnode = newNode(yytext);return(VAR);}
"procedure"		{yylval.pnode = newNode(yytext);return(PROCEDURE);}
"begin"			{yylval.pnode = newNode(yytext);return(BEGIN_);}
"end"			{yylval.pnode = newNode(yytext);return(END);}
"odd"			{yylval.pnode = newNode(yytext);return(ODD);}
"if"			{yylval.pnode = newNode(yytext);return(IF);}
"then"			{yylval.pnode = newNode(yytext);return(THEN);}
"call"			{yylval.pnode = newNode(yytext);return(CALL);}
"while"			{yylval.pnode = newNode(yytext);return(WHILE);}
"do"			{yylval.pnode = newNode(yytext);return(DO);}
"read"			{yylval.pnode = newNode(yytext);return(READ);}
"write"			{yylval.pnode = newNode(yytext);return(WRITE);}

{identfier} 	{yylval.pnode = newNode(yytext);return(ID);}
{interger}  	{yylval.pnode = newNode(yytext);return(INTERGER);}

"+"				{yylval.pnode = newNode(yytext);return(PLUS);}
"-"				{yylval.pnode = newNode(yytext);return(MINUS);}
"*"				{yylval.pnode = newNode(yytext);return(MUL);}
"/"				{yylval.pnode = newNode(yytext);return(DIV);}

"<"				{yylval.pnode = newNode(yytext);return(LT);}
">"				{yylval.pnode = newNode(yytext);return(GT);}
"#"				{yylval.pnode = newNode(yytext);return(NE);}
"="				{yylval.pnode = newNode(yytext);return(EQ);}

"("				{yylval.pnode = newNode(yytext);return(LEFTBRACKET);}
")"				{yylval.pnode = newNode(yytext);return(RIGHTBRACKET);}
";"				{yylval.pnode = newNode(yytext);return(SEMICOLON);}
","				{yylval.pnode = newNode(yytext);return(COMMA);}
"."				{yylval.pnode = newNode(yytext);return(DOT);}

"<="			{yylval.pnode = newNode(yytext);return(LE);}
">="			{yylval.pnode = newNode(yytext);return(GE);}
":="			{yylval.pnode = newNode(yytext);return(ASSIGN);}

.				{printf("ERROR!Line:%d,unexpected symbol.\n",yylineno);exit(1);}

%%