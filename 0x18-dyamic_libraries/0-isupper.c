#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 *
 * @c: the character
 *
 * Return: 1 if c is uppercase, 0 if c is lowercase*
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
