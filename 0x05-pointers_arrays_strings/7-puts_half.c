#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * puts_half - computes the length of a string
 *@str: points to the input string when function is called
 * Return: returns the length of the input string
 */

void puts_half(char *str)
{
	int l = 0;
	int n;

	for (; str[l] != '\0';)
	{
		l++;
	}
	n = l;
	if (l != 0)
		n = (l + 1) / 2;
	for (; n <= l; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
