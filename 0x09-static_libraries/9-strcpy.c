#include "main.h"

/**
 * _strcpy - prints a string to stdout
 *
 * @dest: the destination
 * @src: the source
 *
 * Return: char
 *
 */


char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
