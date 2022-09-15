#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * _islower - it checks for lower case letter
 *@c: input character
 * Return: returns 1 when c is an alphabet  and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
