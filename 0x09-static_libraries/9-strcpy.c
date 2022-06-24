#include "main.h"

/**
 * _strcpy - entry Point
 * copy string by src, incl terminating null byte to buffer by dest
 * @dest: Destitation
 * @src: Source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int Cntr = 0;

	while (src[Cntr] != '\0')
	{
		dest[Cntr] = src[Cntr];
		Cntr++;
	}

	dest[Cntr] = '\0';

	return (dest);
}
