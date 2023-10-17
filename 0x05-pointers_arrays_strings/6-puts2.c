#include "main.h"

/**
 * puts2 - prints a string to stdout
 *
 * @str: the string
 *
 * Return: void
 *
 */


void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '.')
			break;

		printf("%c", str[i]);
		i += 2;
	}

	putchar('\n');
}
