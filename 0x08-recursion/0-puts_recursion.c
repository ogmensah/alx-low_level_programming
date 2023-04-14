#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * _puts_recursion - prints strings on STDOUT
 * @s: pointer to input string
 * Return: returns NULL
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s));
	s++;
	_puts_recursion(s);

}
