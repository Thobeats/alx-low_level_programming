#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to the end of the list
 * @head: The head of the list
 * @n: The new value for the node
 * Return: the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *i;

	newNode = malloc(sizeof(*newNode));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	i = *head;
	while (i->next != NULL)
	{
		i = i->next;
	}

	i->next = newNode;
	newNode->prev = i;

	return (*head);
}
