#include "main.h"

/**
 * string_toupper - compares two strings
 *
 * @str: char array
 *
 * Return: uppercase character
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		*ptr = *ptr - 32;
		ptr++;
	}

	return (str);
}
