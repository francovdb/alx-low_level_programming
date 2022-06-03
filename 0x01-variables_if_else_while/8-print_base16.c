#include <stdio.h>
/**
 * main - Entry Point
 * putchar numbers of base16 in lowercase
 * Return: 0
 */
int main(void)
{
	int Cntr;

	for (Cntr = 48; Cntr < 58; Cntr++)
	{
		putchar(Cntr);
	}
	for (Cntr = 'a'; Cntr <= 'f'; Cntr++)
	{
		putchar(Cntr);
	}
	putchar('\n');
	return (0);
}
