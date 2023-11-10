#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - print all characters
 *
 * @format: format to be followed
 *
 * Return: void just print the strings
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator;

	fmt array[] = {
		{"c", printc},
		{"i", printi},
		{"f", printfl},
		{"s", prints},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	separator = "";
	while (format != NULL && format[i])
	{
		j = 0;
		while (array[j].c)
		{
			if (format[i] == *(array[j].c))
			{
				printf("%s", separator);
				array[j].func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}

/**
 * printc - Prints a char
 *
 * @args: arguments
 *
 */

void printc(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * printi - prints an integer
 *
 * @args: arguments
 */

void printi(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * printfl - Prints a float
 *
 * @args: arguments
 */

void printfl(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * prints - prints a string
 *
 * @args: arguments
 */

void prints(va_list args)
{
	char *s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}

