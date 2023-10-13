#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 *
 * @n: integer determining the length of the line
 *
 * Return: void
 *
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
