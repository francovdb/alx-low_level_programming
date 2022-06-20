#include "main.h"

/**
 * _memset - Entry Point
 * fills memory with a constant byte
 * @s: pointer
 * @b: byte value
 * @n: memory
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;
	
	/*Delacring FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
