#include "main.h"

/**
 * print_rev - prints in reverse
 *
 * @s: the string
 *
 * Return: void
 *
 */


void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
