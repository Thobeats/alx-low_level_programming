#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 *
 * @n: the integer
 * @index: the index
 *
 * Return: the value of the bit in the index, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}

