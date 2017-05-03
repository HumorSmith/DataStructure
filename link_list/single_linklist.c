/**
* @author Eavawu 
* @date 01/05/2017.
*/
#include <stdlib.h>
#include <math.h>
#include "single_linklist.h"

void init_slist(struct Node *pHead) {
    pHead = malloc(sizeof(Node));
    if (!pHead) /* 存儲分配失敗 */
        exit(OVERFLOW);
    pHead->next = NULL;
};


void clear_slist(struct Node *pHead) {
    struct Node *tempNode = pHead;
    while (tempNode) {
        struct Node *freeNode = tempNode;
        tempNode = tempNode->next;
        free(freeNode);
    }
}

bool is_emppy_slist(struct Node *pHead) {
    return pHead->next == NULL;
}


//add to list end
bool insert_element_slist(struct Node *pHead, int pos, ELEMENT data) {
    struct Node *tempNode = pHead;
    if(pHead==NULL){
        return false;
    }
    if (pos == 1) { //链表没有0位置.要找的是pos-1位置插入.所以pos-1特殊处理
        struct Node *newNode = malloc(sizeof(struct Node));
        newNode->next = tempNode->next;
        newNode->data = data;
        tempNode->next = newNode;
        return true;
    }
    int count = 0;

    while (tempNode->next!=NULL && count < pos - 1) {
        tempNode = tempNode->next;
        count++;
    }
    if (!tempNode || count > pos - 1) {
        return false;
    }
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = tempNode->next;
    tempNode->next = newNode;
    return true;
};


bool del_element_slist(struct Node *pHead, int pos, ELEMENT *pData) {
    if(pHead==NULL){
        printf("del_element_slist head is null");
        return false;
    }
    if (pos == 1) {
            struct Node *freeNode = pHead->next;

            if(freeNode==NULL){
                printf("del node  is null when pos = 1");
                return false;
            }
            pHead->next = freeNode->next;
            *pData = freeNode->data;
            free(freeNode);
            freeNode = NULL;
            return true;

    }

    //找pos-1个节点
    int count = 0;
    struct Node *tempNode = pHead;
    while (tempNode->next!=NULL && count < pos - 1) {
        tempNode = tempNode->next;
        count++;
    }
    if (!tempNode || count > pos - 1) {
        printf("del node  is null or pos invalied");
        return false;
    }

    //转移指针
    struct Node * freeNode = tempNode->next;
    if(freeNode==NULL){
        return false;
    }
    tempNode->next = tempNode->next->next;
    *pData = freeNode->data;
    //释放
    free(freeNode);
    return true;
}


bool get_element_slist(struct Node *pHead, int pos, ELEMENT *pData) {
    int count = 0;
    struct Node *tempNode = pHead;
    while (tempNode->next && count < pos - 1) {
        tempNode = tempNode->next;
        count++;
    }
    *pData = tempNode->data;
    return true;
}


void destroy_slist(struct Node *pHead) {
    clear_slist(pHead);
    free(pHead);
};

void print_slist(struct Node *pHead) {
    struct Node *tempNode = pHead;
    while (tempNode->next) {
        tempNode = tempNode->next;
        printf("%d\t", tempNode->data);
    }
};