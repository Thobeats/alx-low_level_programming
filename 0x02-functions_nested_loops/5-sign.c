#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - Verifies the sign of a number
 *
 * @n: number to check
 *
 * Return: 1 if n > zero,0 n = zero and -1 the n < zero
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
