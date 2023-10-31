#include "main.h"

/**
 * alloc_grid - Returns 2 dimensional arrays of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int rows, columns;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **) malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (rows = 0; rows < height; rows++)
	{
		array[rows] = (int *) malloc(width * sizeof(int));
		if (array[rows] == NULL)
		{
			for (; rows >= 0; rows--)
			{
				free(array[rows]);
			}
			free(array);
			return (NULL);
		}
	}
	for (rows = 0; rows < height; rows++)
	{
		for (columns = 0; columns < width; columns++)
		{
			array[rows][columns] = 0;
		}
	}
	return (array);
}
