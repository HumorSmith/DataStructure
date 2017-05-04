/**
* @author Eavawu 
* @date 01/05/2017.
*/
#include <stdlib.h>
#include <math.h>
#include "single_linklist.h"

void init_slist(PNode *pHead) {
    *pHead = malloc(sizeof(Node));
    if (*pHead == NULL) /* 存儲分配失敗 */
        exit(OVERFLOW);
    (*pHead)->next = NULL;
};


void clear_slist(Node *pHead) {
    Node *tempNode = pHead;
    while (tempNode) {
        Node *freeNode = tempNode;
        tempNode = tempNode->next;
        free(freeNode);
    }
}

bool is_emppy_slist(Node *pHead) {
    return pHead->next == NULL;
}


//add to list end
bool insert_element_slist(Node *pHead, int pos, ELEMENT data) {
    Node *tempNode = pHead;
    if (pHead == NULL) {
        return false;
    }
    if (pos == 1) { //链表没有0位置.要找的是pos-1位置插入.所以pos-1特殊处理
        Node *newNode = malloc(sizeof(Node));
        newNode->next = tempNode->next;
        newNode->data = data;
        tempNode->next = newNode;
        return true;
    }
    int count = 0;

    while (tempNode->next != NULL && count < pos - 1) {
        tempNode = tempNode->next;
        count++;
    }
    if (!tempNode || count > pos - 1) {
        return false;
    }
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = tempNode->next;
    tempNode->next = newNode;
    return true;
};


bool del_element_slist(Node *pHead, int pos, ELEMENT *pData) {
    if (pHead == NULL) {
        printf("del_element_slist head is null");
        return false;
    }
    if (pos == 1) {
        Node *freeNode = pHead->next;

        if (freeNode == NULL) {
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
    Node *tempNode = pHead;
    while (tempNode->next != NULL && count < pos - 1) {
        tempNode = tempNode->next;
        count++;
    }
    if (!tempNode || count > pos - 1) {
        printf("del node  is null or pos invalied");
        return false;
    }

    //转移指针
    Node *freeNode = tempNode->next;
    if (freeNode == NULL) {
        return false;
    }
    tempNode->next = tempNode->next->next;
    *pData = freeNode->data;
    //释放
    free(freeNode);
    return true;
}


bool get_element_slist(Node *pHead, int pos, ELEMENT *pData) {
    int count = 0;
    Node *tempNode = pHead;
    while (tempNode->next && count < pos - 1) {
        tempNode = tempNode->next;
        count++;
    }
    *pData = tempNode->data;
    return true;
}


void destroy_slist(Node *pHead) {
    clear_slist(pHead);
    free(pHead);
};

void print_slist(Node *pHead) {
    Node *tempNode = pHead;
    while (tempNode->next) {
        tempNode = tempNode->next;
        printf("%d\t", tempNode->data);
    }
};


//反转链表   HEAD->A->B->C     C->B->A->HEAD此时 C变成HEAD.
// HEAD数据不计入链表.原来的HEAD没有数据.此时变成了数据位.
Node *reverse_slist(Node *pHead) {
    if (!pHead) {
        return NULL;
    }
    Node *pNow = pHead;  //逻辑的当前节点
    Node *pPre = NULL;  //逻辑的上一个节点
    Node *pNext = NULL;//逻辑的下一个节点
    Node *pTail = NULL;//用来保存最后一个反转的尾指针
    while (pNow != NULL) {
        pNext = pNow->next; //得到下一个节点
        if (pNext == NULL) { //如果为空.证明pNow是tail
            pTail = pNow;
        }
        pNow->next = pPre; //当前节点指向前一个节点.真正反转的操作.只有这一步.其余的都是循环的赋值
        pPre = pNow; //把pNow赋值给pPre.当成普通赋值即可.为了下一次pNow->next = pPre;做准备
        pNow = pNext;//当成普通变量赋值.pNext = pNow->next; //循环遍历链表
    }
    pHead->next = NULL;

    return pTail;

};

//优化反转链表   HEAD->A->B->C     C->B->A->HEAD此时.
// new一个Head   变成  newHead->C->B->A->HEAD
// 移除 newHead->C->B->A没有数据丢失
Node *reverse_slist_plus(Node *pHead) {
    if (!pHead) {
        return NULL;
    }

    PNode pHeadNext = pHead->next;

    Node *pNow = pHead;  //逻辑的当前节点
    Node *pPre = NULL;  //逻辑的上一个节点
    Node *pNext = NULL;//逻辑的下一个节点
    Node *pTail = NULL;//用来保存最后一个反转的尾指针
    while (pNow != NULL) {
        pNext = pNow->next; //得到下一个节点.循环递进
        if (pNext == NULL) { //如果为空.证明pNow是tail
            pTail = pNow;
        }
        pNow->next = pPre; //当前节点指向前一个节点.真正反转的操作.只有这一步.其余的都是循环的赋值
        pPre = pNow; //简单的变量赋值
        pNow = pNext;//简单的变量赋值
    }

    //把头节点从链表中断开
    pHeadNext->next = NULL;

    //free头节点
    free(pHead);
    pHead = NULL;

    //malloc新的头节点
    PNode pNewHead = malloc(sizeof(Node));
    pNewHead->next = pTail;
    return pNewHead;

};