#include "main.h"
/* more headers goes there */

/**
 * _isdigit - it checks for digit
 *@c: input character
 * Return: returns 1 when c is a digit  and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
