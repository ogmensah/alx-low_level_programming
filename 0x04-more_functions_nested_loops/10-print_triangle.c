#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_triangle - prints triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i + 1); j++)
		{
			_putchar(32);
		}
		for (j = 0; j < (i + 1); j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
