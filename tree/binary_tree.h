//
// Created by HomorSmith on 2017/9/13.
//

#ifndef DATA_STRUCTURE_BINARY_TREE_H
#define DATA_STRUCTURE_BINARY_TREE_H

#include <stdbool.h>
#include "../common.h"


void insert_binary_tree(PTreeNode *pTreeNode, ELEMENT data);

void delete_binary_tree();

bool is_empty_binary_tree(PTreeNode pTreeNode);

void middle_print_binary_tree(PTreeNode pTreeNode);

void left_print_binary(PTreeNode pTreeNode);

PTreeNode find_data_binary_tree(const PTreeNode pTreeNode, ELEMENT data);


TreeNode *create_binary_node(ELEMENT data);

#endif //DATA_STRUCTURE_BINARY_TREE_H
