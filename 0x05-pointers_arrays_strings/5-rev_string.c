#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_rev - computes the length of a string
 *@s: points to the input string when function is called
 * Return: returns the length of the input string
 */

void print_rev(char *s)
{
	int l = 0;
	int p = 0;
	const int x = 0;
	int *ptr = &x;

	for (; s[l] != '\0';)
	{
		l++;
	}
	*ptr = l;
	
	char u[x];

	while (1)
	{
		u[p] = s[l];
		l--;
		if (l == 0)
			break;
	}
	while (1)
	{
		if (p < 0)
			break;
		s[l] = u[p];
		l++;
	}


}
