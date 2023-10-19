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

	while ((n - 1) > 0 && i < 0)
	{
		a[i] = a[n];

		n--;
		i++;
	}
}
