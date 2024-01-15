#include <stdio.h>

/**
 * _strstr - Finds the first occurence of a string in a string
 *
 * @haystack: string
 * @needle: prefix substring
 *
 * Return: pointer to the occurence
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
