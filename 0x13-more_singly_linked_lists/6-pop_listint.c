#include "lists.h"

/**
 * pop_listint - Entry Point
 * deletes the head node of a listint_t linked list
 * @head: Pointer
 * Return: head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *savepoin;
	int savenum;

	if (*head != NULL)
	{
		savepoin = (*head)->next;
		savenum = (*head)->n;
		free(*head);
		*head = savepoin;
		return (savenum);
	}
	else
	{
		return (0);
	}
}
