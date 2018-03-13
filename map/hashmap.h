//
// Created by HomorSmith on 2018/3/8.
//

#ifndef DATA_STRUCTURE_MAP_H
#define DATA_STRUCTURE_MAP_H

#include <afxres.h>
#include "../common.h"

HashMap *create_hash_table();

HashNode *hash_get(HashMap *pTable, HASH_KEY key);

void hash_put(HashMap *pTable, HASH_KEY key, HASH_VALUE value);

HashNode *hash_remove(HashMap *pTable, HASH_KEY key);

int hash(HASH_KEY key);

#endif //DATA_STRUCTURE_MAP_H
