#include "main.h"
/**
 * flip_bits - Returns the number of bits you need to flip
 *
 * @n: the first input
 * @m: the second input
 *
 * Return: the value of the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned int xor;

	count = 0;
	xor = n ^ m;

	while (xor)
	{
		if ((n & 1) != (m & 1))
			count++;
		n = n >> 1;
		m = m >> 1;
	}

	return (count);
}

