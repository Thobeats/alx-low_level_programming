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
	int jump = sqrt(size);
	int low = 0;
	int high = low;

	if (array == NULL || size == 0)
		return (-1);

	while (jump <= (int)size - 1)
	{
		if (value > array[high])
		{
			printf("Value checked array[%d] = [%d]\n", high, array[high]);

			low = high;
			high = low + jump;
		}
		else
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
	}

	return (-1);
}

