#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * string_toupper - changes lower case to upper case
 * @n: the input string or letter
 * Return: returned pointer of string copy
 */

char *string_toupper(char *n)
{
	int p = 0;
	int l = 0;
	char *m;

	for (;n[p] != '\0'; p++)
	{
	}

	m = (char *) malloc(sizeof(char) * p);
	
	for (;n[l] != '\0' && n[l] >= 97 && n[l] <= 122; l++)
	{
		printf("%",(char) n[l]);
		m[l] = n[l] - 33;
		printf("%s",(char) m[l]);
	}
	return (m);
}
