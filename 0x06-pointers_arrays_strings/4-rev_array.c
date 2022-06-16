#include "main.h"

/**
 * reverse_array - Entry Point
 * reverses the content of an array of integers
 * @a: array
 * @n: number
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp;
	int Cntr = 0;

	n = n - 1;
	while (Cntr <= n)
	{
		temp = a[Cntr];
		a[Cntr++] = a[n];
		a[n--] = temp;
	}
}
