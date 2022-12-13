#include "main.h"
/* more headers goes there */

/**
 * _islower - it checks for lower case letter
 *@c: input character
 * Return: returns 1 when leter is lower case letter and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
