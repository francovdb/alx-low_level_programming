#include "main.h"

/**
 * more_numbers - Entry Point
 * _putchar numbers 1 to 14 x10
 * Return: void
 */

void more_numbers(void)
{
	int num;
	int tens;
	int unit;
	int row;

	for (row = 1; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			tens = num / 10;
			unit = num % 10;
			
			if (num > 9)
			{
				_putchar(tens + '0');
			}
			
			_putchar(unit + '0');
		}
	}
}
