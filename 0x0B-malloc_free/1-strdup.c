#include "main.h"
#include <stdlib.h>

/**
 * strdup = Entry Point
 * return pointer to new allocated space in memory with a copy of the string
 * @str: string
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *out;
	int Cntr1;
	int Cntr2 = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (Cntr1 = 0; str[Cntr1]; Cntr1++)
	{
		Cntr2++;
	}

	out = malloc(sizeof(char) * (Cntr2 + 1));

	if (out == NULL)
	{
		return (NULL);
	}

	for (Cntr1 = 0; str[Cntr1]; Cntr1++)
	{
		out[Cntr1] = str[Cntr1];
	}

	out[Cntr2] = '\0';

	return (out);
}
