#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index - searches for node at index
 *@index: the position of the node
 *@head: a struct pointer
 *Return: returns number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned long i = 0;
	listint_t *current_node;

	if (head == NULL)
		return (0);
	current_node = head;
	while (current_node && i < index)
	{
		current_node = current_node->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (current_node);
}
