#include <stddef.h>
#include "main.h"
/* more headers goes there */

/**
 * _strpbrk - gets the length of prestring substring
 *@s: input string
 *@accept: query character
 * Return: returns pointer to found character or NULL when not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j = 0;
	char c;
	int found = 0;


	for (; s[j] != '\0'; j++)
	{
		c = s[j];
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == c)
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			break;
		}
	}
	if (!found)
		return (NULL);
	return (&s[j]);
}
