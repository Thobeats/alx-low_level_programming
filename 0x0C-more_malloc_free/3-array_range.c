#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum integer
 * @max: max integer
 *
 * Return: pointer to the allocated memory
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = (int *) malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; (min + i) <= max; i++)
		ptr[i] = min + i;

	return (ptr);
}
