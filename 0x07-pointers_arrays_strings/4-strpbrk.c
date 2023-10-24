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
	char *a;

	while (*s != '\0')
	{
		*a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL);

}
