#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * _strcat - copies src into dest
 *@src: input string
 *@dest: copy of input string
 * Return: returned pointer of string copy
 */

char *_strcat(char *dest, char *src)
{
	int l = 0;
	int n = 0;
	int p = 0;

	for (; src[l] != '\0';)
	{
		l++;
	}
	for (; dest[p] != '\0';)
	{
		p++;
	}


	for (; n < l; n++)
	{
		dest[n + p] = src[n];
	}
	dest[p + n] = '\0';
	return (dest);
}
