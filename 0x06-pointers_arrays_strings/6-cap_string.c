#include "main.h"

/**
 * cap_string - Entry Point
 * capitalizes all words of a string
 * @p: pointer to string
 * Return: p
 */

char *cap_string(char *p)
{
	int Cntr = 0;

	while (p[Cntr])
	{
		while (!(p[Cntr] >= 'a' && p[Cntr] <= 'z'))
		{
			Cntr++;
		}

		if (p[Cntr - 1] == ' ' ||
			p[Cntr - 1] == '\t' ||
			p[Cntr - 1] == '\n' ||
			p[Cntr - 1] == ',' ||
			p[Cntr - 1] == ';' ||
			p[Cntr - 1] == '.' ||
			p[Cntr - 1] == '!' ||
			p[Cntr - 1] == '?' ||
			p[Cntr - 1] == '"' ||
			p[Cntr - 1] == '(' ||
			p[Cntr - 1] == ')' ||
			p[Cntr - 1] == '{' ||
			p[Cntr - 1] == '}' ||
			Cntr == 0)
		{
			p[Cntr] -= 32;
		}

		Cntr++;
	}

	return (p);
}
