/**
* @author Eavawu 
* @date 06/05/2017.
*/


#ifndef DATA_STRUCTURE_DOUBLE_LINKLIST_H
#define DATA_STRUCTURE_DOUBLE_LINKLIST_H

#include "../common.h"

void init_dlist(PDNode *pdNode);

bool insert_element_dlist(PDNode pHead, int pos, ELEMENT data);

bool del_element_dlist(PDNode pHead, int pos, ELEMENT *data);

int get_length_dlist(PDNode pHead);

void destroy_dlist(PDNode* pHead) ;

void print_dlist(PDNode pHead);


PDNode get_element_dlist(PDNode pHead, int pos);

#endif //DATA_STRUCTURE_DOUBLE_LINKLIST_H
