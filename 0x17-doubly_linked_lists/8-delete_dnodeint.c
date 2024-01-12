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
	dlistint_t *j;
	dlistint_t *k;
	unsigned int count;
	
	i = *head;
	count = 0;
	while (i != NULL)
	{
		if (count == index)
		{
			k = i->prev;
			j = i->next;
			free(i);
			k->next = j;
			j->prev = k;

			i = k;
			return (1);
		}
		count++;
		i = i->next;
	}

	return (-1);
}
