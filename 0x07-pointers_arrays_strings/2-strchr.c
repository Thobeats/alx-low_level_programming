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
	int i;

	i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			c_ptr = i;
			return (c_ptr);
		}
		else
		{
			return ('\0');
		}
		s++;
		i++;
	}

}
