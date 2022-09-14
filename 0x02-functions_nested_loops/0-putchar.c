#include "main.h"
/* more headers goes there */

/**
 * main - this function runs first
 *
 * Return: 0 if program runs successfully
 */
int main(void)
{
	char word[9] = "_putchar";
        char* w;

	int n = 0;
	for (; n < 8; n++)
	{
		w = &word[n];

		_putchar(*w);
	}
	putchar('\n');

	return (0);
}
