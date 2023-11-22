#include "lists.h"

/**
 * delete_nodeint_at_index - insert a new node at the index
 *
 * @head: the head of the list
 * @index: the index
 *
 * Return: the address of the new node, NULL if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current1;
	listint_t *current2;
	listint_t *node;
	unsigned int count;

	if (head == NULL)
	{
		return (-1);
	}

	current1 = (*head);
	count = 0;

	while (current1 != NULL)
	{
		if (count == (index - 1))
			current2 = current1;

		if (index == count)
		{
			node = current1;
			current1 = current1->next;
			break;
		}

		current1 = current1->next;
		count++;
	}

	if (current1 == NULL)
		return (-1);

	if (index == 0)
		(*head) = current1;
	else
		current2->next = current1;

	free(node);
	return (1);
}
