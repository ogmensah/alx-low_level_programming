#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *list_len - computes length of string
 *@h: a struct pointer
 *Return: returns number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	return (i);
}
