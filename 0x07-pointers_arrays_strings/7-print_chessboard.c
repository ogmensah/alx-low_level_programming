#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_chessboard - prints a chessboard contaning characters
 *@a: input array
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
			_putchar(*b[i]);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
