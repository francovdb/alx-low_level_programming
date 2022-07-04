#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Entry Point
 * function to print a struct dog
 * @d: dog pointer
 * Return: pointer
 */

void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
