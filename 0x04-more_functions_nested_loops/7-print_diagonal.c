#include "main.h"

/**
 * print_diagonal - Entry Point
 * putchar diagonal
 * @n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int row;
       	int num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (num_lines = 1; num_lines <= row - 1; num_lines++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

