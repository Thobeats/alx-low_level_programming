#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point, it prints if the number is positive, negative or zero
 *
 * @n: The integer to test with
 *
 * Return: Always 0 (Success)
 *
 *
 */
int positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}

	return (0);
}
