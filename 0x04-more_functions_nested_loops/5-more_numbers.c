#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * more_numbers - prints digits from 0 to 14 10 times
 *
 */

void more_numbers(void)
{
	int n;
	int a = 0;
	int p;

	for (; a < 10; a++)
	{
	for (n = 48; n <= 62; n++)
	{
		if (n < 58)
		{
			_putchar(n);
		}
		else
		{
			p = n - 48;
			_putchar(1 + '0');
			_putchar(p % 10 + '0');
		}
	}
	_putchar('\n');
	}
}
