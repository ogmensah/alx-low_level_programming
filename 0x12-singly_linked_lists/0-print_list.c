#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *current_node = h;
	while ( current_node != NULL)
	{
		if (current_node->str != NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%s ", current_node->str);
			current_node = current_node->next;
		}
		i++;
	}
	return (i);
}
