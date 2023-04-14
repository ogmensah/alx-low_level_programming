#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_list - deletes list
 *@head: a struct pointer
 *Return: returns nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
