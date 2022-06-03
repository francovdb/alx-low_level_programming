#include <stdio.h>
/**
 * main - Entry Point
 * putchar numbers seperated by comma
 * Return: 0
 */
int main(void)
{
	int Cntr;

	for (Cntr = 48; Cntr < 58; Cntr++)
	{
		putchar(Cntr);
		if (Cntr != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
