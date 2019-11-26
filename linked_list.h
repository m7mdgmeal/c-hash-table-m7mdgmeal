#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

typedef enum{FALSE,TRUE}BOOL;

typedef struct Node{
	int value;
	struct Node * next;
}Node;

Node * createNode(Node ** linkedList,int value);
void initLinkedList(Node ** linkedList);
BOOL pushToFirst(Node ** head,int value);
int pop(Node **);
void printLinkedList(Node * root);
void freeLinkedList(Node ** nodes);

Node * revursiveReverse(Node *head);
#endif /* __LINKED_LIST_H__ */
