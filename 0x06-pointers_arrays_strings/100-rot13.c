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
	char lowercase[] = "abcdefghijklmnopqrstuvqxyz";
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	char *ptr = str;

	while (*ptr)
	{
		for (i = 0; lowercase[i] != '\0'; i++)
		{
			if (*ptr == lowercase[i])
			{
				*ptr = ((*ptr - 'a' + 13) % 26) + 'a';
			}	
		}

		ptr++;
	}


	return (str);
}
