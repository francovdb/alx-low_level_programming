#include "main.h"
/**
 * print_sign - Entry Point
 * @n: prints sign of number
 * Return: 1 print + if > 0
 * 0 print 0 if = 0
 * -1 print - if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
