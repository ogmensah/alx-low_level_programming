#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * _strcmp - copies src into dest
 *@s1: input string1
 *@s2: input string2
 * Return: the difference between the strings
 */

int _strcmp(char *s1, char *s2)
{
	const unsigned char *p1 = (const unsigned char *) s1;
	const unsigned char *p2 = (const unsigned char *) s2;
	unsigned char c1, c2;

	do {
		c1 = (unsigned char) *p1++;
		c2 = (unsigned char) *p2++;
		if (c1 == '\0')
			return (c1 - c2);
	} while (c1 == c2);
	return (c1 - c2);
}
