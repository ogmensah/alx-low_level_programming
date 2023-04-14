#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - prints all the parameters
 * @separator: delimiter of printed parameters
 * @n: argument
 * Return: returns sum of parameters
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *var;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		var = va_arg(ap, char *);
		if (var == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", var);
		}
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
