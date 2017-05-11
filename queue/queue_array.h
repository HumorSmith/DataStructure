//
// Created by HomorSmith on 2017/5/10.
//

#ifndef DATA_STRUCTURE_QUEUE_ARRAY_H
#define DATA_STRUCTURE_QUEUE_ARRAY_H

#include "../common.h"

#define MAX_QUEUE_SIZE  10
typedef struct QueueArr {
    ELEMENT *base;
    int front;
    int rear;
} QueueArr, *PQueueArr;

void init_queue_array(PQueueArr *pQueueArr);

void destroy_queue_array(PQueueArr pQueueArr);

void clear_queue_array(PQueueArr pQueueArr);

bool isempty_queue_array(PQueueArr pQueueArr);

bool isfull_queue_array(PQueueArr pQueueArr);

bool enqueue_array(PQueueArr pQueueArr, ELEMENT data);

bool dequeue_array(PQueueArr pQueueArr, ELEMENT *data);

void print_queue_array(PQueueArr pQueueArr);

#endif //DATA_STRUCTURE_QUEUE_ARRAY_H
