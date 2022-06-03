#include <stdio.h>
/**
 * main - Entry Point
 * putchar numbers seperated by comma
 * Return: 0
 */
int main(void)
{
int numbers;
for (numbers = 0; numbers <= 9; numbers++)
{
putchar((numbers % 10) + '0');
if (numbers == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
