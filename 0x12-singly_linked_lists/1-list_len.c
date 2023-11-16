#include "lists.h"

/**
 * list_len - Prints the length of a list
 *
 * @h: a pointer to the header of the list
 *
 * Return: The size of the list
 */

size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *current;

	count = 0;

	current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}

