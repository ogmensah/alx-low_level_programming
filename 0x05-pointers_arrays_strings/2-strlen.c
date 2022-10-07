#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * _strlen - computes the length of a string
 *@s: points to the input string when function is called
 * Return: returns the length of the input string
 */

int _strlen(char *s)
{
	int l = 0;

	for (; s[l] != '\0';)
	{
		l++;
	}
	return (l);
}
