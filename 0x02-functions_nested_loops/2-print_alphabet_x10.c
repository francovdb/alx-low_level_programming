#include "main.h"
/**
 * print_alphabet_x10 - Entry Point
 * putchar alphabet a-z lowercase x10
 * Return: 0 not
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int Cntr;

	Cntr = 0;

	while (Cntr < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		Cntr++;
		_putchar('\n');
	}
}
