#ifndef DOG
#define DOG

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - defines characteristic of dog
 * @name: name of the dog
 * @age: age
 * @owner: name of the dog's owner
 *
 * Description: this stores attributes of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* DOG */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

