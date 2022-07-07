#include "variadic_functions.h"

/**
 * print_numbers - Entry Point
 * prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int Cntr;

	va_start(valist, n);

	for (Cntr = 0; Cntr < n; Cntr++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && Cntr < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(valist);
}
