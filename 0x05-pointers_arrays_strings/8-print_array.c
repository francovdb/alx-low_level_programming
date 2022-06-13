#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry Point
 * prints n elements of an array of integers
 * @a: array
 * @n: number
 * Return: void 
 */

void print_array(int *a, int n)
{
	int Cntr;

	for (Cntr = 0; Cntr < n; Cntr++)
	{
		printf("%d", a[Cntr]);

		if (Cntr == n - 1)
		{
			continue;
		}

		printf(", ");
	}

	printf("\n");
}
