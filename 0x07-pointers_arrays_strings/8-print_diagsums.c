#include "main.h"

/**
 * print_diagsums - Print the diagonal sum of a 2d array
 *
 * @a: square matrix
 * @size: size of the matrix
 *
 * Return: 0
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
