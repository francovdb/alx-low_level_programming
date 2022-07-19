#include "lists.h"

/**
 * print_listint - Entry Point
 * prints all the elements of a listint_t list
 * @h: pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
