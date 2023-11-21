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
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
