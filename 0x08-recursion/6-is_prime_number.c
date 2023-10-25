#include "main.h"

/**
 * calc_prime - Checks for a prime number
 *
 * @n: checker
 * @b: main number
 *
 * Return: prime number
 */

int calc_prime(int n, int b)
{
	if (b % n == 0 || b < 2)
	{
		return (0);
	}
	else if (n == b - 1)
	{
		return (1);
	}
	else if (b > n)
	{
		return (calc_prime(n + 1, b));
	}

	return (1);
}

/**
 * is_prime_number- Checks for a prime number
 *
 * @n: the number
 * Return: prime number
 */

int is_prime_number(int n)
{
	return (calc_prime(2, n));
}
