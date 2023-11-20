#include "lists.h"

/**
 * free_listint - Free the list
 *
 * @head: The head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
	{
		free(head);
		return;
	}

	if (head->next != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
	free(head);
}
