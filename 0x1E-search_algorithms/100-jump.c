#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array of
 *			integers using the Binary search algorithm
 * @array: The array
 * @size: the size of the array
 * @value: the vlue to search for
 *
 * Return: the first index of value else -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size), low = 0, high = low;

	if (array == NULL || size == 0)
		return (-1);

	while (high <= ((int)size + jump))
	{
		printf("Value checked array[%d] = [%d]\n", high, array[high]);

		if ((value > array[low] && value < array[high]))
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			while (low <= high)
			{
				printf("Value checked array[%d] = [%d]\n", low, array[low]);
				if (array[low] == value)
				{
					return (low);
				}
				low++;
			}
			break;
		}

		if (high > (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			while (low <= (int)size - 1)
			{
				printf("Value checked array[%d] = [%d]\n", low, array[low]);
				low++;
			}
		}


		low = high;
		high = low + jump;
	}
	return (-1);
}

