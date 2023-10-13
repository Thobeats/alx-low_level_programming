#include "main.h"
/**
 * main - Print integers
 *
 * @n: Integer to consider
 *
 * Return: Void
 */

void print_number(int n)
{
	int div, temp;

	div = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	temp = n;
	
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (temp > 9)
		{
			div *= 10;
			temp /= 10;
		}

		while (div >= 1)
		{
			_putchar('0' + ((n / div) % 10));
			div /= 10;
		}
	}	
}
