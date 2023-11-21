#include "lists.h"

/**
 * delete_nodeint_at_index - insert a new node at the index
 *
 * @head: the head of the list
 * @index: the index
 *
 * Return: the address of the new node, NULL if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current1;
	listint_t *current2;
	unsigned int count;

	if (head == NULL)
		return (-1);
	count = 0;
	current1 = (*head);
	current2 = current1->next;
	while (current2->next != NULL)
	{
		if (count == (idx - 1))
		{
			current2 = current1->next;
			free(current1->next);
			current1->next = current2->next;
			return (1);
		}
		else
			current1 = current2;
			current2 = current1->next;
		count++;
	}

	return (-1);
}
