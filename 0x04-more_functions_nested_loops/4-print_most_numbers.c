#include "main.h"

/**
 * print_most_numbers - Entry Point
 * putchar numbers 0 to 9 excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2 && number != 4)
		{
			_putchar((number % 10) + '0');
		}
	}
	_putchar('\n')
}
