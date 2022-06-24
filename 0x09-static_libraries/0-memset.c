#include "main.h"

/**
 * _memset - Entry Point
 * @s: pointer block of memory to fill
 * @b: value to set
 * @n: bytes of the memory
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int Cntr;
for (Cntr = 0; Cntr < n; Cntr++)
{
*(s + Cntr) = b;
}
return (s);
}
