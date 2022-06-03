#include <stdio.h>
/**
 * main - Entry Point
 * putchar combination two digit numbers ascending order
 * Return: 0
 */
int main(void)
{
int numb1;
int numb2;
for (numb1 = 0; numb1 < 9; numb1++)
{
for (numb2 = numb1 + 1; numb2 < 10; numb2++)
{
putchar((numb1 % 10) + '0');
putchar((numb2 % 10) + '0');
if (numb1 == 8 && numb2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
