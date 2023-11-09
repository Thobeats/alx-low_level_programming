#define NULL 0
#include <stdlib.h>

/**
 * int_index - searches for an integer using an array
 *
 * @array: the array
 * @size: the array size
 * @cmp: the function
 *
 * Return: -1 on failed, index of the integer on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
			
			return (-1);
		}
	}
	
	return (-1);

}

