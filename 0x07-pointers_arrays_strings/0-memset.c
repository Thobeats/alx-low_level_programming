#include <stdio.h>

/**
 * _memset - Reassigns the value set in an address
 *
 * @s: the address
 * @b: new value
 * @n: the amount of memory space to be used
 *
 * Return: the reassigned pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *s_ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (s_ptr);

}
