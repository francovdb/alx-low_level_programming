#include "main.h"

/**
 * print_square - Entry Point
 * print a square
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
