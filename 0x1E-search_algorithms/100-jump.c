#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that searches for a value in a sorted array of
 *			integers using the Jump search algorithm
 * @array: The array
 * @size: the size of the array
 * @value: the vlue to search for
 *
 * Return: the first index of value else -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int low = 0;
	int high = 0;

	if (array == NULL || size == 0)
		return (-1);

	do
	{
		printf("Value checked array[%d] = [%d]\n", high, array[high]);
		if (value >= array[low] && value <= array[low + jump])
		{
			break;
		}
		low = high;
		high = high + jump;
	}while (high < (int)size);
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low <= high && low < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
		low++;
	}
	return (-1);
}

