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
	n = rand () - RAND_MAX / 2;
Digit = n % 10;
if (Digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, Digit);
}
else if (Digit < 6 && Digit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Digit);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, Digit);
}
return (0);
}
