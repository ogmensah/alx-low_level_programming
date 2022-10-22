#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - adds new element to linked list
 *@head: point to linked list
 *@str: string in the new element
 *Return: returns pointer to new element added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	if (new_node->next == NULL)
		return (NULL);
	return (*head);
}
