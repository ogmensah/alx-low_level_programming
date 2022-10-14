#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - prints all the parameters
 * @separator: delimiter of printed parameters
 * @n: argument
 * Return: returns sum of parameters
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
			putchar(*separator);
	}
	va_end(ap);
	putchar('\n');
}
