#include "main.h"
/* more headers goes there */

/**
 * _strcpy - copies src into dest
 *@src: input string
 *@dest: copy of input string
 * Return: returned pointer of string copy
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int n = 0;

	for (; src[l] != '\0';)
	{
		l++;
	}
	for (; n < l; n++)
	{
		dest[n] = src[n];
	}
	dest[l] = '\0';
	return (dest);
}
