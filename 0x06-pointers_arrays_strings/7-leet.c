#include "main.h"

/**
 * leet - Entry Point
 * encodes a string into 1337
 * @p: pointer to string
 * Return: p
 */

char *leet(char *p)
{
	int Cntr1;
	int Cntr2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	Cntr1 = 0;

	while (p[Cntr1])
	{
		for (Cntr2 = 0; Cntr2 <= 7; Cntr2++)
		{
			if (p[Cntr1] == leet[Cntr2] || p[Cntr1] - 32 == leet[Cntr2])
			{
				p[Cntr1] = Cntr2 + '0';
			}
		}

		Cntr1++;
	}

	return (p);
}
