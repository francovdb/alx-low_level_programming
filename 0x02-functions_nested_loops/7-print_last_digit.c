#include "main.h"
/**
 * print_last_digit - Entry Point
 * print last digit of number
 * @n: number to be used
 * Return: 0
 */
int print_last_digit(int n)
{
	int LastDigit = n % 10;

	if (LastDigit < 0)
	{
		LastDigit *= -1;
	}
	_putchar(LastDigit + '0');
	return (LastDigit);
}
