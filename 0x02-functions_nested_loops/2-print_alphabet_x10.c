#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_alphabet_x10 - this invokes the _puchar function to print characters
 *
 * Return: returns 1 when successful
 */

void print_alphabet_x10(void)
{
	int n;
	int a;

	for (a = 0; a < 10; a++)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	putchar('\n');
	}
}

