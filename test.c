#include "test.h"
#include"hash_table.h"

#include <stdio.h>
void runAllTests()
{
	testPush2First();
	printf("\n\n\n /*/*/*/*/*/*/*/*/*/*//**/*/*/*/ \n");
	testHashTable();
}

void testPush2First()
{
	Node *root;
	int i ;
	initLinkedList(&root);

	for(i = 0 ; i<10 ; ++i)
	{
		pushToFirst(&root, i);
		printLinkedList(root);
	}
	/* root = revursiveReverse(root); */


	freeLinkedList(&root);
	printf("..................................\n\n");
	printLinkedList(root);

}

void testHashTable()
{
	HashTable HashTable;
	createHashTable(&HashTable);
	freeHashTable(&HashTable);
}