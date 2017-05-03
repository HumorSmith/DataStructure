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
    struct Node head;
    init_slist(&head);
    insert_element_slist(&head, 1, 12);
    insert_element_slist(&head, 2, 13);
    insert_element_slist(&head, 3, 14);
    insert_element_slist(&head, 4, 15);
    int deleteResult;
    //  del_element_slist(&head, 1, &deleteResult);
    del_element_slist(&head, 4, &deleteResult);
    //printf("delete result is %d\n", deleteResult);
    head.data = 100;
    print_slist(&head);
    printf("\n");
    Node *pNewHead = reverse_slist_plus(&head);
    print_slist(pNewHead);


}

int main() {
    testSingleList();
    return 0;
}