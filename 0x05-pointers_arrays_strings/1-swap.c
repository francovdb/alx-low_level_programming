#include "main.h"

/**
 * swap_int - Entry Point
 * swapping the value of two integers
 * @a: Integer 1
 * @b: Integer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
