#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * _isupper - it checks for upper case letters
 *@c: input character
 * Return: returns 1 when c is an alphabet  and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
