#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number1;
	int number2;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	product = number1 * number2;

	printf("%d\n", product);

	return (0);
}
