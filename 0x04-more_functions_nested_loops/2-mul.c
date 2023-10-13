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
	/**
	 * char buffer[10];
	 * int i = 0;
	 */

	result = a * b;
	/**if (result < 0)
	{
		result = -result;
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

	}**/

	return result;
}
