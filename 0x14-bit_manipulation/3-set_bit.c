#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 *
 * @n: the integer
 * @index: the index
 *
 * Return: the value of the bit in the index, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	*n = *n | (1UL << index);
	return (*n);
}

