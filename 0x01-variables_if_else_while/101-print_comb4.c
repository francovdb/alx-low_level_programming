#include <stdio.h>
/**
 * main - Entry Point
 * putchar combination of 3 digits 48-58 ASCII
 * Return: 0
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = num1; num2 < 58; num2++)
		{
			for (num3 = num2; num3 < 58; num3++)
			{
				if (num1 == num2 || num2 == num3 || num1 == num3)
				{
					continue;
				}

				putchar(num1);
				putchar(num2);
				putchar(num3);

				if (num1 == 55 && num2 == 56 && num3 == 57)
				{
					break;
				}
				else
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
