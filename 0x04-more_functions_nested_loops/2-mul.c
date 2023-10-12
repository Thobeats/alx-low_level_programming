#include "main.h"

/**
 * mul - Multiplies two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: 0 for success
 *
 */

int mul(int a, int b)
{
	int result;
	char buffer[20];
	int i = 0;

	result = a * b;
	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}

	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
		while (result > 0)
		{
			buffer[i] = '0' + (result % 10);
			result /= 10;
			i++;
		}

		while (i > 0)
		{
			i--;
			_putchar(buffer[i]);
		}
	}
	return (0);
}
