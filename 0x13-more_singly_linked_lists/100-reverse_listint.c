#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *reverse_listint - reverses singly linked list
 *@head: a struct pointer
 *Return: returns nothing
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *nextt = NULL;
	listint_t *prev = NULL;

	while (current != NULL)
	{
		nextt = current->next;
		current->next = prev;
		prev = current;
		current = nextt;

	}
	*head = prev;
	return (prev);
}
