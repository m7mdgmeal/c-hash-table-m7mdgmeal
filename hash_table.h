#ifndef __HASH_TABLE_H__
#define __HASH_TABLE_H__

#include<stddef.h>
#include"linked_list.h"


typedef struct
{
    Node ** m_arrLinkedList;
    size_t m_size;
    
}HashTable;


void createHashTable();
Node ** allocateArrLinkedList(size_t size);
void freeHashTable(HashTable * hashTable);

#endif /* __HASH_TABLE_H__ */
