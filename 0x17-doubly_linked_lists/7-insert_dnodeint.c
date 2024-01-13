#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: the head of the list
 * @idx: the index
 * @n: the value of the new node
 * Return: the list, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *i;
	dlistint_t *j;
	unsigned int count;

	newNode = malloc(sizeof(*newNode));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (h == NULL)
		return (newNode);
	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = (*h);
		if ((*h) != NULL)
			(*h)->prev = newNode;
		(*h) = newNode;
		return (*h);
	}
	i = *h;
	count = 0;
	while (i != NULL)
	{
		count++;
		if (count == idx)
		{
			j = i->prev;
			i->prev = newNode;
			newNode->next = i;
			j->next = newNode;
			newNode->prev = j;
			return (newNode);
		}
		i = i->next;
	}
	free(newNode);
	return (NULL);
}
