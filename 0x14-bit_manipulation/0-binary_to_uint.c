#include "main.h"

/**
 * binary_to_uint - Entry Point
 * converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int Cntr;
	unsigned int num = 0;

	if (!b)
	{
		return (0);
	}

	for (Cntr = 0; b[Cntr]; Cntr++)
	{
		if (b[Cntr] < '0' || b[Cntr] > '1')
		{
			return (0);
		}
		num = 2 * num + (b[Cntr] - '0');
	}
	return (num);
}
