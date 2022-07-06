#include "function_pointers.h"

/**
 * array_iterator - Entry Point
 * executes function given as parameter on each element of array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int Cntr;

	if (array && action)
	{
		for (Cntr = 0; Cntr < size; Cntr++)
		{
			action(array[Cntr]);
		}
	}
}
