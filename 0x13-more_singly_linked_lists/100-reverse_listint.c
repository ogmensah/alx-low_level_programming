#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 - deletes list and sets head to NULL
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
