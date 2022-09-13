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

	for (n = 0; n < 10; n++)
	{
		putchar(n % 10 + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
