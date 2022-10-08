#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * _realloc - copies src into dest
 * @ptr: pointer to begening of old memory
 *@old_size: size of the old memory allocated
 *@new_size: size of new memory to be allocated
 *Return: returns pointer to first byte of the memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *l;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == NULL && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		l = malloc(new_size);
	}

	l = malloc(b);
	if (l == NULL)
	{
		exit(98);
	}
	return (l);
}
