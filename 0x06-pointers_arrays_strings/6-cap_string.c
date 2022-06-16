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

	while (p[Cntr] != '\0')
	{
		if (p[0] >= 'a' && p[0] <= 'z')
		{
			p[0] = p[0] - 32;
		}
		if (p[Cntr] == ' ' || p[Cntr] == '\t' || p[Cntr] == '\n'
		    || p[Cntr] == ',' || p[Cntr] == ';' || p[Cntr] == '.'
		    || p[Cntr] == '.' || p[Cntr] == '!' || p[Cntr] == '?'
		    || p[Cntr] == '"' || p[Cntr] == '(' || p[Cntr] == ')'
		    || p[Cntr] == '{' || p[Cntr] == '}')
		{
			if (p[Cntr + 1] >= 'a' && p[Cntr + 1] <= 'z')
			{
				p[Cntr + 1] = p[Cntr + 1] - 32;
			}
		}
		Cntr++;
	}
	return (p);
}
