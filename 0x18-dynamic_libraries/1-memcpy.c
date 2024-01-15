#include <stdio.h>

/**
 * _memcpy - Copies a memory area to another
 *
 * @dest: destination
 * @src: Source
 * @n: the amount of memory space to be used
 *
 * Return: the reassigned pointer
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;

	while (n > 0)
	{
		*dest = *src;

		dest++;
		src++;
		n--;
	}

	return (dest_ptr);

}
