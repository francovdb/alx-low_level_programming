#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * print last digits of n
 * Return: 0
 */
int main(void)
{
	int n;
	int Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	Digit = n % 10;
	printf("Last digit of %i is %i and is ", n, Digit);
	if (Digit > 5)
		printf("greater than 5\n");
	else if (Digit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
