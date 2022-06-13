#include "main.h"

/**
 * puts_half - Entry Point
 * prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int half;
	int Cntr = 0;

	while (str[Cntr] != '\0')
	{
		Cntr++;
	}

	half = (Cntr + 1) / 2;

	for (Cntr = half; str[Cntr]; Cntr++)
	{
		_putchar(str[Cntr]);
	}

	_putchar('\n');
}
