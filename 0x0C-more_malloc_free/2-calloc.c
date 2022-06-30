#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry Point
 * allocates memory for an array, using malloc
 * @nmemb: element number
 * @size: size of array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int Cntr;
	char *allocate;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}

	allocate = mem;

	for (Cntr = 0; Cntr < (size * nmemb); Cntr++)
	{
		allocate[Cntr] = '\0';
	}

	return (mem);
}
