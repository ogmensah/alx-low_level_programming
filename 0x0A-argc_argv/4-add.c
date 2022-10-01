#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/* more headers goes there */

/**
 * main - prints the name of the program
 * @argc: the number of parameters passed during execusion
 * @argv: the list of parameters passed during execusion
 * Return: returns 0 if program runs successfully
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int *ptr = &sum;

	for (; i < argc; i++)
	{
		if (isdigit(*argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) >= 0)
			*ptr += atoi(argv[i]);
	}
	printf("%d\n", *ptr);
	return (0);
}
