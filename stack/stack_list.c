//
// Created by HomorSmith on 2017/5/10.
//


#include "stack_list.h"

void init_stack_list(PSTACK_LIST *pstack_list) {
    *pstack_list = malloc(sizeof(pstack_list));
    (*pstack_list)->pFront = NULL;
    (*pstack_list)->pTail = NULL;
};

void push_stack_list(PSTACK_LIST pstack_list, ELEMENT *data) {
    Node *pInsertNode = malloc(sizeof(Node));
    pInsertNode->data = *data;
    pInsertNode->next = pstack_list->pFront;
    pstack_list->pFront = pInsertNode;
};

void pop_stack_list(PSTACK_LIST pstack_list, ELEMENT *data) {
    PNode delNode = pstack_list->pFront;
    pstack_list->pFront = pstack_list->pFront->next;
    *data = delNode->data;
    free(delNode);
};

bool is_empty_stack_list(PSTACK_LIST pstack_list) {
    if (pstack_list->pFront == NULL) {
        return true;
    }
    return false;
};

void clear_stack_list(PSTACK_LIST pstack_list) {
    while (!is_empty_stack_list(pstack_list)) {
        int a = 0;
        pop_stack_list(pstack_list, &a);
    }
}


void destroy_stack_list(PSTACK_LIST *pstack_list) {
    clear_stack_list(*pstack_list);
    free(*pstack_list);
    printf("stack list has been destroyed");
}


void print_stack_list(PSTACK_LIST pstack_list) {
    while (!is_empty_stack_list(pstack_list)) {
        int a = 0;
        pop_stack_list(pstack_list, &a);
        printf("%d\n", a);
    }
};
