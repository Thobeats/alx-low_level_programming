#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print all strings
 *
 * @separator: string to print in between the strings
 * @n: the number of strings
 *
 * Return: void just print the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";
		if (i != (n - 1))
		{
			printf("%s", s);
			if (separator != NULL)
				printf("%s", separator);
		}
		else
			printf("%s\n", s);
	}
	va_end(args);
}
