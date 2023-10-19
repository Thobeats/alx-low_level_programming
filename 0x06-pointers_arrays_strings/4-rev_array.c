#include "main.h"

/**
 * reverse_array - reverses the order of the elements in an array
 *
 * @a: the array
 * @n: the length of the array
 *
 * Return: the reversed array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < (j))
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		j--;
		i++;
	}
}
