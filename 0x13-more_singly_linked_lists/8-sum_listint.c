#include "lists.h"

/**
 * sum_listint - Sum all the values of n in the list
 *
 * @head: The head of the list
 *
 * Return: the sum of all the n values
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
