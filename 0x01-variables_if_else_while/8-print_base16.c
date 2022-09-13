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
	int num;


	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num % 10 + '0');
		}
		else if (num > 9)
		{
			putchar(num + 87);
		}
	}
	putchar('\n');
	return (0);
}
