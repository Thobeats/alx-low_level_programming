#include "main.h"

/**
 * _isdigit - Checks for digits
 *
 * @c: the character
 *
 * Return: 1 if c is a digit, 0 if c is not a digit
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
