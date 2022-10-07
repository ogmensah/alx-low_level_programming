#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * swap_int - swaps the values of a and b
 *@a: points to the input integer when function is called
 *@b: points to the input integer when function is called
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
