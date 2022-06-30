#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry Point
 * concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: number of bytes
 * Return: If the function fails - NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int Cntr1 = n;
	unsigned int Cntr2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (Cntr2 = 0; s1[Cntr2]; Cntr2++)
		Cntr1++;

	concat = malloc(sizeof(char) * (Cntr1 + 1));

	if (concat == NULL)
		return (NULL);

	Cntr1 = 0;

	for (Cntr2 = 0; s1[Cntr2]; Cntr2++)
		concat[Cntr1++] = s1[Cntr2];

	for (Cntr2 = 0; s2[Cntr2] && Cntr2 < n; Cntr2++)
		concat[Cntr1++] = s2[Cntr2];

	concat[Cntr1] = '\0';

	return (concat);
}
