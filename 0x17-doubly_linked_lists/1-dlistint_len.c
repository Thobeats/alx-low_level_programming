#include "lists.h"

/**
 * dlistint_len - Returns the lenght of the list
 * @h: head of the list
 *
 * Return: The size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *i;

	if (h == NULL)
		return (0);
	i = h;
	count = 0;
	while (i != NULL)
	{
		count++;
		i = i->next;
	}

	return (count);
}
