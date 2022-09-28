#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_diagsums - gets the length of prestring substring
 *@a: input string
 *@size: query character
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	char *b[8];

	while (j < 8)
	{
		b = a[j];
		while (i < 8)
		{
			printf("%s", b[i]);
			_putchar(',');
			_putchar(' ');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
