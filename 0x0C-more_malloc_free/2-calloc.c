#include "main.h"

/**
 * _calloc - Allocates memory using malloc for an array
 *
 * @nmemb: number of elements in the array
 * @size: The size of the array
 *
 * Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *ptr2;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr2 = (char *) malloc(nmemb * size);

	if (ptr2 == NULL)
		return (NULL);

	for (i = 0; ptr2[i]; i++)
		ptr2[i] = 0;

	ptr = (void *) ptr2;

	return (ptr);
}
