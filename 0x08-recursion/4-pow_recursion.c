#include "main.h"

/**
 * _pow_recursion - Entry Point
 * returns the value of x raised to the power of y
 * @x: value1
 * @y: value2
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	int answer = x;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	answer *= _pow_recursion(x, y - 1);

	return (answer);
}
