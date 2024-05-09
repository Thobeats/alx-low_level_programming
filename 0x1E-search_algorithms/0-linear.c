#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 *			of integers using the Linear search algorithm
 * @array: The array
 * @size: the size of the array
 * @value: the vlue to search for
 *
 * Return: the first index of value else -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int itr = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (itr < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", itr, array[itr]);
		if (array[itr] == value)
			return (itr);
		itr++;
	}

	return (-1);
}

