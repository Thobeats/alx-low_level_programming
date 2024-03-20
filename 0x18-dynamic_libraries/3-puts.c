#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: the string
 *
 * Return: void
 *
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}