#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node
 * @head: the head of the list
 * @index: the index of the node
 * Return: the nth node, NULL if it is not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *i = head;
	unsigned int count = 0;

	while (i != NULL)
	{
		if (count == index)
			return (i);
		count++;
		i = i->next;
	}

	return (NULL);

}
