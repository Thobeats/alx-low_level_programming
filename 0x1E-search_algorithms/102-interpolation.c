#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value
 *			in a sorted array of
 *			integers using the Interpolation search algorithm
 * @array: The array
 * @size: the size of the array
 * @value: the vlue to search for
 *
 * Return: the first index of value else -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	double pos;

	if (array == NULL || size == 0)
		return (-1);

	while (pos < (int)size)
	{
		pos = (double)low +
				(((double)value - (double)array[low]) /
				((double)array[high] - (double)array[low]) *
				((double)high - (double)low));

		if (pos < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[(int)pos]);
			if (array[(int)pos] == value)
			{
				return ((int)pos);
			}

			if (array[(int)pos] > value)
			{
				high = array[(int)pos - 1];
			}
			else
			{
				low = pos + 1;
			}
		}
		else
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
		}
	}
	return (-1);
}

