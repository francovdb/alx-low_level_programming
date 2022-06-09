#include "main.h"

/**
 * _isdigit - Entry Point
 * defines if a number between 0 and 9
 * @c: character
 * Return: No 0
 * 1 Yes
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
