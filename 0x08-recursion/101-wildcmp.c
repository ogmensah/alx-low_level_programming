#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * wildcmp - compairs two strings and also matches wild card *
 * @s1: pointer to input string
 * @s2: pointer to input string
 * Return: returns 1 if strings are similar and 0 when not similar
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s1 != '\0' && *s2 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));
	if (*s1 == '*' && *(s1 + 1) != *s2)
		return (wildcmp(s1, ++s2));
	if (*s1 == '*' && *(s1 + 1) == *s2)
		return (wildcmp(++s1, s2));
	if (*s2 == '*' && *(s2 + 1) != *s1)
		return (wildcmp(++s1, s2));
	if (*s2 == '*' && *(s2 + 1) == *s1)
		return (wildcmp(s1, ++s2));
}
