#include "main.h"

/**
 * print_numbers - Prints all the numbers from 0 to 9
 *
 * Return: void
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + (i % 10));
	}
	_putchar('\n');
}
