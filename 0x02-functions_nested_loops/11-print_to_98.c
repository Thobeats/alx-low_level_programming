#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints the range of numbers from n to 98
 *
 * @n: the reference number
 *
 * Return: the range of numbers
 *
 *
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n > 98)
				printf("%d, ", n);
			if (n == 98)
				printf("%d", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
				printf("%d, ", n);
			if (n == 98)
				printf("%d", n);
			n++;
		}
	}
	printf("\n");
}
