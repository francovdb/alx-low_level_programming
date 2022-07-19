#include "lists.h"

/**
 * sum_listint - Entry Point
 * returns sum of all data of a listint_t linked list
 * @head: pointer
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *headcopy;
	int sum = 0;

	headcopy = head;
	if (headcopy != NULL)
	{
		while (headcopy->next != NULL)
		{
			sum += headcopy->n;
			headcopy = headcopy->next;
		}
		sum += headcopy->n;
		return (sum);
	}
	else
	{
		return (0);
	}
}
