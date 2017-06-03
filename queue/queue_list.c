#include "queue_list.h"

//
// Created by HomorSmith on 2017/5/10.
//
void init_queue_list(PQUEUE_LIST *pqueue_list) {
    *pqueue_list = malloc(sizeof(QUEUE_LIST));
    if ((*pqueue_list) == NULL) {
        exit(OVERFLOW);
    }
    (*pqueue_list)->pFront = NULL;
    (*pqueue_list)->pTail = NULL;
};

void en_quque_list(PQUEUE_LIST pqueue_list, ELEMENT *data) {
    Node *pNewNode = malloc(sizeof(QUEUE_LIST));
    pNewNode->data = *data;
    pNewNode->next = NULL;
    if (pqueue_list->pTail == NULL) {
        pqueue_list->pTail = pNewNode;
        pqueue_list->pFront = pNewNode;
        return;
    }
    pqueue_list->pTail->next = pNewNode;
    pqueue_list->pTail = pNewNode;
};

void de_queue_list(PQUEUE_LIST pqueue_list, ELEMENT *data) {
    if (is_empty_queue_list(pqueue_list)) {
        printf("dequeue failed. queue is empty");
        return;
    }
    Node *delnode = pqueue_list->pFront;
    pqueue_list->pFront = pqueue_list->pFront->next;
    *data = delnode->data;
    free(delnode);
};


bool is_empty_queue_list(PQUEUE_LIST pqueue_list) {
    if (pqueue_list->pFront == NULL) {
        return true;
    }
    return false;
};

void clear_queue_list(PQUEUE_LIST pqueue_list) {
    while (!is_empty_queue_list(pqueue_list)) {
        int a = 0;
        de_queue_list(pqueue_list, &a);
    }
};

void destroy_queue_list(PQUEUE_LIST *pqueue_list) {
    clear_queue_list(*pqueue_list);
    free(*pqueue_list);
    printf("queue list has been destroy");
}

void print_queue_list(PQUEUE_LIST pqueue_list) {
    while (!is_empty_queue_list(pqueue_list)) {
        int a = 0;
        de_queue_list(pqueue_list, &a);
        printf("%d\n", a);
    }
};
