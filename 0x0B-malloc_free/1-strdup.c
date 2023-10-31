#include "main.h"

/**
 * _strdup - Duplicates a string and returns a pointer to the duplicate.
 *
 * @str: the string
 *
 * Return: pointer to the new string or NULL if it fails
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *newArray =i (char *) malloc(sizeof(char) * size);

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
