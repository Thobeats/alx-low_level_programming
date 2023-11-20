#include "lists.h"

/**
 * pop_listint - Deletes the head node
 *
 * @head: The head of the list
 *
 * Return: the n value of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if ((*head) == NULL)
	{
		free((*head));
		return (0);
	}

	current = (*head);
	(*head) = (*head)->next;
	n = current->n;
	free(current);
	return (n);	
}
