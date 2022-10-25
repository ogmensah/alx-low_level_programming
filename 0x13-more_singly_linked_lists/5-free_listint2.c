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
	listint_t *temp, *current;

	current = *head;
	if (*head == NULL)
		return;
	while (current != NULL)
	{
		temp = current->next;
		free((void *)current);
		current = temp;
	}
	*head = NULL;
}
