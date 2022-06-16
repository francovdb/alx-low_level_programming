#include "main.h"

/**
 * _strncat - Entry Point
 * concatenating two strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int Cntr;
	int length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (Cntr = 0; Cntr < n && src[Cntr] != '\0'; Cntr++, length++)
	{
		dest[length] = src[Cntr];
	}

	dest[length] = '\0';
	return (dest);
}
