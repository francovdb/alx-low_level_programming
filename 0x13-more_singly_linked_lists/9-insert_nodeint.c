#include "lists.h"

/**
 * insert_nodeint_at_index - Entry Point
 * inserts a new node at a given position
 * @head: pointer
 * @idx: the index of the list
 * @n: pointer node
 * Return: node address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *headcopy;
	unsigned int i;

	headcopy = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = headcopy;
		*head = new;
		return (new);
	}

	for (i = 0; (i < idx - 1); i++)
	{
		if (headcopy == NULL)
		{
			free(new);
			return (NULL);
		}
		headcopy = headcopy->next;
	}
	new->next = headcopy->next;
	headcopy->next = new;

	return (new);
}
