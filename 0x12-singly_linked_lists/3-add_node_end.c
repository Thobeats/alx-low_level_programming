#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of the list
 *
 * @head: a pointer to the header of the list
 * @str: the string value of the new node
 *
 * Return: The address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	int strlength;

	new = malloc(sizeof(list_t));
	strlength = 0;
	if (new == NULL)
		return (NULL);
	current = (*head);
	if (current == NULL)
	{
		(*head) = new;
		return ((*head));
	}
	new->next = NULL;
	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	while (str[strlength])
		strlength++;

	new->len = strlength;

	while (current->next != NULL)
		current = current->next;
	current->next = new;

	return ((*head));
}

