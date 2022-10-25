#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - removes head node of linked list
 *@head: a struct pointer
 *Return: returns head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int u;

	if (*head == NULL)
		return (0);
	u = temp->n;
	return (u);
}
