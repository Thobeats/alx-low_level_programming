#include "main.h"

/**
 * print_array - prints all the elements in an array
 *
 * @a: array
 * @n: number of items to be printed
 *
 * Return: void
 *
 */


void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		printf("%d,", a[i]);
		i++;
	}

	putchar('\n');
}
