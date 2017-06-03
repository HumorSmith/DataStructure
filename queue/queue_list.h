//
// Created by HomorSmith on 2017/5/10.
//

#ifndef DATA_STRUCTURE_QUEUE_LIST_H
#define DATA_STRUCTURE_QUEUE_LIST_H

#include "../common.h"

typedef struct QUEUE_LIST {
    Node *pFront;
    Node *pTail;
} *PQUEUE_LIST, QUEUE_LIST;


void init_queue_list(PQUEUE_LIST *pqueue_list);

void en_quque_list(PQUEUE_LIST pqueue_list, ELEMENT *data);

void de_queue_list(PQUEUE_LIST pqueue_list, ELEMENT *data);

bool is_empty_queue_list(PQUEUE_LIST pqueue_list);

void clear_queue_list(PQUEUE_LIST pqueue_list);

void destroy_queue_list(PQUEUE_LIST *pqueue_list);

void print_queue_list(PQUEUE_LIST pqueue_list);

#endif //DATA_STRUCTURE_QUEUE_LIST_H
