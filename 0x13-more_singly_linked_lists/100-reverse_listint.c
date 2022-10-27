#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *revpoint(listint_t **nd);
/**
 *reverse_listint - reverses singly linked list
 *@head: a struct pointer
 *Return: returns node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL)
		return (NULL);
	current = revpoint(&current);
	*head = current;
	return (current);
}

/**
 *revpoint - reverses singly linked list
 *@nd: a node pointer
 *Return: returns node
 */
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
