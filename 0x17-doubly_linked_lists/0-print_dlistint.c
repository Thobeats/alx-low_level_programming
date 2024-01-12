#include "lists.h"

/**
 * print_dlistint - Prints the values in the listint list
 * @h: head of the listint list
 *
 * Return: size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *i;

	if (h == NULL)
		return (0);
	i = h;
	count = 0;
	while (i != NULL)
	{
		printf("%d\n", i->n);
		count++;
		i = i->next;
	}

	return (count);
}
