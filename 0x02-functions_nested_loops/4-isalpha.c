#include "main.h"
/**
 * _isalpha - Entry Point
 * @c: searches for lowercase c and uppercase C
 * Return: 1 & 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
