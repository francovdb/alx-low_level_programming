#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * print first 50 fibonacci numbers
 * Return: (0)
 */
int main(void)
{
long int Cntr;
a = 1;
b = 2;
sum = 0;
for (Cntr = 0; Cntr < 49; Cntr++)
{
printf("%ld, ", a);
sum = a + b;
a = b;
b = sum;
if (Cntr == 48)
printf("%ld\n", a);
}
return (0);
}
