#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 - deletes list and sets head to NULL
 *@head: a struct pointer
 *Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
		return;
	while (temp != NULL)
	{
		temp = temp->next;
		free((void *)*head);
		*head = temp;
	}
	*head = NULL;
}
