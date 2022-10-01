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
	int a = atoi(argv[1]);
	int c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (a < 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	if (a / 25 != 0)
	{
		c = a / 25;
		a = a - c * 25;
	}
	if (a / 10 != 0)
	{
		c += a / 10;
		a = a - (a / 10) * 10;
	}
	if (a / 5 != 0)
	{
		c += a / 5;
		a = a - (a / 5) * 5;
	}
	if (a / 2 != 0)
	{
		c += a / 2;
		a = a - (a / 2) * 2;
		c += a;
	}
	printf("%d\n", c);
	return (0);
}
