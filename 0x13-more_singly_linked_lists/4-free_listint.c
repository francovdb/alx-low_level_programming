#include "lists.h"

/**
 * free_listint - Entry Point
 * frees a linked list
 * @head: Pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *savepoin;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			savepoin = head->next;
			free(head);
			head = savepoin;
		}
		free(head);
	}
}
