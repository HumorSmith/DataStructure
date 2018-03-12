//
// Created by HomorSmith on 2017/9/13.
#include <assert.h>
#include <mem.h>
#include "../common.h"


void insert_binary_tree(PTreeNode *pTreeNode, ELEMENT data) {

};

void delete_binary_tree() {

};

bool is_empty_binary_tree(PTreeNode pTreeNode) {
    return false;
};

void middle_print_binary_tree(PTreeNode pTreeNode) {

};

void left_print_binary(PTreeNode pTreeNode) {

};


PTreeNode find_data_binary_tree(const PTreeNode pTreeNode, ELEMENT data){
    if (NULL==pTreeNode){
        return NULL;
    }
    if (data == pTreeNode->data){
        return (TreeNode*)pTreeNode;
    }else if(data < pTreeNode->data){
        return find_data_binary_tree(pTreeNode->left,data);
    }else{
        return find_data_binary_tree(pTreeNode->right,data);
    }
};

TreeNode *create_binary_node(ELEMENT data) {
    PTreeNode pTreeNode = NULL;
    pTreeNode = (TreeNode *) malloc(sizeof(TreeNode));
    assert(pTreeNode != NULL);
    memset(pTreeNode, 0, sizeof(TreeNode));
    pTreeNode->data = data;
    return pTreeNode;
};



