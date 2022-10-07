#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_sign - prints symbols to stdout
 * @n: input number
 * Return: returns 1 when successful
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (1);
	}
}
