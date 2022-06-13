#include "main.h"

/**
 * rev_string - Entry Point
 * reverses string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	int Cntr = 0;
	char temp;

	while (s[Cntr++])
	{
		length++;
	}

	for (Cntr = length -1; Cntr >= length / 2; Cntr--)
	{
		temp = s[Cntr];
		s[Cntr] = s[length - Cntr -1];
		s[length - Cntr - 1] = temp;
	}
}
