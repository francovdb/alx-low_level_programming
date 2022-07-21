#include "main.h"

/**
 * clear_bit - Entry Point
 * sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 * Return: 1 if it worked, or -1 if an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
