#include <stdio.h>
/**
 * main - Entry Point
 * putchar alphabet lowercase reverse z to a
 * Return: 0
 */
int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
putchar(alphabet);
putchar('\n');
return (0);
}
