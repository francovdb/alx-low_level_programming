#include "main.h"

/**
 * print_line - Entry Point
 * draws straight line in terminal
 * Return: void
 */

void print_line(int n)
{
	int Cntr;

	if (n > 0)
	{
		for (Cntr = 0; Cntr < n; Cntr++)
			_putchar('_');
	}

	_putchar('\n');
}
