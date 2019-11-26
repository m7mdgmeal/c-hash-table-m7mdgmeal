#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

Node *createNode(Node **node, int value)
{
	(*node) = malloc(sizeof(Node));
	if (*node)
	{
		(*node)->value = value;
		(*node)->next = NULL;
	}
	return *node;
}

BOOL pushToFirst(Node **head, int value)
{
	Node *temp = NULL;
	if (!head)
	{
		if (!createNode(head, value))
			return FALSE;
	}
	else
	{
		if (!createNode(&temp, value))
			return FALSE;
		temp->next = *head;
		*head = temp;
	}
	return TRUE;
}

BOOL hasNext(Node *root)
{
	if (root->next)
		return TRUE;
	return FALSE;
}

int popFromFirst(Node **root)
{
	Node *temp = *root;
	int value = temp->value;
	root = &((*root)->next);
	free(temp);
	return value;
}

void printLinkedList(Node *root)
{
	if (NULL == root)
	{
		printf("\n");
	}
	else
	{
		printf("%d ", root->value);
		printLinkedList(root->next);
	}
}


void freeLinkedList(Node **head)
{
	Node *curr = NULL;
	Node *copy = *head;
	while (copy)
	{
		curr = copy;
		copy = copy->next;
		free(curr);
	}
	*head = NULL; 
}

Node *revursiveReverse(Node *head)
{
	return NULL;
}


void initLinkedList(Node ** linkedList)
{
	*linkedList = NULL;
}