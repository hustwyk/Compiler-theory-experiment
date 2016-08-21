#include "main.h"
extern int main(int argc, char *argv[]) {
    debug  = 1;
	willPrintTree = 1;
    yyparse();
    return 0;
}
