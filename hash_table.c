#include <stdlib.h>
#include <stdio.h>

#include "hash_table.h"

Node **allocateArrLinkedList(size_t size)
{
    size_t i;
    Node **hashTable = malloc(sizeof(Node *) * size);
    if (!hashTable)
    {
        printf("No enogth memory\n");
        exit(1);
    }
    for(i = 0 ; i < size ; ++i)
    {
        initLinkedList(&hashTable[i]);
    }
    return hashTable;
}

void createHashTable(HashTable *hashTable)
{
    printf("Enter the size of the linked list array:\n");
    scanf("%lu", &(hashTable->m_size));
    hashTable->m_arrLinkedList = allocateArrLinkedList(hashTable->m_size);
    printf("Alocated Successfuly\n");
}

void freeHashTable(HashTable *hashTable)
{
    size_t i, *size = &hashTable->m_size;
    for (i = 0; i < *size; ++i)
    {
        freeLinkedList(&(hashTable->m_arrLinkedList[i]));
        printf("m_arrLinkedList[%lu] is freed successfuly.\n",i);
    }
    *size = 0;
    free(hashTable->m_arrLinkedList);
    printf("Freed Successfuly\n");
}