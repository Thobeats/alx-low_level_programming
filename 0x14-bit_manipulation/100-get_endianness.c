#include "main.h"
/**
 * get_endianness - checks for endianness
 *
 * Return: 0 for big endian, 1 for small endian
 */

int get_endianness(void)
{
	unsigned int num;
	char *byte = (char *)&num;

	return ((*byte == 1) ? 1 : 0);
}

