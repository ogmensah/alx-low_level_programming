#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint - sum of all the data in the list
 *@head: a struct pointer
 *Return: returns sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node;

	if (head == NULL)
		return (0);
	current_node = head;
	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
