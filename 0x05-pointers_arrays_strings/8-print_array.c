#include <unistd.h>
#include "main.h"
/* more headers goes there */

/**
 * print_array - prints the content of array
 *@a: input array
 *@n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
}
