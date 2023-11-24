#include "main.h"
/**
 * get_bit - Converts a binary to an unsigned integer
 *
 * @n: the integer
 * @index: the index
 *
 * Return: the value of the bit in the index, -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) != 0);
}

