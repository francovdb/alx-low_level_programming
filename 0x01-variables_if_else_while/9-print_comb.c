#include <stdio.h>
/**
 * main - Entry Point
 * putchar numbers seperated by comma
 * Return: 0
 */
int main(void)
{
int numbers;
for (numbers = 48; numbers <= 57; numbers++)
{
putchar((numbers % 58) + 48);
if (numbers == 57)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
