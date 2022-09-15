#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_numbers - prints digits from 0 to 9 except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int n = 48;

	for (; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
