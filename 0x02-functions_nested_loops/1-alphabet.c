#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_alphabet - this invokes the _puchar function to print characters
 *
 * Return: returns 1 when successful
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	putchar('\n');
}
