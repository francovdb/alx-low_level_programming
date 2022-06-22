#include "main.h"

/**
 * factorial - Entry Point
 * returns the factorial of a given number
 * @n: number
 * Return: factoral
 */

int factorial(int n)
{
	int factor = n;

	if (n < 0)
	{
		return (-1);
	}

	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	factor *= factorial(n - 1);

	return (factor);
}
