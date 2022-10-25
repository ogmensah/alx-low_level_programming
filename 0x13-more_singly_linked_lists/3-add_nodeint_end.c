#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_nodeint_end - adds new element to the end of linked list
 *@head: point to linked list
 *@n: number in the new element
 *Return: returns pointer to new element added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *temp;

	last_node = *head;
	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = temp;
	return (temp);
}
