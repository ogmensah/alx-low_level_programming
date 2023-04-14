#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * _print_rev_recursion - prints strings on STDOUT in reverse
 * @s: pointer to input string
 * Return: returns NULL
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		return;
	}

}
