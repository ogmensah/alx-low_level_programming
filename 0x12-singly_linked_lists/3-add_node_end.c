#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node_end - adds new element to the end of linked list
 *@head: point to linked list
 *@str: string in the new element
 *Return: returns pointer to new element added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	new_node = (list_t *) malloc(sizeof(list_t));
	new_node->str = strdup(str);
	last_node->next = new_node;
	*head = new_node;
	return (*head);
}
