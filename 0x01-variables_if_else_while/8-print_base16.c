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
		putchar("x%"num);
	}
	putchar('\n');
	return (0);
}
