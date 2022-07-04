#include "dog.h"
#define NULL (void *)0

/**
 * init_dog - Entry Point
 * initialize a variable of type struct dog
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
