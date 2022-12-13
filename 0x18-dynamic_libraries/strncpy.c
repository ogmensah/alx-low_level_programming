#include "main.h"
/* more headers goes there */

/**
 * _strncpy - copies src into dest
 *@src: input string
 *@dest: copy of input string
 *@n: number of bytes of src that should be add to dest
 * Return: returned pointer of string copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;
	int u = 0;
	int p = 0;

	for (; src[l] != '\0';)
	{
		l++;
	}
	for (; u < l && u < n; u++)
	{
		dest[u + p] = src[u];
	}
	for (; u < n; u++)
	dest[p + u] = '\0';
	return (dest);
}
