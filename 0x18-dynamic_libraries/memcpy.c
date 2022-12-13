#include "main.h"
/* more headers goes there */

/**
 * _memcpy - copies src into buffer
 *@src: input string
 *@dest: copy of input string
 *@n: number of bytes of src that should be add to dest
 * Return: returned pointer of string copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int l = 0;

	l = (int) n / sizeof(char);

	for (; i < l; l++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
