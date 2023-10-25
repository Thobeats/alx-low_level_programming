#include "main.h"

/**
 * calc_sqrt - Checks and calculate the sqrt
 *
 * @n: number is squared and compared to main number
 * @b: main number
 *
 * Return: square root
 */

int calc_sqrt(int n, int b)
{
	if (n * n > b)
	{
		return (-1);
	}

	if (n * n == b)
	{
		return (n);
	}

	return (calc_sqrt(n + 1, b));
}

/**
 * _sqrt_recursion - Calculate the square root of a number
 *
 * @n: the number
 * Return: the square root of the number
 */

int _sqrt_recursion(int n)
{
	return (calc_sqrt(1, n));
}
