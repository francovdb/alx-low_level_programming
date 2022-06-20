#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry Point
 * prints the sum of the two diagonals of a square matrix of integers
 * @a: array
 * @size: size
 * return: void
 */

void print_diagsums(int *a, int size)
{
	int Cntr = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (Cntr < size)
	{
		sum1 = sum1 + *(a + Cntr * size + Cntr);
		sum2 = sum2 + *(a + Cntr * size + size - Cntr - 1);

		Cntr++;
	}

	printf("%i, %i\n", sum1, sum2);
}
