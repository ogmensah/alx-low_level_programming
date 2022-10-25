#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *listint_len - computes length of string
 *@h: a struct pointer
 *Return: returns number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *current_node = h;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	return (i);
}
