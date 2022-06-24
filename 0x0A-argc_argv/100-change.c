#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * prints the minimum number of coins to make change for an amount of money
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int Cntr;
	int coins = 0;
	int ammount = atoi(argv[argc - 1]);
	int value[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (ammount <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (Cntr = 0; Cntr < 5; Cntr++)
		{
			if (value[Cntr] <= ammount)
			{
				coins = coins + (ammount / value[Cntr]);
				ammount = ammount - (ammount / value[Cntr]) * value[Cntr];

				if (ammount = 0)
				{
					printf("%d\n", coins);
					break;
				}
			}
		}
	}
	return (0);
}
