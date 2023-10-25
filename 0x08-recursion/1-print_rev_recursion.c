#include "main.h"

/**
 * _print_rev_recusrion - Prints a string in reverse
 *
 * @s: String
 * Return: void
 */

void _print_rev_recusrion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_puts_recursion(s + 1);

	_putchar(*s);
}
