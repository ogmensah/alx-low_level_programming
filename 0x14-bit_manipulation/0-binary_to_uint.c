#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that convert a binary number to an unsigned int
 * @b: string to convert.
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num1, i;

	if (!b || !*b)
		return (0);
	num1 = i = 0;
	while (b[i])
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		else if (b[i] == 49)
		{
			num1 <<= 1;
			num1 += 1;
		}
		else
			num1 <<= 1;
		i++;
	}
	return (num1);
}

