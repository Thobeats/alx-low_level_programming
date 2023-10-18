#include "main.h"

/**
 * _strcat - returns a concatenated string
 *
 * @src: appending String
 * @dest: appended String
 *
 * Return: concatenated string
 *
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}
