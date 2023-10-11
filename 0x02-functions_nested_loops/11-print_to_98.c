#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints the range of numbers from n to 98
 *
 * @n: the reference number
 *
 * Return: the range of numbers
 *
 *
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n >= 100)
			{
				_putchar('0' + (n / 100));
				_putchar('0' + ((n / 10) % 10));
			}
			else
			{
				_putchar('0' + (n / 10));
			}
			_putchar((n % 10));

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n >= 100)
			{
				_putchar('0' + (n / 100));
				_putchar('0' + ((n / 10) % 10));
			}
			else
			{
				_putchar('0' + (n / 10));
			}
			_putchar((n % 10));

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	_putchar('\n');
}
