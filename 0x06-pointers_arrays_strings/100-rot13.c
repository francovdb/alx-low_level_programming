#include "main.h"

/**
 * rot13 - Entry Point
 * encodes a string using rot13
 * @p: pointer to string
 * Return: p
 */

char *rot13(char *p)
{
	int Cntr1;
	int Cntr2;
	char alphabet[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
			     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
	     		     'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
	     		     'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
	     		     'Z'};
	char rot13[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		    	 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
     		    	 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
     		    	 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
     		    	 'M'};

	for (Cntr1 = 0; p[Cntr1] != '\0'; Cntr++)
	{
		for (Cntr2 = 0; Cntr < 53; Cntr2++)
		{
			if (alphabet[Cntr2] == p[Cntr1])
			{
				p[Cntr1] = rot13[Cntr2];
				break;
			}
		}
	}
	return (p);
}
