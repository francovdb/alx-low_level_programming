#include "main.h"

/**
 * _sqrt_recursion - Entry Point
 * returns the natural square root of a number
 * @n: number
 * @root: root
 * Return: sqrt of n
 */

int actual_sqrt_recursion(int n, int root);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (actual_sqrt_recursion(n, 0));
}


int actual_sqrt_recursion(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}

	return (actual_sqrt_recursion(n, root + 1));
}
