#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * reverse_array - copies src into dest
 *@a: input string
 *@n: number of elements of the array
 * Return: returned pointer of string copy
 */

void reverse_array(int *a, int n)
{
	int *b = (int *) malloc(sizeof(int) * n);
	int u = n;
	int w = 0;

	for (; u > 0; u--)
	{
		b[w] = a[u - 1];
		w++;
	}
	for (w = 0; w < n; w++)
	{
		a[w] = b[w];
	}
	free(b);
}
