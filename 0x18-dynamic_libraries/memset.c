#include "main.h"
/* more headers goes there */

/**
 * _memset - copies bytes of b into s
 *@s: input destination string
 *@b: input source byte string
 *@n: number of bytes
 * Return: returned pointer of string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int l = 0;

	l = (int) n / sizeof(char);

	for (; i < l; l++)
	{
		s[i] = b;
	}
	return (s);
}
