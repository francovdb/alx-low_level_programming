#include "main.h"

/**
 * _strspn - Entry Point
 * gets the length of a prefix substring
 * @s: string
 * @accept: string with list of characters
 * Return: Cntr
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y;
	int Cntr = 0;
	char *str1;
	char *str2;

	str1 = s;
	str2 = accept;

	while (str1[x] != '\0')
	{
		y = 0;
		while (str2[y] != '\0')
		{
			if (str2[y] == str1[x])
			{
				Cntr++;
				break;
			}

			y++;
		}

		if (s[x] != accept[y])
		{
			break;
		}

		x++;
	}

	return (Cntr);
}
