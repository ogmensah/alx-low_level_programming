#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_rev - computes the length of a string
 *@s: points to the input string when function is called
 * Return: returns the length of the input string
 */

void print_rev(char *s)
{
	int l = 0;

	for (; s[l] != '\0';)
	{
		l++;
	}

	while (1)
	{
		if (l < 0)
			break;
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
