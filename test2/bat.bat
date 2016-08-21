bison -d b.y
flex a.l
gcc lex.yy.c b.tab.c main.h main.c tree.h tree.c
a.exe < example.txt
pause