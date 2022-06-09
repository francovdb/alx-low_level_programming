#include "main.h"

/**
 * print_diagonal - Entry Point
 * putchar diagonal
 * @n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int Cntr;
	int RowCntr;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (RowCntr = 1; RowCntr <= n; RowCntr++)
		{
			if (RowCntr > 1)
			{
				for (Cntr = 1; Cntr <= RowCntr; Cntr++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
