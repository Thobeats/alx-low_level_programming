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
	char message[] = "_putchar";
	int i;

	i = 0;
	while (i < (int)sizeof(message))
	{
		_putchar(message[i]);
		i++;
	}
	return (0);
}
