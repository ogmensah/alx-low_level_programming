#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_numbers - prints digits from 0 to 9
 *
 */

void print_numbers(void)
{
	int n = 48;

	for (; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
