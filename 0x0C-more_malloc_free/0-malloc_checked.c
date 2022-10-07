#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * malloc_checked - copies src into dest
 *@b: size of the memory to allocated
 *Return: returns pointer to first byte of the memory
 */

void *malloc_checked(unsigned int b)
{
	int *l;

	l = malloc(b);
	if (l == NULL)
	{
		exit(98);
	}
	return (l);
}
