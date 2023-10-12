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

	if ((a >= '0' && a <= '9') && (b >= '0' && b <= '9'))
	{
		result = a * b;
		/*if (result > 99)
		{
			_putchar('0' + (result / 100));
			_putchar('0' + (result / 10) % 10);
		}
		else if (result > 10)
		{
			_putchar('0' + (result / 10));
		}
			_putchar('0' + (result % 10));
		*/
		printf("%d",result);
	}

	return (0);
}
