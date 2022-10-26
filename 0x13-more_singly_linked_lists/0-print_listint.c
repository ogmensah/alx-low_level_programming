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
	unsigned long i = 0;
	const listint_t *current_node;

	if (h == NULL)
		putchar('\n');
		return (0);
	current_node = h;
	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		i++;
	}
	return (i);
}
