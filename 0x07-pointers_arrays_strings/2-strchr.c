#include <stdio.h>

/**
 * _strchr - Locates a character c in a string s 
 *
 * @s: string
 * @c: character
 *
 * Return: a pointer to the character
 *
 */

char *_strchr(char *s, char c)
{
	char *c_ptr;

	while (*s != '\0')
	{
		if (*s == c)
		{
			c_ptr = s;
			break;
		}
		else
		{
			return ('\0');
		}
		s++;
	}

	return (c_ptr);

}
