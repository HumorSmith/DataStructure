/**
* @author Eavawu 
* @date 06/05/2017.
*/

#include <math.h>
#include "double_linklist.h"

void init_dlist(PDNode *pHead) {
    *pHead = malloc(sizeof(DNode));
    if (*pHead == NULL) {/* 存儲分配失敗 */
        exit(OVERFLOW);
    }
    (*pHead)->next = NULL;
    (*pHead)->pre = NULL;
};


//add to list end
bool insert_element_dlist(PDNode pHead, int pos, ELEMENT data) {
    PDNode tempHead = pHead;
    if (pos < 1 || pos > get_length_dlist(tempHead)) {
        return false;
    }
    if (pos == 1) { //链表没有0位置.要找的是pos-1位置插入.所以pos==1特殊处理
        PDNode newNode = malloc(sizeof(DNode));
        newNode->next = tempHead->next;
        newNode->data = data;
        tempHead->next = newNode;
        newNode->pre = tempHead;
        return true;
    }
    tempHead = get_element_dlist(tempHead, pos - 1);
    PDNode newNode = malloc(sizeof(DNode));
    newNode->data = data;
    newNode->pre = tempHead;
    newNode->next = tempHead->next;
    tempHead->next = newNode;
    return true;
};


PDNode get_element_dlist(PDNode pHead, int pos) {
/* 在双向链表L中返回第i个元素的地址。i为0，返回头结点的地址。若第i个元素不存在，*/
    /* 返回NULL */
    int j;
    PDNode p = pHead; /* p指向头结点 */
    if (pos < 0 || pos > get_length_dlist(pHead)) /* i值不合法 */
        return NULL;
    for (j = 1; j <= pos; j++)
        p = p->next;
    return p;
}


bool del_element_dlist(PDNode pHead, int pos, ELEMENT *data) {
    PDNode tempHead = pHead;
    if (pos < 1 || pos > get_length_dlist(tempHead) + 1) {
        return false;
    }
    if (pos == 1) {
        PDNode freeNode = tempHead->next;
        if (freeNode == NULL) {
            return false;
        }
        freeNode->pre->next = freeNode->next;
        if (freeNode->next == NULL) {
            return false;
        }
        freeNode->next->pre = freeNode->pre;
        return true;
    }
    tempHead = get_element_dlist(tempHead, pos - 1);
    if (tempHead == NULL) {
        return false;
    }
    PDNode freeNode = tempHead->next;
    *data = freeNode->data;
    freeNode->pre->next = freeNode->next;
    if (freeNode->next != NULL) {
        freeNode->next->pre = tempHead;
    }

    free(freeNode);
    return true;
}


void destroy_dlist(PDNode *pHead) {
    PDNode q, p = (*pHead)->next; /* p指向第一个结点 */
    while (p != *pHead) /* p没到表头 */
    {
        q = p->next;
        free(p);
        p = q;
    }
    free(*pHead);
};

int get_length_dlist(PDNode pHead) {
    PDNode tempHead = pHead;
    int count = 0;
    while (tempHead != NULL) {
        tempHead = tempHead->next;
        count++;
    }
    return count;
};


void print_dlist(PDNode pHead) {
    PDNode tempNode = pHead->next;
    while (tempNode != NULL) {
        printf("%d", tempNode->data);
        tempNode = tempNode->next;

    }
};