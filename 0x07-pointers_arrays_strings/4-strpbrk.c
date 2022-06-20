#include "main.h"

/**
 * _strpbrk - Entry Point
 * searches a string for any of a set of bytes
 * @s: string
 * @accept: string with characters
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int Cntr;

	while (*s != '\0')
	{
		Cntr = 0;
		while (accept[Cntr] != '\0')
		{
			if (*s == accept[Cntr])
			{
				return (s);
			}

			Cntr++;
		}

		s++;
	}
	return (0);
}
