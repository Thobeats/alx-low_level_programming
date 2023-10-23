#include <stdio.h>

/**
 * _strpbrk - Finds the first occurence of the character in a string
 *
 * @s: string
 * @accept: prefix substring
 *
 * Return: pointer to the occurence
 *
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0' && *accept != '\0')
	{
		if (*s == *accept)
		{
			return (s);
		}

		s++;
		accept++;
	}

	return (NULL);

}
