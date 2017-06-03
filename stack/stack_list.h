//
// Created by HomorSmith on 2017/5/10.
//

#ifndef DATA_STRUCTURE_STACK_LIST_H
#define DATA_STRUCTURE_STACK_LIST_H

#include "../common.h"

typedef struct STACK_LIST {
    Node *pFront;
    Node *pTail;
} *PSTACK_LIST, STACK_LIST;

void init_stack_list(PSTACK_LIST *pstack_list);

void push_stack_list(PSTACK_LIST pstack_list, ELEMENT *data);

void pop_stack_list(PSTACK_LIST pstack_list, ELEMENT *data);

bool is_empty_stack_list(PSTACK_LIST pstack_list);

void clear_stack_list(PSTACK_LIST pstack_list);

void destroy_stack_list(PSTACK_LIST *pstack_list);

void print_stack_list(PSTACK_LIST pstack_list);

#endif //DATA_STRUCTURE_STACK_LIST_H
