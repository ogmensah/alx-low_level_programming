#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - searches for node at index
 *@idx: the position of the node
 *@n: value to be inserted in the new node
 *@head: a struct pointer
 *Return: returns number of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned long i = 0;
	listint_t *current_node, *temp, *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (head == NULL && n != 0)
		return (NULL);
	current_node = *head;
	if (idx == 0 && current_node != NULL)
	{
		*head = new_node;
		new_node->next  = current_node;
		return (new_node);
	}
	while (current_node && i < idx)
	{
		if (i == (idx - 1))
		{
			temp = current_node;
			new_node->next = current_node->next;
			temp->next = new_node;
			break;
		}

		current_node = current_node->next;
		i++;
	}
	if (i < (idx - 1))
		return (NULL);

	return (new_node);
}
