#include "main.h"
/**
 * binary_to_uint - Converts a binary to an unsigned integer
 *
 * @b: the binary of 0s and 1s
 *
 * Return: unsigned int or 0 if b is NULL or has a different character
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int num;
	int bit, strlen;

	i = 0;
	num = 0;

	if (b == NULL)
		return (0);

	strlen = _strlen(b) - 1;

	while (strlen >= 0)
	{
		if (b[strlen] != '0' && b[strlen] != '1')
			return (0);

		bit = b[strlen] - '0';
		num += _pow(i, 2) * bit;
		strlen--;
		i++;
	}

	return (num);
}

/**
 * _pow - calculates a number raise to a power
 *
 * @num: the number
 * @sub: the power
 *
 * Return: 1 if power is 0 or the calculated power
 */

unsigned int _pow(unsigned int sub, unsigned int num)
{
	unsigned int res;

	res = num;
	if (sub == 0)
		return (1);
	while (sub > 1)
	{
		res *= num;
		sub--;
	}

	return (res);
}

/**
 * _strlen - calculates the length of the string
 *
 * @b: the string
 *
 * Return: string length
 */

int _strlen(const char *b)
{
	int count;

	if (b == NULL)
		return (0);

	for (count = 0; b[count]; count++)
		continue;

	return (count);
}
