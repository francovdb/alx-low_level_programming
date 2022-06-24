#include <stdio.h>

/**
 * main - Entry Point
 * prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
