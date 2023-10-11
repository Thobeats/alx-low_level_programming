#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the times table of n
 *
 * Return: nothing
 *
 */

void print_times_table(int n)
{
	int i, j, res;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (res > 9)
				{
					_putchar('0' + (res / 10));
				}
				else if (j > 0)
				{
					_putchar(' ');
				}
				_putchar('0' + (res % 10));
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
