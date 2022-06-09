#include "main.h"

/**
 * print_line - Entry Point
 * draws straight line in terminal
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int Cntr;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (Cntr = 1; Cntr <= n; Cntr++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
