#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 *
 * @n: integer to check
 *
 * Return: the last digit of the integer
 *
 *
 *
 *
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (n);
}
