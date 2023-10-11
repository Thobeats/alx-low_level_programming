#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Verifies if a character is a lower case letter or not
 *
 * @c: character to check
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
		return (1);
	}
	else
	{
		return (0);
	}
}
