#define NULL 0
#include <stdlib.h>

/**
 * array_iterator - Uses a function to iterate through an array
 *
 * @array: the array
 * @size: the array size
 * @action: the function
 *
 * Return: void
 */

void arry_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	else
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}	
	}
}
