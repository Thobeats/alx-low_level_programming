#include "lists.h"

/**
 * print_listint - Prints all the elements of the listint_t list
 *
 * @h: listint_t element
 *
 * Return: the size of the element
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

