#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * _strchr - searches for a character in a string
 *@s: input string
 *@c: query character
 * Return: returns pointer to found character or NULL when not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *cha = NULL;

	if (sizeof(c) == sizeof(char))
	{
		for (; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				cha = &s[i];
				break;
			}
		}
	}
	return (cha);
}
