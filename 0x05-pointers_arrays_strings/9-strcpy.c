#include "main.h"

/**
 * _strcpy - entry Point
 * copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: Destitation
 * @src: Source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int Cntr;

	Cntr = 0;

	while (src[Cntr])
	{
		dest[Cntr] = src[Cntr];
		Cntr++;
	}

	return (dest);
}
