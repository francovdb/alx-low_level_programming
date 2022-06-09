#include "main.h"

/**
 * print_numbers - Entry Point
 * putchar numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
