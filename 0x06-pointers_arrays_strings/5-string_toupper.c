#include "main.h"

/**
 * string_toupper = Entry Point
 * changes all lowercase letters of a string to uppercase
 * @p: string pointer
 * Return: p
 */

char *string_toupper(char *p)
{
	int length = 0;

	while (p[length] != '\0')
	{
		if (p[length] >= 'a' && p[length] <= 'z')
		{
			p[length] = p[length] - 32;
		}
		length++;
	}
	return (p);
}
