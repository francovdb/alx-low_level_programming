#include "function_pointers.h"

/**
 * int_index - Entry Point
 * searches for an integer
 * @array: array
 * @size: size
 * @cmp: pointer
 * Return: index of first element of pointer or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int Cntr;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (Cntr = 0; Cntr < size; Cntr++)
		{
			if (cmp(array[Cntr]))
			{
				return (Cntr);
			}
		}
	}

	return (-1);
}
