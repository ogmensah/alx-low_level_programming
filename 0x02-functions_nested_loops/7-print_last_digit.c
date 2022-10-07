#include <unistd.h>

/**
 * print_last_digit - prints the last digit in a number
 * @y: integer parameter
 * Return: On success 1.
 */


int print_last_digit(int y)
{
	int n;

	n = y - 10 * (y / 10);
	return (n);
}
