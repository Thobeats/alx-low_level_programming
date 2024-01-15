#include "main.h"

/**
 * _strspn - Finds the length of the prefix substring
 *
 * @s: string
 * @accept: prefix substring
 *
 * Return: length of the prefix
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;
	int isAccepted[256] = {0};

	length = 0;
	while (*accept != '\0')
	{
		isAccepted[(unsigned char)*accept] = 1;
		accept++;
	}

	while (*s && isAccepted[(unsigned char)*s])
	{
		length++;
		s++;
	}

	return (length);

}
