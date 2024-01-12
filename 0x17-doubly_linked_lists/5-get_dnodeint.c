#include "lists.h"

/**
 *
 *
 *
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
