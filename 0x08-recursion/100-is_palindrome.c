#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * _strlen_recursion - computes length of a string
 * @s: pointer to input string
 * Return: returns NULL
 */

void _print_rev_recursion(char *s)
{
        if (*s)
        {
                _print_rev_recursion(s + 1);
                _putchar(*s);
                return;
        }

}

void _puts_recursion(char *s)
{
        if (*s == '\0')
        {
                _putchar('\n');
                return;
        }
        _putchar(*(s));
        s++;
        _puts_recursion(s);

}

int is_palindrome(char *s)
{
	if (*(s) == '\0')
	{
		return;
	}
	return (1 + _strlen_recursion(++s));
}
