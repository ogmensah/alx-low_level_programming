#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * array_range - creates array of integers
 *@min: first element
 *@max: last element
 *Return: returns pointer to first byte of the memory
 */

int *array_range(int min, int max)
{
	int *l;
	int i;

	if (min > max)
		return (NULL);
	l = malloc((max - min + 1) * sizeof(int));
	if (l == NULL)
		return (NULL);
	for (i = 0; (i + min) <= max; i++)
		l[i] = i + min;
	return (l);
}
