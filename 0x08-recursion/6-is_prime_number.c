#include "main.h"

int actual_prime(int n, int Cntr);

/**
 * is_prime_number - Entry Point
 * returns 1 if the input integer is a prime number, otherwise return 0
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Entry Point
 * returns 1 if the input integer is a prime number, otherwise return 0
 * @n: number
 * @Cntr: Counter
 * Return: 1 or 0
 */

int actual_prime(int n, int Cntr)
{
	if (Cntr == 1)
	{
		return (1);
	}
	if (n % Cntr == 0 && Cntr > 0)
	{
		return (0);
	}

	return (actual_prime(n, Cntr - 1));
}
