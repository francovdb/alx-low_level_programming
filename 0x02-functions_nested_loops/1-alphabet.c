#include "main.h"
/**
 * print_alphabet - Entry point
 * putchar alphabet a-z lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alphaber;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

	return (0);
}
