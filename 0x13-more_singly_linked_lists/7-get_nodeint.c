#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of the list
 *
 * @head: The head of the list
 * @index: the index of the node
 *
 * Return: the node instance
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	listint_t *node;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	count = 0;
	current = head;
	while (current != NULL)
	{
		if (current == NULL)
			return (NULL);

		if (index == count)
		{
			node = current;
			break;
		}
		current = current->next;
		count++;
	}

	return (node);
}
