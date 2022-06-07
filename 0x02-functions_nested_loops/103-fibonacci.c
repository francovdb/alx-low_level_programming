#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * print even fibonacci values
 * Return: 0
 */
int main(void)
{
long int Cntr;
long int a = 1;
long int b = 2;
long int sum = 0;
long int TotSum = 0;
for (Cntr = 0; Cntr < 49; Cntr++)
{
if ((b % 2 == 0) && (b <= 4000000))
{
TotSum = TotSum + b;
}
sum = a + b;
a = b;
b = sum;
}
printf("%ld\n", TotSum);
return (0);
}
