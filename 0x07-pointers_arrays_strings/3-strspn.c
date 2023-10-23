#include <stdio.h>

/**
 * _strspn - Finds the length of the prefix substring
 *
 * @s: string
 * @accept: prefix substring
 *
 * Return: length of the prefix
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;

	length = 0;
	while (*s != '\0' && *accept != '\0')
	{
		if (*s == *accept)
		{
			length++;
		}

		s++;
		accept++;
	}

	return (length);

}
