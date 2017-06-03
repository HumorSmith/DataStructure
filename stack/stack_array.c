//
// Created by HomorSmith on 2017/5/10.
//
#include "stack_array.h"

void init_stack_array(PSTACK_ARRAY *pstack_array) {
    *pstack_array = malloc(sizeof(STACK_ARRAY));
    if ((*pstack_array) == NULL) {
        exit(OVERFLOW);
    }
    (*pstack_array)->stack = malloc(sizeof(ELEMENT) * MAX_STACK_ARRAY_SIZE);
    (*pstack_array)->top = -1;
    (*pstack_array)->size = MAX_STACK_ARRAY_SIZE;
};

void push_stack_array(PSTACK_ARRAY pstack_array, ELEMENT *data) {
    if (is_full_stack_array(pstack_array)) {
        printf("array stack is full");
        return;
    }
    pstack_array->top++;
    pstack_array->stack[pstack_array->top] = *data;
};

void pop_stack_array(PSTACK_ARRAY pstack_array, ELEMENT *data) {
    if (is_empty_stack_array(pstack_array)) {
        printf("array stack is empty");
        return;
    }

    *data = pstack_array->stack[pstack_array->top];
    pstack_array->top--;
};

bool is_empty_stack_array(PSTACK_ARRAY pstack_array) {
    if (pstack_array->top == -1) {
        return true;
    }
    return false;
};


bool is_full_stack_array(PSTACK_ARRAY pstack_array) {
    return pstack_array->top == MAX_STACK_ARRAY_SIZE;
};

void print_stack_array(PSTACK_ARRAY pstack_array) {
    while (!is_empty_stack_array(pstack_array)) {
        int a;
        pop_stack_array(pstack_array, &a);
        printf("%d\n", a);
    }
};

void destroy_stack_array(PSTACK_ARRAY *pstack_array) {
    free((*pstack_array));
    free(((*pstack_array)->stack));
    printf("has been destroyed stack array");
}
