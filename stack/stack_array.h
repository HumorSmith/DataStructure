//
// Created by HomorSmith on 2017/5/10.
//

#ifndef DATA_STRUCTURE_STACK_ARRAY_H
#define DATA_STRUCTURE_STACK_ARRAY_H

#include "../common.h"

#define MAX_STACK_ARRAY_SIZE  15
typedef struct STACK_ARRAY {
    ELEMENT *stack;
    int top;
    int size;
} *PSTACK_ARRAY, STACK_ARRAY;

void init_stack_array(PSTACK_ARRAY *pstack_array);

void push_stack_array(PSTACK_ARRAY pstack_array, ELEMENT *data);

void pop_stack_array(PSTACK_ARRAY pstack_array, ELEMENT *data);

bool is_empty_stack_array(PSTACK_ARRAY pstack_array);

bool is_full_stack_array(PSTACK_ARRAY pstack_array);

void print_stack_array(PSTACK_ARRAY pstack_array);


void destroy_stack_array(PSTACK_ARRAY *pstack_array);

#endif //DATA_STRUCTURE_STACK_ARRAY_H
