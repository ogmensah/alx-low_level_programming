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

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
