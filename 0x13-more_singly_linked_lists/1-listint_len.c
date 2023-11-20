#include "lists.h"

/**
 * listint_len - Prints all the elements of the listint_t list
 *
 * @h: listint_t element
 *
 * Return: the size of the element
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

