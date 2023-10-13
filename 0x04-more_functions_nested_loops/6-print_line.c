#include "main.h"

/**
 * print_line - Prints line on the terminal
 *
 * @c: integer determining the number of lines
 *
 * Return: void
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
