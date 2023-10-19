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
	int temp;

	while ((n - 1) > 0 && i < 0)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

		n--;
		i++;
	}
}
