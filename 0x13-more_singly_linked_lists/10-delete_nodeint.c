#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - searches for node at index
 *@index: the position of the node
 *@head: a struct pointer
 *Return: returns 1 for successful or -1 for unsuccessful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned long i = 0;
	listint_t *current_node, *temp;

	temp = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	current_node = temp->next->next;
	free(temp->next);
	temp->next = current_node;
	return (1);
}
