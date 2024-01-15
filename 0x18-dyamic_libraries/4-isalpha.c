#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Verifies if a character is an alphabet or not
 *
 * @c: character to check
 *
 * Return: 1 if character is an alphabet, 0 if it is not
 *
 *
 *
 *
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
