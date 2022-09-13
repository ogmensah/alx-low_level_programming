#include <stdio.h>
/* more headers goes there */

/**
 * main - this function runs first
 *
 * Return: 0 if program runs successfully
 */
int main(void)
{
	char word[8] = "_putchar"; 
		/* ['_','p','u','t','c','h','a','r'];*/
	int n = 0;
	for (; n < 8; n++)
	{
		putchar(word[n]);
	}
	putchar('\n');
	return (0);
}
