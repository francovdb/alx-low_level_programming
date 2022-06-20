#include "main.h"

/**
 * print_chessboard - Entry Point
 * print the chessboard
 * @a: array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int Cntr1;
	int Cntr2;

	for (Cntr1 = 0; a[Cntr1][7]; Cntr1++)
	{
		for (Cntr2 = 0; Cntr2 < 8; Cntr2++)
		{
			_putchar(a[Cntr1][Cntr2]);
		}

		_putchar('\n');
	}
}
