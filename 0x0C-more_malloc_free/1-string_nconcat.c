#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: size of bytes
 *
 * Return: pointer to the allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = _slen(s1);

	if (n >= _slen(s2))
		i += _slen(s2);
	else
		i += n;

	ptr = (char *) malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n && s2[j]; i++, j++)
		ptr[i] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}

/**
 * _slen - Calculates the strings length
 * @s: the string
 * 
 * Return: the length of the string
 * 
*/

int _slen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		continue;
	}

	return i;
}