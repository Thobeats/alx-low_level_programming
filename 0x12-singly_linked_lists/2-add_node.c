#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of the list
 *
 * @head: a pointer to the header of the list
 * @str: the string value of the new node
 *
 * Return: The address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int strlength;

	new = malloc(sizeof(list_t));
	strlength = 0;

	if (new == NULL)
		return (NULL);

	new->next = (*head);
	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	while (str[strlength])
		strlength++;

	new->len = strlength;
	(*head) = new;

	return ((*head));
}

