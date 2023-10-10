#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints out all the alphabet in lowercase
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
