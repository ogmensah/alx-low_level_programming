#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * is_prime_number - identifies prime number
 * @n: input number
 * Return: returns 1 for prime numbers and 0 otherwise
 */

int is_prime_number(int n)
{

	if (n == 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	if (n % 3 == 0)
		return (0);
	if (n % 5 == 0)
		return (0);
	if (n % 7 == 0)
		return (0);
	return (1);
}
