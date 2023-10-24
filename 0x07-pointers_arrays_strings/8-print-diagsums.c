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
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0 && j = 0; i < size && j < size; i++ && j++)
	{
		sum1 = a[i][j] + sum1;
	}

	for (i = 0 && j = size; i < size && j > 0; i++ && j--)
	{
		sum2 = a[i][j] + sum2;
	}

	printf("%d, %d", sum1, sum2);
}
