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
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
