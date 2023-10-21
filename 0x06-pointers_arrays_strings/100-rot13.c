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
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char coded[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;
	char *ptr = str;

	while (*ptr)
	{
		for (i = 0; alpha[i] != '\0'; i++)
		{
			if (*ptr == alpha[i])
			{
				*ptr = coded[i];
			}
		}

		ptr++;
	}


	return (str);
}
