#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - The structure of the list s
 *
 * @str: the string property of the structure
 * @len: the size of the string property
 * @next: the pointer to the next list, points to NULL if it is the last
 *
 * Description: The structure holds three properties
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif
