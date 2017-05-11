//
// Created by HomorSmith on 2017/5/10.
//
#include <math.h>
#include "queue_array.h"

void init_queue_array(PQueueArr *pQueueArr) {
    *pQueueArr = malloc(sizeof(QueueArr));
    if (*pQueueArr == NULL) {
        exit(OVERFLOW);
    }
    (*pQueueArr)->base = malloc(sizeof(MAX_QUEUE_SIZE * sizeof(QueueArr)));
    (*pQueueArr)->front = (*pQueueArr)->rear = 0;
};

void destroy_queue_array(PQueueArr pQueueArr) {
    free(pQueueArr->base);
    pQueueArr->front = pQueueArr->rear = 0;
    free(pQueueArr);
};

void clear_queue_array(PQueueArr pQueueArr) {
    pQueueArr->front = pQueueArr->rear = 0;
}

bool isempty_queue_array(PQueueArr pQueueArr) {
    if (pQueueArr->front == pQueueArr->rear) /* 队列空的标志 */
        return true;
    else
        return false;
};

//在这里.我们最后一个元素为空.
bool isfull_queue_array(PQueueArr pQueueArr) {
    if ((pQueueArr->rear + 1) % MAX_QUEUE_SIZE == (pQueueArr->front)) {
        return true;
    } else {
        return false;
    }
};

bool enqueue_array(PQueueArr pQueueArr, ELEMENT data) {
    if (isfull_queue_array(pQueueArr)) {
        return false;
    }
    pQueueArr->rear = (pQueueArr->rear + 1) % MAX_QUEUE_SIZE;
    pQueueArr->base[pQueueArr->rear] = data;
};

bool dequeue_array(PQueueArr pQueueArr, ELEMENT *data) {
    if (isempty_queue_array(pQueueArr)) {
        return false;
    }
    *data = pQueueArr->base[pQueueArr->front + 1];
    pQueueArr->front = (pQueueArr->front + 1) % MAX_QUEUE_SIZE;
    return true;

}


void print_queue_array(PQueueArr pQueueArr) {
    if (isempty_queue_array(pQueueArr)) {
        return;
    }
    int i = pQueueArr->front;
    while (i != pQueueArr->rear) {
        printf("%d\t", pQueueArr->base[i + 1]);
        i++;
        i = i % MAX_QUEUE_SIZE;
    }
};
