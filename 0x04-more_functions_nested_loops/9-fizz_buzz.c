#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * main - checks for multiples of 3 and 5 and prints Fizz and Buzz respectfully
 * Return: returns 0 when program works successfully
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
