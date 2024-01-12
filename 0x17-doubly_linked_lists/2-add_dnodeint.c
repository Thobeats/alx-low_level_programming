#include "lists.h"

/**
 * add_dnodeint - add a new node to the beginning of the list
 * @n: the new value
 * @head: the head of the list
 * Return: the doubly linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (*head);
	newNode = malloc(sizeof(*newNode));

	if (!newNode)
	{
		return (NULL);
	}
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;
	return (*head);
}
