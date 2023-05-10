#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL
 *
 * Description: Prints a value every time it is compared in the array.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t Cntr;

	if (array == NULL)
		return (-1);

	for (Cntr = 0; Cntr < size; Cntr++)
	{
		printf("Value checked array[%ld] = [%d]\n", Cntr, array[Cntr]);
		if (array[Cntr] == value)
			return (Cntr);
	}

	return (-1);
}
