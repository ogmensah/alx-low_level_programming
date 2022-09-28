#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * _strstr - gets the length of prestring substring
 *@haystack: input string
 *@needle: query string
 * Return: returns pointer to found string or NULL when not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;
	char c;
	int found;


	for (; haystack[j] != '\0'; j++)
	{
		c = haystack[j];
		found = 0;
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (needle[i] == c)
			{
				found += 1;
			}
			if (needle[found + 1] == '\0')
			{
				return (&haystack[j]);
			}
		}
	}
	return (NULL);
}
