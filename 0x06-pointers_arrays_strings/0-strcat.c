#include "main.h"

/**
 * _strcat - Entry Point
 * concatenating two strings
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int Cntr;
	int length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (Cntr = 0; src[Cntr] != '\0'; Cntr++, length++)
	{
		dest[length] = src[Cntr];
	}

	dest[length] = '\0';
	return (dest);
}
