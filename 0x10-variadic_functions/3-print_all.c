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

	va_start(ap, format);
	while (format[i] != '\0')
	{
		while (format[i] == 'i' || format[i] == 'c')
		{
			if (format[i] == 'i')
			{
				printf("%d", va_arg(ap, int));
				i++;
				break;
			}
			printf("%c", va_arg(ap, int));
			i++;
			break;
		}
		if (format[i] == 'f')
		{
			printf("%f", va_arg(ap, double));
			i++;
			continue;
		}
		printf("%s", va_arg(ap, char *));
		i++;
	}
}
