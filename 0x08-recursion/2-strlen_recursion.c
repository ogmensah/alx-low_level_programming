#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * _strlen_recursion - computes length of a string
 * @s: pointer to input string
 * Return: returns NULL
 */

int _strlen_recursion(char *s)
{
	static int ln = 1;

	if (*(s) == '\0')
	{
		return ((int) (ln - 1));
	}
	ln++;
	return (_strlen_recursion(++s));
}
