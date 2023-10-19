#include "main.h"

/**
 * leet - Decodes a string to 1337
 *
 * @str: char array
 *
 * Return: decoded string
 */

char *leet(char *str)
{
	char lowercase[] = "aeotl";
	char uppercase[] = "AEOTL";
	char code[] = "43071";
	int i;
	char *ptr = str;

	while (*ptr)
	{
		for (i = 0; lowercase[i] != '\0'; i++)
		{
			if (*ptr == lowercase[i] || *ptr == uppercase[i])
			{
				*ptr = code[i];
			}
		}

		ptr++;
	}


	return (str);
}
