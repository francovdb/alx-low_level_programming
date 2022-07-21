#include "main.h"

/**
 * flip_bits - Entry Point
 * return number of bits that need to flip to get from one number to another
 * @n: num1
 * @m: num2
 * Return: number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
