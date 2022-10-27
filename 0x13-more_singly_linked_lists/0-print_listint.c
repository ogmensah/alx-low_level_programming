#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_listint - prints all elements in list
 *@h: a struct pointer
 *Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *current_node;

	if (h == NULL)
		return (0);
	current_node = h;
	for (current_node = h; current_node != NULL; current_node = current_node->next, i++)
	{
		printf("%d\n", current_node->n);
	}
	return (i);
}
