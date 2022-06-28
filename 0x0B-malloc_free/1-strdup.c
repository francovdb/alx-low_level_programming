#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory is available - NULL.
 * Otherwise - a pointer to the duplicated string.
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
