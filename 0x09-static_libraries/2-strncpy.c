#include "main.h"

/**
 * _strncpy - Entry Point
 * copies the string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int Cntr;

	for (Cntr = 0; Cntr < n && src[Cntr] != '\0'; Cntr++)
		dest[Cntr] = src[Cntr];
	for (; Cntr < n; Cntr++)
		dest[Cntr] = '\0';

	return (dest);
}
