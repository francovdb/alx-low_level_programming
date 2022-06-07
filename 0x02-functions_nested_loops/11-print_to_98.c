#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry Point
 * print numbers from input to 98
 * @n: beginning number
 * Return: 0
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}
else
{
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
}
