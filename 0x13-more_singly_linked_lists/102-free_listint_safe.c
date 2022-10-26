#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint_safe - deletes list and sets head to NULL
 *@head: a struct pointer
 *Return: returns nothing
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *current;
	unsigned long size = 0;

	current = *h;
	if (*h == NULL)
		return (0);
	while (current != NULL)
	{
		temp = current->next;
		free((void *)current);
		current = temp;
		size++;
	}
	*h = NULL;
	return (size);
}
