#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * string_toupper - changes lower case to upper case
 * Return: returned pointer of string copy
 */

char *string_toupper(char *n)
{
	int u = sizeof(n) / sizeof(char);
	char *b = (char *) malloc(sizeof(char) * n);
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
