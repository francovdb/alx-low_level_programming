#include "main.h"

/**
 * _memset - Entry Point
 * fills memory with a constant byte
 * @n: memory byte
 * @s: pointer
 * @b: constant byte
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int Cntr;

	for (Cntr = 0; Cntr < n; Cntr++)
	{
		*(s + Cntr) = b;
	}

	return (s);
}
