#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 * @d: pointer to the struct
 * Return: returns nothing
 */

void print_dog(struct dog *d)
{
	if (!d)
	{
	}
	else
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		if (d->age != 0)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
