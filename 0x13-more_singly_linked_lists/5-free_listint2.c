#include "lists.h"

/**
 * free_listint2 - Entry Point
 * frees a linked list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *savepoin;

	if (head != NULL)
	{
		while ((*head)->next != NULL)
		{
			savepoin = (*head)->next;
			free(*head);
			*head = savepoin;
		}
		free(*head);
		*head = NULL;
	}
}
