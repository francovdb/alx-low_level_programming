#include "main.h"

/**
 * print_number - Entry Point
 * prints integer
 * @n: printed integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int Cntr = n;

	if (n < 0)
	{
		_putchar('-');
		Cntr = -Cntr;
	}

	if ((Cntr / 10) > 0)
		print_number(Cntr / 10);

	_putchar((Cntr % 10) + '0');
}
