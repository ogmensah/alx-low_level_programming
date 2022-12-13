#include "main.h"

/* more headers goes there */

/**
 * _puts - computes the length of a string
 *@s: points to the input string when function is called
 * Return: returns the length of the input string
 */

void _puts(char *s)
{
	int l = 0;

	while (1)
	{
		if (s[l] == '\0')
			break;
		_putchar(s[l]);
		l++;
	}
	_putchar('\n');
}
