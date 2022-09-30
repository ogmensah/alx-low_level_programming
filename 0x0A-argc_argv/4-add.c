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

int main(int __attribute__((unused)) argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	for (; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0)
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
