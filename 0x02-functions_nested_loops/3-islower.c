#include <stdio.h>
#include "main.h"

/**
 * is_lower - Verifies if a character is a lower case letter or not
 *
 * Return: 1 if character is lowercase, 0 if its false
 *
 *
 *
 *
 */

int _islower(int c)
{
	if (islower(c))
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
}
