#include "tree.h"

pNode newNode(char *string) {
    pNode p = (pNode)malloc(sizeof(Node));
    if(p == NULL) {
        printf("Error: malloc failed!");
        exit(1);
    }
    p->string = (char*)malloc(strlen(string) + 1);
    if(p->string == NULL) {
        printf("Error: malloc failed!");
        exit(1);
    }
    strcpy(p->string, string);
    p->string[strlen(string)] = '\0';
    p->subNodes = NULL;
    p->value = 0;
    p->nChild = 0;
    return p;
}

void insertNodes(int n, ...) {
    va_list vap;
    va_start(vap, n);     //指向可变参数表中的第一个参数
    pNode parent = va_arg(vap, pNode);
    parent->subNodes = (pNode*)malloc(sizeof(pNode) * (n-1));
    if(parent->subNodes == NULL) {
        printf("Error: malloc failed!");
        exit(1);
    }
    int i;
    for(i=0; i<n-1; i++) {
        parent->subNodes[i] = va_arg(vap, pNode);
    }
    parent->nChild = n-1;
}

void printTree(pNode root, int level) {
    if(root == NULL) {
        return;
    }
    int nSpace = level * 4;
    while(nSpace--) {
        printf(" ");
    }
    printf("%s\n", root->string);
    int i=0;
    for(; i<root->nChild; i++) {
        printTree(root->subNodes[i], level + 1);
    }
}

