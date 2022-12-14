#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
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
	int a = 0;
	int c = 0;
	int *ptr = &c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (a / 25 != 0)
	{
		*ptr = a / 25;
		a = a - c * 25;
	}
	if (a / 10 != 0)
	{
		*ptr += a / 10;
		a = a - (a / 10) * 10;
	}
	if (a / 5 != 0)
	{
		*ptr += a / 5;
		a = a - (a / 5) * 5;
	}
	if (a / 2 != 0)
	{
		*ptr += a / 2;
		a = a - (a / 2) * 2;
		*ptr += a;
	}
	printf("%d\n", c);
	return (0);
}
