#include "lists.h"

/**
 * free_list - frees every allocated list memory
 *
 * @head: a pointer to the header of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
	{
		free(head);
		return;
	}

	while (head->next != NULL)
	{
		current = head;
		head = head->next;
		
		free(current->str);
		free(current);
	}

	free(head->str);
	free(head);

	return;
}

