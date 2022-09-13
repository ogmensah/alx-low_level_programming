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
	int q = 'q';
	int e = 'e';
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != q && alpha != e)
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
