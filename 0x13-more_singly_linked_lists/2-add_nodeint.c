#include "lists.h"

/**
 * add_nodeint - adds a new node to the list
 *
 * @head: the head of the list
 * @n: the int property of the new node
 *
 * Return: the address of the new node, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newList;

	newList = malloc(sizeof(struct listint_s));

	if (newList == NULL)
		return (NULL);

	newList->n = n;
	newList->next = (*head);
	(*head) = newList;

	return ((*head));
}
