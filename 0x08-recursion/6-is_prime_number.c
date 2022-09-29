#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * _strlen_recursion - computes length of a string
 * @s: pointer to input string
 * Return: returns NULL
 */

int is_prime_number(int n)
{
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
