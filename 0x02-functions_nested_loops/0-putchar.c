#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point of the whole Script
 *
 * Return: Always 0 (Success)
 *
 *
 *
 */

int main(void)
{
	char message[] = "putchar\n";
	int i;

	i = 0;
	_putchar('_');
	while (i < (int)sizeof(message))
	{
		_putchar(message[i]);
		i++;
	}
	return (0);
}
