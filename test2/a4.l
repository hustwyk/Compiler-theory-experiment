%{
	#include <stdio.h>
	#include <stdlib.h> 
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

"const"   {printf("CONST ");}
"var"     {printf("VAR ");}
"procedur"{printf("PROCEDUR ");}
"begin"   {printf("BEGIN ");}
"end"     {printf("END ");}
"odd"     {printf("ODD ");}
"if"      {printf("IF ");}
"then"    {printf("THEN ");}
"call"    {printf("CALL ");}
"while"   {printf("WHILE ");}
"do"      {printf("DO ");}
"read"    {printf("READ ");}
"write"   {printf("WRITE ");}

{identfier} {printf("ID");}
{constant}  {printf("INTERGER");}

"+"       {printf("+ ");}
"-"       {printf("- ");}
"*"       {printf("* ");}
"/"       {printf("/ ");}

"<"       {printf("< ");}
"<="      {printf("<= ");}
">"       {printf("> ");}
">="      {printf(">= ");}
"#"       {printf("# ");}
"="       {printf("= ");}
":="      {printf(":= ");}

"("       {printf("(");}
")"       {printf(")");}
";"       {printf(";");}
","       {printf(",");}
"."       {printf(".");}

%%