#include "variadic_functions.h"

/**
 * sum_them_all - Entry Point
 * returns the sum of all its parameters
 * @n: number
 * Return: if n==0 then 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int Cntr;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

	for (Cntr = 0; Cntr < n; Cntr++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
