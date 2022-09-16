#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_line - prints _ n times
 * @n: the number of time _ should be printed
 */

void print_line(int n)
{
	for (; n > 0 ; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
