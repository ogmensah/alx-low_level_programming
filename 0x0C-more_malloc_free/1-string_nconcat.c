#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * string_nconcat - copies src into dest
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 *Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *l;
	unsigned int p = 0;
	unsigned int k = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = n / sizeof(char);
	do {
		p++;
	} while (s1[p] != '\0');

	do {
		k++;
	} while (s2[k] != '\0');

	if (k <= n)
		l = malloc(k + p + 1);
	if (k > n)
	{
		k = n;
		l = malloc(n + p + 1);
	}
	if (l == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < p; i++)
	{
		l[i] = s1[i];
	}
	for (j = 0; j < k; j++)
	{
		l[i + j] = s2[j];
	}
	l[i + j] = '\0';
	return (l);
}
