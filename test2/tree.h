#ifndef TREE_H_
#define TREE_H_

#include "base.h"

typedef struct Node {
    char *string;
    struct Node **subNodes;
    int nChild;
    int value;
}Node, *pNode;

pNode newNode(char *);
void insertNodes(int n, ...);
void printTree(pNode, int);

#endif
