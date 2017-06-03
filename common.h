//
// Created by Eavawu on 30/04/2017.
//

#ifndef DATA_STRUCTURE_COMMON_H
#define DATA_STRUCTURE_COMMON_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#define ELEMENT int


typedef struct Node {
    struct Node *next;
    ELEMENT data;
} Node, *PNode;

typedef struct DNode {
    struct DNode *next;
    struct DNode *pre;
    ELEMENT data;
} DNode, *PDNode;
#endif //DATA_STRUCTURE_COMMON_H
