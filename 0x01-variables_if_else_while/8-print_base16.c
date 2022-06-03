#include <stdio.h>
/**
 * main - Entry Point
 * putchar numbers of base16 in lowercase
 * Return: 0
 */
int main(void)
{
int numbers;
char letters;
for (numbers = 0; numbers < 10; numbers++)
putchar((numbers % 10) + '0');
for (letters = 'a'; letters <= 'z'; letters++)
putchar(letters);
putchar('\n');
return (0);
}
