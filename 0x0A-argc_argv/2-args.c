#include <stdio.h>

/**
 * main - Entry Point
 * prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	{
		printf("%s\n", argv[arg]);
	}

	return (0);
}
