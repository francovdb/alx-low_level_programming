#include "main.h"

/**
 * print_rev - Entry Point
 * prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int Cntr = 0;

	while (s[Cntr] != '\0')
	{
		Cntr++;
	}

	for (Cntr = Cntr - 1; Cntr >= 0; Cntr--)
	{
		_putchar(s[Cntr]);
	}

	_putchar('\n');
}
