/**
* @author Eavawu 
* @date 01/05/2017.
*/


#ifndef DATA_URE_SINGLE_LINKLIST_H
#define DATA_URE_SINGLE_LINKLIST_H

#include "../common.h"


void init_slist(PNode *pHead);


bool is_emppy_slist(Node *pHead);

bool insert_element_slist(Node *pHead, int pos, ELEMENT data);

bool del_element_slist(Node *pHead, int pos, ELEMENT *pData);

PNode get_element_slist(PNode pHead, int pos);

void clear_slist(Node *pHead);

void destroy_slist(Node *pHead);

int get_length_slist(Node *pHead);

void print_slist(Node *pHead);

Node *reverse_slist(Node *pHead);

Node *reverse_slist_plus(Node *pHead);

#endif //DATA_URE_SINGLE_LINKLIST_H
