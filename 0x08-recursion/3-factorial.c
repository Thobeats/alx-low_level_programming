#include "main.h"

/**
 * factorial - Solves the factorial of a number
 *
 * @n: a number
 * Return: the length of the string
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
