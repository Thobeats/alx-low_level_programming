#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string
 *
 * Return: void
 *
 */


void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	start = (length + 1)  / 2;

	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}
	putchar('\n');
}
