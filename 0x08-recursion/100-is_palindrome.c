#include "main.h"

int check_pal(char *s, int Cntr, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Entry Point
 * returns 1 if a string is a palindrome and 0 if not
 * An empty string is a palindrome
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Entry Point
 * returns 1 if a string is a palindrome and 0 if not
 * An empty string is a palindrome
 * @s: string
 * Return: 1 or 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * _strlen_recursion - Entry Point
 * returns 1 if a string is a palindrome and 0 if not
 * An empty string is a palindrome
 * @s: string
 * @length: length
 * @Cntr: Counter
 * Return: 1 or 0
 */

int check_pal(char *s, int Cntr, int length)
{
	if (*(s + Cntr) != *(s + length - 1))
	{
		return (0);
	}
	if (Cntr >= length)
	{
		return (1);
	}

	return (check_pal(s, Cntr + 1, length - 1));
}
