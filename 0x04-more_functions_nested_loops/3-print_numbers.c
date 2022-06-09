#include "main.h"

/**
 * print_numbers - Entry Point
 *
 * _putchar numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
