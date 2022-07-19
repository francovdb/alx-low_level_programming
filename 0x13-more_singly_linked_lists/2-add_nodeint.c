#include "lists.h"

/**
 * add_nodeint - Entry Point
 * adds a new node at the beginning of a listint_t list
 * @head: node pointer
 * @n: int to refill
 * Return: address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
