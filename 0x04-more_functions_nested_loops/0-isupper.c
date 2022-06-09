#include "main.h"

/**
 * _isupper - defines if character is uppercase
 * putchar alphabet
 * @c: character
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
