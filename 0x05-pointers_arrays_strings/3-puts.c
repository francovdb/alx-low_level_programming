#include "main.h"

/**
 * _puts - Entry Point
 * function that prints a string to 'stdout'
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
