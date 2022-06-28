#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *argout;
	int Cntr, aCntr;
	int i, j;

	if (ac == 0)
		return (NULL);

	for (Cntr = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			Cntr++;
		Cntr++;
	}

	argout = malloc((Cntr + 1) * sizeof(char));

	if (argout == 0)
	{
		free(argout);
		return (NULL);
	}

	for (i = j = aCntr = 0; aCntr < Cntr; j++, aCntr++)
	{
		if (av[i][j] == '\0')
		{
			argout[aCntr] = '\n';
			i++;
			aCntr++;
			j = 0;
		}
		if (aCntr < Cntr - 1)
			argout[aCntr] = av[i][j];
	}
	argout[aCntr] = '\0';

	return (argout);
}
