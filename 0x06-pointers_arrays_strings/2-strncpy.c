#include "main.h"

/**
 * _strncpy - copies a string into another one
 *
 * @src: appending String
 * @dest: appended String
 * @n: determinant length
 *
 * Return: copy string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest_ptr = '\0';
		dest_ptr++;
		n--;
	}

	return (dest);
}
