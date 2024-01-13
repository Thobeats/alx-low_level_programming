#include "lists.h"

size_t _print_dlistint_backward(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *i;

	if (h == NULL)
		return (0);
	i = h;
	count = 0;

	while (i->next != NULL)
		i = i->next;

	while (i != NULL)
	{
		printf("%d\n", i->n);
		count++;
		i = i->prev;
	}

	return (count);
}
