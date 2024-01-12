#include "lists.h"

/**
 * sum_dlistint - sums all the values in the list
 * @head: the head of the list
 * Return: the sum of the list, 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *i;
	int sum = 0;

	if (head == NULL)
		return (0);
	i = head;
	while (i != NULL)
	{
		sum += i->n;
		i = i->next;
	}

	return (sum);
}
