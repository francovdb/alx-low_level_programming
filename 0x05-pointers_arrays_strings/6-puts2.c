#include "main.h"

/**
 * puts2 - Entry Point
 * prints every other character of a string, starting with the first character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int Cntr;

	for (Cntr = 0; str[Cntr] != '\0'; Cntr++)
	{
		if (Cntr % 2 == 0)
		{
			_putchar(str[Cntr]);
		}
	}

	_putchar('\n');
}
