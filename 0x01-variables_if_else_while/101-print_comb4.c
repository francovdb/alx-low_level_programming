#include <stdio.h>
/**
 * main - Entry Point
 * putchar combination of 3 digits 48-58 ASCII
 * Return: 0
 */
int main(void)
{
int numb1;
int numb2;
int numb3;
for (numb1 = 48; numb1 < 58; numb1++)
{
for (numb2 = numb1; numb2 < 58; numb2++)
{
for (numb3 = numb2; numb3 < 58; numb3++)
{
if (numb1 == numb2 || numb2 == numb3 || numb1 == numb3)
{
continue;
}
putchar(numb1);
putchar(numb2);
putchar(numb3);
if (numb1 == 55 && numb2 == 56 && numb3 == 57)
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
