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

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;
	_putchar(last_digit);
	return (last_digit);
}
