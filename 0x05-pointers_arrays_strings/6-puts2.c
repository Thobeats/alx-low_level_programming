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
	int j = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[j]);
		i++;
		j += 2;
	}

	putchar('\n');
}
