#include <stdio.h>
/**
 * main - Entry Point
 * putchar single digit numbers base 10 from 0
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}
	putchar('\n');
	return (0);
}
