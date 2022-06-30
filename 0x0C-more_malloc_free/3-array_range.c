#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry Point
 * creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int size;
	int Cntr;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (Cntr = 0; Cntr < size; Cntr++)
	{
		array[Cntr] = min++;
	}

	return (array);
}
