#include <stdio.h>

/**
 * main - Entry Point
 * prints message
 * Return: 0
 */

int main(void)
{
	int Cntr;

	for (Cntr = 1; Cntr <= 100; Cntr++)
	{
		if ((Cntr % 3 == 0) && (Cntr % 5 == 0))
			printf("FizzBuzz");

		else if (Cntr % 5 == 0)
			printf("Buzz");

		else if (Cntr % 3 == 0)
			printf("Fizz");

		else
			printf("%i", Cntr);

		if (Cntr < 100)
			printf(" ");
		
		else
			printf("\n");
	}
	return (0);
}
