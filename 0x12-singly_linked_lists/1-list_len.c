#include "lists.h"

/**
 * list_len - Entry Point
 * returns the number of elements in a linked list_t list
 * @h: pointer
 * Return: Cntr
 */

size_t list_len(const list_t *h)
{
	size_t Cntr;

	for (Cntr = 0; h != NULL; Cntr++)
	{
		h = h->next;
	}
	return (Cntr);
}
