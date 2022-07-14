#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Entry Point
 * prints all the elements of a list_t list
 * @h: pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t Cntr = 0;

	while (h != NULL)
	{
		if (h->str == NUL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			Cntr++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			Cntr++;
		}
	}

	return (Cntr);
}
