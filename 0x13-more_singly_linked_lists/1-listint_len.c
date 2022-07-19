#include "lists.h"

/**
 * listint_len - Entry Point
 * length of a list
 * @h: pointer
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
