#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at the index
 *
 * @head: the head of the list
 * @idx: the index
 * @n: the int property of the new node
 *
 * Return: the address of the new node, NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newList;
	listint_t *current;
	unsigned int count;

	count = 0;
	newList = malloc(sizeof(struct listint_s));

	if (newList == NULL)
		return (NULL);

	current = (*head);
	if (current == NULL && idx > 0)
	{
		return (NULL);
	}

	while (current->next != NULL)
	{
		if (count == idx)
		{
			newList->n = n;
			newList->next = current->next;
			current->next = newList;
			return (newList);
		}
		else
			current = current->next;
		count++;
	}

	return (NULL);
}
