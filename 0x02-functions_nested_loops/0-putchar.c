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
	char message[] = "_putchar\n";
	int i;

	i = 0;
	while (i < (int)sizeof(message) - 1)
	{
		_putchar(message[i]);
		i++;
	}
	return (0);
}
