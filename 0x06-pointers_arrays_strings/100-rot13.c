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
	char lowercase[] = "abcdefghijklm";
	char uppercase[] = "ABCDEFGHIJKLM";
	int i;
	char *ptr = str;

	while (*ptr)
	{
		for (i = 0; lowercase[i] != '\0'; i++)
		{
			if (*ptr == lowercase[i] || *ptr == uppercase[i])
			{
				*ptr = *ptr + 13;
			}
			else
			{
				*ptr = *ptr - 13;
			}
		}

		ptr++;
	}


	return (str);
}
