//
// Created by HomorSmith on 2018/3/8.
//
#include <mem.h>
#include <afxres.h>
#include "../common.h"

int hash(HASH_KEY key) {
    return key % 10;
};

HashMap *create_hash_table() {
    HashMap *hashTable = malloc(sizeof(HashMap));
    memset(hashTable, 0, sizeof(hashTable));
    return hashTable;
};

HashNode *hash_get(HashMap *pTable, HASH_KEY key) {
    HashNode *hashNode;
    if (pTable == NULL) {
        return NULL;
    }
    if (NULL == (hashNode = pTable->value[hash(key)])) {
        return NULL;
    };
    return pTable->value[hash(key)];

};

void hash_put(HashMap *pTable, HASH_KEY key, HASH_VALUE value) {
    HashNode *hashNode = malloc(sizeof(HashNode));
    hashNode->value = value;
    hashNode->key = key;
    pTable->value[hash(key)] = hashNode;
};

HashNode *hash_remove(HashMap *pTable, HASH_KEY key) {
    HashNode *hashNode = pTable->value[hash(key)];
    hashNode->value = HASH_DEFAULT;
};


