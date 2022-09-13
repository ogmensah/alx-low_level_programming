#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - this function runs first
 *
 * Return: 0 if program runs successfully
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n - 10 * (n / 10);
	if (l > 5)
	{
		printf("Last digti of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digti of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digti of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
