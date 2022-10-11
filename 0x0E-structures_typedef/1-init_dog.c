#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - this invokes the _puchar function to print characters
 * @d: pointer to the struct
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of owner
 * Return: returns nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
