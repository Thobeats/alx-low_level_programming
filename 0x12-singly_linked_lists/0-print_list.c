#include "lists.h"

/**
 * print_list - Prints the values the linked lists
 *
 * @h: a pointer to the header of the list
 *
 * Return: The size of the list
 */

size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *current;
	char *output;

	count = 0;

	current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}

		current = current->next;
		count++;
	}

	return (count);
}

