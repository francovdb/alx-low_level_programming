#include "main.h"

/**
 * _strlen - Entry Point
 * function that returns the length of a string
 * @s: string
 * Return: void
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}
