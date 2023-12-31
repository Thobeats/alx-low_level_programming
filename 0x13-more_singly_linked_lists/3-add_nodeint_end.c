#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of the list
 *
 * @head: the head of the list
 * @n: the int property of the new node
 *
 * Return: the address of the new node, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newList;
	listint_t *current;

	newList = malloc(sizeof(struct listint_s));

	if (newList == NULL)
		return (NULL);

	newList->n = n;
	newList->next = NULL;
	current = (*head);
	if (current == NULL)
	{
		(*head) = newList;
		return ((*head));
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	newList->next = NULL;
	current->next = newList;

	return ((*head));
}
