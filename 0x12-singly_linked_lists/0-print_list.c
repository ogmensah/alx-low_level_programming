#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list - traverses through linked lists
 *@h: a struct pointer
 *Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long i = 0;
	const list_t *current_node;

	current_node = h;
	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%s\n", current_node->str);
			current_node = current_node->next;
		}
		i++;
	}
	return (i);
}
