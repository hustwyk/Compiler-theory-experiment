%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "b.tab.h"
%} 

delim [" "\n\t] 
whitespace {delim}+ 
operator \+|-|\*|\/|:=|>=|<=|#|=
reservedWord [const|var|procedure|begin|end|if|then|while|do|read|call|write|writeln]
delimiter [,\.;\(\)]
constant ([0-9])+
identfier [A-Za-z]([A-Za-z][0-9])*
%% 

{whitespace} { /* do    nothing*/ }

"const"   {return(CONST);}
"var"     {return(VAR);}
"procedur"{return(PROCEDUR);}
"begin"   {return(BEGIN);}
"end"     {return(END);}
"odd"     {return(ODD);}
"if"      {return(IF);}
"then"    {return(THEN);}
"call"    {return(CALL);}
"while"   {return(WHILE);}
"do"      {return(DO);}
"read"    {return(READ);}
"write"   {return(WRITE);}

{identfier} {return(ID);}
{constant}  {return(INTERGER);}
{operator}	{return *yytext;}
{delimiter}	{return *yytext;}


%%
int yywrap(void){
return 1;
}