#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - Verifies the absolute value of an integer
 *
 * @n: integer to check
 *
 * Return: the absolute value of the integer
 *
 *
 *
 *
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);

	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
