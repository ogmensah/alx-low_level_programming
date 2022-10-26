#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *reverse_listint - reverses singly linked list
 *@head: a struct pointer
 *Return: returns nothing
 */
listint_t *revpoint(listint_t **nd);
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	prev = revpoint(&current);
	*head = prev;
	return (prev);
}

listint_t *revpoint(listint_t **nd)
{
	listint_t *nex, *pre, *node;

	node = *nd;
	while (node != NULL)
	{
		nex = node->next;
		node->next = pre;
		pre = node;
		node = nex;
	}
	return (pre);
}
