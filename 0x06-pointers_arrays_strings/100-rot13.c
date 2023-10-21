#include "main.h"

/**
 * rot13 - encodes a string with the rot13 format
 *
 * @str: char array
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i;
	char *ptr = str;

	while (*ptr)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (*ptr <= 'A' && *ptr >= 'Z')
			{
				*ptr = ((*ptr - 'A' + 13) % 26) + 'A';
			}
			else
			{
				*ptr = ((*ptr - 'a' + 13) % 26) + 'a';
			}
		}

		ptr++;
	}


	return (str);
}
