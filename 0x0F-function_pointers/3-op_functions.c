#include "3-calc.h"

/**
 * op_add - Entry Point
 * returns the sum of a and b
 * @a: number1
 * @b: number2
 * Return: Sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry Point
 * returns the difference of a and b
 * @a: number1
 * @b: number2
 * Return: Difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Entry Point
 * returns the product of a and b
 * @a: number1
 * @b: number2
 * Return: Product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry Point
 * returns the result of the division of a by b
 * @a: number1
 * @b: number2
 * Return: Division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Entry Point
 * returns the remainder of the division of a by b
 * @a: number1
 * @b: number2
 * Return: Remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
