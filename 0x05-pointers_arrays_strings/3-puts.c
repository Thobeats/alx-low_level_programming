#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: the string
 *
 * Return: void
 *
 */


void _strlen(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		s++;
	}

	putchar('\n');

	return (0);
}
