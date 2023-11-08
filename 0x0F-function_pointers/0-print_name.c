#include "main.h"
#define NULL 0

/**
 * print_name - Prints the name given
 *
 * @name: The name given
 * @f: the referred function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		(*f)('\0');
	}
	else
	{
		(*f)(name);
	}
}
