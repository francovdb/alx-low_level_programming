#include "main.h"
#include <unistd.h>

/**
 * _putchar - Enter Point
 * prints character to c
 * Return: 1 on Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
