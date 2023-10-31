#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it.
 *
 * @size: Size of the array
 * @c: the character
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *newArray = (char *) malloc(sizeof(char) * size);

	if (size == 0 || newArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		newArray[i] = c;
	}

	return (newArray);
}
