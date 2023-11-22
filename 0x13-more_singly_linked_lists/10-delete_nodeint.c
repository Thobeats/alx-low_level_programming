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

	for (count = 0; count <= index; count++)
	{
		if (current1 == NULL)
			return (-1);
		if (count == (index - 1))
			current2 = current1;
		if (index == count)
			node = current1;
		current1 = current1->next;
	}

	if (index != 0)
		current2->next = current1;
	else
		(*head) = current1;
	free(node);
	return (1);
}
