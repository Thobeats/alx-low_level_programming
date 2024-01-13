#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node from the list
 * @head: the head of the list
 * @index: the index of the node
 * Return: 1 for success, -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *i;
	unsigned int count;

	if (head == NULL)
		return (-1);

	i = *head;
	count = 0;

	if (index == 0)
	{
		if (i->next != NULL)
			i->next->prev = NULL;
		*head = i->next;
		free(i);
		return (1);
	}

	while (i != NULL)
	{
		if (count == index)
		{
			i->prev->next = i->next;
			if (i->next != NULL)
				i->next->prev = i->prev;
			free(i);
			return (1);
		}
		count++;
		i = i->next;
	}

	return (-1);
}
