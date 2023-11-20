#include "lists.h"

/**
 * free_listint2 - Free the list
 *
 * @head: The head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while ((*head) != NULL)
	{
		current = (*head);
		(*head) = (*head)->next;
		free(current);
	}
	head = NULL;
}
