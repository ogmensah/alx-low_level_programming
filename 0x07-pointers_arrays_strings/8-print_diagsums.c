#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * _strspn - gets the length of prestring substring
 *@s: input string
 *@accept: query character
 * Return: returns pointer to found character or NULL when not found
 */

void print_chessboard(char (*a)[8])
{

	int i = 0;
	int j = 0;
	char *b[8];
	while (j < 8)
	{
		b = a[j];
		while (i < 8)
		{
			printf("%s",b[i]);
			_putchar(',');
			_putchar(' ');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
