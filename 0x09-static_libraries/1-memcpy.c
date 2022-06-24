#include "main.h"

/**
 * _memcpy - Entry Point
 * copies memory area
 * @dest: destination
 * @src: source
 * @n: memory bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int Cntr = 0;

	while (Cntr < n)
	{
		*(dest + Cntr) = *(src + Cntr);
		Cntr++;

	}

	return (dest);
}
