#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_square - prints a square made of #
 * @size: length of the edges
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
