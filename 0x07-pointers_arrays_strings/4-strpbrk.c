#include "main.h"

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
	int i;

	while (*s != '\0')
	{
		for (int i = 0; i < strlen(accept); i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);

}
