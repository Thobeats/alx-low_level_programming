#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the times table of 9
 *
 * Return: nothing
 *
 *
 *
 *
 */

void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 10; j++)
		{
			res = i * j;

			if (res > 9)
			{
				_putchar('0' + (res / 10));
			}
			else
			{
				_putchar(' ');
			}

			_putchar('0' + (res % 10));
			
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
