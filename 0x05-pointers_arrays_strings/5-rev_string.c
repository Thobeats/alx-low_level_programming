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
	int length = 0;
	int i;
	char reverse[20];

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		reverse[i] = s[i];
	}

	*s = reverse;
}
