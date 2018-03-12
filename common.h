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
#define HASH_KEY int
#define HASH_VALUE int


typedef struct Node {
    struct Node *next;
    ELEMENT data;
} Node, *PNode;

typedef struct DNode {
    struct DNode *next;
    struct DNode *pre;
    ELEMENT data;
} DNode, *PDNode;


typedef struct TreeNode{
    struct TreeNode *left;
    struct TreeNode *right;
    struct TreeNode *parent;
    ELEMENT data;
}TreeNode,*PTreeNode;

typedef struct HashNode{
    ELEMENT *data;
    HASH_KEY key;
    struct HashNode* next;
}HashNode;

typedef struct HashMap
{
    HashNode* value[15];
}HashMap;

#endif //DATA_STRUCTURE_COMMON_H
