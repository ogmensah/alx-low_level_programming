#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_diagonal - prints diagonal line
 * @n: specifies the length of the diagonal line
 */

void print_diagonal(int n)
{
	int a = 1;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
        	for (; a <= n  ; a++)
		{
			for (b = 0; b < a; b++)
        		{
                		_putchar(32);
        		}
			_putchar(92);
        		_putchar('\n');
		}
	}
}
