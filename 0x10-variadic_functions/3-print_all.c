#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - prints all the parameters
 * @separator: delimiter of printed parameters
 * @n: argument
 * Return: returns nothing
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *var;

	va_start(ap, 9);
	while (i < n)
	{
		while (

		var = va_arg(ap, format[i]);
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
		i++;
	}
	va_end(ap);
	putchar('\n');
}
