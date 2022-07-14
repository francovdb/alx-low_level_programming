#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Entry Point
 * number of elements in linked list_t list
 * @h: pointer
 * Return: node
 */

size_t list_len(const list_t *h)
{
	size_t Cntr = 0;

	while (h != NULL)
	{
		h = h->next;
		Cntr++;
	}
	return (Cntr);
}
