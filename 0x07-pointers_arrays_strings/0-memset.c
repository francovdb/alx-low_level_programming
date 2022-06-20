#include "main.h"

/**
 * _memset - Entry Point
 * fills memory with a constant byte
 * @s: pointer
 * @b: byte value
 * @n: memory
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int Cntr = 0;

	while (Cntr < n)
	{
		*(s + Cntr) = b;
		Cntr++;

	}

	return (s);
}
