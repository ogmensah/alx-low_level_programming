#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * puts2 - prints and skip one
 *@str: points to the input string when function is called
 * Return: returns the length of the input string
 */

void puts2(char *str)
{
	int l = 0;

	while (1)
	{
		if (str[l] == '\0')
			break;
		if (l % 2 == 0)
			_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
