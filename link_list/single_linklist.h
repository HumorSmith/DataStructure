/**
* @author Eavawu 
* @date 01/05/2017.
*/


#ifndef DATA_STRUCTURE_SINGLE_LINKLIST_H
#define DATA_STRUCTURE_SINGLE_LINKLIST_H

#include "../common.h"


void init_slist(struct Node *pHead);


bool is_emppy_slist(struct Node *pHead);

bool insert_element_slist(struct Node *pHead, int pos, ELEMENT data);

bool del_element_slist(struct Node *pHead, int pos, ELEMENT *pData);

bool get_element_slist(struct Node *pHead, int pos,ELEMENT *pData);

void clear_slist(struct Node *pHead);

void destroy_slist(struct Node *pHead);

void get_length_slist(struct Node *pHead);

void print_slist(struct Node * pHead);


#endif //DATA_STRUCTURE_SINGLE_LINKLIST_H
