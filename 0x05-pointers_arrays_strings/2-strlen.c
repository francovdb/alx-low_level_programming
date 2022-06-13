#include "main.h"

/**
 * _strlen - Entry Point
 * function that returns the length of a string
 * @s: string
 * Return: void
 */

int _strlen(char *s)
{
	static int c = 0;

	while (s != '\0')
	{
		c++;
		strlength(s+1);
	}

	return c;
}
