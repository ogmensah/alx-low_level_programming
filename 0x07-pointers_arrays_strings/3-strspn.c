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
	int foundfirst = 0;
	int nbytes = 0;
	int mcounts;

	for (; s[j] != '\0';)
	{
		c = s[j];
		for (; accept[i] != '\0'; i++)
		{
			if (s[i] == c && !foundfirst)
			{
				foundfirst = 1;
				mcounts += 1;
				break;
			}
			else if (s[i] == c && foundfirst)
			{
				mcounts += 1;
				break;
			}
		}
		if (!foundfirst)
		{
			j++;
		}
		else if (foundfirst && j != 0)
		{
			j--;
			continue;
		}
		else if (foundfirst && j == 0)
			break;
	}
	nbytes = mcounts * sizeof(char);
	return (nbytes);
}
