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

	if (h == NULL && idx > 0)
		return (NULL);
	newNode = malloc(sizeof(*newNode));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	i = *h;
	count = 0;
	while (i != NULL)
	{
		count++;
		if (count == idx)
		{
			j = i->next;
			i->next = newNode;
			newNode->prev = i;
			j->prev = newNode;
			newNode->next = j;
			
			return (*h);
		}
		i = i->next;
	}

	return (NULL);
}
