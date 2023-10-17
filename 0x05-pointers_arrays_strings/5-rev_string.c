#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string
 *
 * Return: void
 *
 */


void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	char reverse[length + 1];

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		reverse[i] = s[i];
	}

	reverse[length] = '\0';

	strcpy(s, reverse);
}
