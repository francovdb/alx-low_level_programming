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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
