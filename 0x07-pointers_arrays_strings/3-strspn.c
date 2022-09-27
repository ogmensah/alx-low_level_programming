#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * _strspn - gets the length of prestring substring
 *@s: input string
 *@accept: query character
 * Return: returns pointer to found character or NULL when not found
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;
	char c;

	for (; s[j] != '\0'; j++)
	{
		c = s[j];
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == c)
			{
				break;
			}
		}
		if (accept[i] == '\0')
		{
			break;
		}
	}
	return (j);
}
