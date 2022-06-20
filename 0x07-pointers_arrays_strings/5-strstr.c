#include "main.h"

/**
 * _strstr - Entry Point
 * locate a substring
 * @haystack: string to search
 * @needle: substring to locate
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int Cntr;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		Cntr = 0;

		if (haystack[Cntr] == needle[Cntr])
		{
			do{
				if (needle[Cntr + 1] == '\0')
					return (haystack);

				Cntr++;

			} while (haystack[Cntr] == needle[Cntr]);
		}

		haystack++;
	}

	return ('\0');
}
