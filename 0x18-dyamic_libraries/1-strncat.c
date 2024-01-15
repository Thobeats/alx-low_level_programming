#include "main.h"

/**
 * _strncat - returns a concatenated string
 *
 * @src: appending String
 * @dest: appended String
 * @n: determinant length
 *
 * Return: concatenated string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	*dest_ptr = '\0';

	return (dest);
}
