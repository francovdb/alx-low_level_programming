#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry Point
 * creates an array of chars, and initializes it with a specific char
 * @size: size
 * @c: character
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *create;
	unsigned int Cntr;

	if (size == 0)
	{
		return (NULL);
	}

	create = malloc(sizeof(c) * size);

	if (create == NULL)
	{
		return (NULL);
	}

	for (Cntr = 0; Cntr < size; Cntr++)
	{
		create[Cntr] = c;
	}

	return (create);
}
