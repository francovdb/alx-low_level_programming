#include "variadic_functions.h"

/**
 * print_strings - Entry Point
 * prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *str;
	unsigned int Cntr;

	va_start(valist, n);

	for (Cntr = 0; Cntr < n; Cntr++)
	{
		str = va_arg(valist, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (Cntr < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}

	printf("\n");
	va_end(valist);
}
