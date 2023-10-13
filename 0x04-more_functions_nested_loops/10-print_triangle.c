#include "main.h"

/**
 * print_triangle - Prints a triangle
 *
 * @size: integer determining the dimension of the triangle
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
	int i, j, k, d;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			d = size - (i + 1);
			for (j = d; j > 0; j--)
			{
				_putchar(' ');
			}

			for (k = i; k > 0; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
