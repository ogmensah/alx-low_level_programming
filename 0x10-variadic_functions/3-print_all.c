#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_all - prints all the parameters
 * @format: list of format of arguments
 * Return: returns nothing
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *var;

	va_start(ap, 9);
	while (j < 9)
	{
		while(i++)
		{
		if (format[i] == 'c')
			var = va_arg(ap, char); break;
		if (format[i] == 'i')
			var = va_arg(ap, int); break;
		if (format[i] == 'c')
			var = va_arg(ap, float); break;
		if (format[i] == 'c')
			var = va_arg(ap, char *); break;
		}
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
		j++;
	}
	va_end(ap);
	putchar('\n');
}
