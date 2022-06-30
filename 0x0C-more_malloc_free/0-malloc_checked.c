#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry Point
 * allocates memory using malloc.
 * @b: bytes to be allocated.
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
