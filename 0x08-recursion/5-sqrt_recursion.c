#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * _pow_recursion - computes the power of numbers
 * @x: input base number
 * @y: exponent
 * Return: value of x exponent y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y != 0)
	{
		return (x * _pow_recursion(x, --y));
	}
	return (1);
}
