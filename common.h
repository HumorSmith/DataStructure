//
// Created by Eavawu on 30/04/2017.
//

#ifndef DATA_STRUCTURE_COMMON_H
#define DATA_STRUCTURE_COMMON_H
#include <stdio.h>
#include <stdbool.h>
#define ELEMENT int


typedef struct Node {
    struct Node *next;
    ELEMENT data;
} Node,*PNode;


#endif //DATA_STRUCTURE_COMMON_H
