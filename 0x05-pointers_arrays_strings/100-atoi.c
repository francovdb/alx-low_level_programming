#include "main.h"

/**
 * _atoi - Entry Point
 * convert a string to an integer
 * @s: string
 * Return: num
 */

int _atoi(char *s)
{
	int sign;
	unsigned int num;

	sign = 1;
	num = 0;

	do
	{
		if (*s == '-')
		{
			sign *= -1;
		}

		else if (*s >= '48' && *s <= '57')
		{
			num = (num * 10) + (*s - '48');
		}

		else if (num > 48)
		{
			break;
		}
	}

	while (*s++)
	{
		;
	}

	return (num * sign);
}
