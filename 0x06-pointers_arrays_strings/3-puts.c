#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * _puts - computes the length of a string
 *@str: points to the input string when function is called
 * Return: returns the length of the input string
 */

void _puts(char *str)
{
	int l = 0;

	while (1)
	{
		if (str[l] == '\0')
			break;
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
