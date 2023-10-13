#include "main.h"

/**
 * print_most_numbers - Prints all the numbers from 0 to 9
 *
 * Return: void
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + (i % 10));
		}
	}
	_putchar('\n');
}
