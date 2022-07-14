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
	size_t Cntr;

	for (Cntr = 0; h != NULL; Cntr++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
		}
	}
	return (Cntr);
}
