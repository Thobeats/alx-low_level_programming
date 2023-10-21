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
	char alphabets[] = "abcdefghijklmnopqrstuvqxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char coded[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;
	char *ptr = str;

	while (*ptr)
	{
		for (i = 0; alphabets[i] != '\0'; i++)
		{
			if (*ptr == alphabets[i])
			{
				/**ptr = ((*ptr - 'A' + 13) % 26) + 'A';*/
				*ptr = coded[i];
			}
		}

		ptr++;
	}


	return (str);
}
