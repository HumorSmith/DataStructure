#include <stdio.h>
#include "link_list/array.h"
#include "link_list/single_linklist.h"
//void testArray() {
//    struct Array array;
//    init_arr(&array);
//    int first = 10;
//    add_element(&array, 1, &first);
//    int second = 11;
//    add_element(&array, 2, &second);
//    // tranverse(&array);
//    int third = 12;
//    add_element(&array, 1, &third);
//    tranverse(&array);
//    printf("\n");
//    int result;
//    del_element(&array, 1, &result);
//    printf("delete element is=%d\n",result);
//    tranverse(&array);
//
//}

void testSingleList() {
    PNode pHead;
    init_slist(&pHead);
    insert_element_slist(pHead, 1, 12);
    insert_element_slist(pHead, 2, 13);
    insert_element_slist(pHead, 3, 14);
    insert_element_slist(pHead, 4, 15);
    int deleteResult;
    //  del_element_slist(&head, 1, &deleteResult);
    del_element_slist(pHead, 4, &deleteResult);
    //printf("delete result is %d\n", deleteResult);

    print_slist(pHead);
    printf("\n");
    Node *pNewHead = reverse_slist_plus(pHead);
    print_slist(pNewHead);


}

int main() {
    testSingleList();
    return 0;
}