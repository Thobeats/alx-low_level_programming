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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);

}
