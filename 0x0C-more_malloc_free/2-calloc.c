#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/* more headers goes there */

/**
 * _calloc - allocates memory
 *@nmemb: number of elements
 *@size: size of each element
 *Return: returns pointer to first byte of the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *l;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb * size > UINT_MAX)
		printf("Error");
	l = malloc(nmemb * size);
	if (l == NULL)
		return (NULL);
	return (l);
}
