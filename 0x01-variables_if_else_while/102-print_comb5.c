#include <stdio.h>
/**
 * main - Entry Point
 * putchar numbers that dont repeat ASCII 48-58
 * Return: 0
 */
int main(void)
{
	int num1;
	int num2;

	for(num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num2 != num1)
			{
				putchar(num1 / 10 + 48);
				putchar(num1 % 10 + 48);
				putchar(' ');
				putchar(num2 / 10 + 48);
				putchar(num2 % 10 + 48);

				if (num1 * 100 + 1 != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
