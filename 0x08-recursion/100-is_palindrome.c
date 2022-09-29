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
	if (*(s) == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
