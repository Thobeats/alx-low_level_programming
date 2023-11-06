#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees any dog
 *
 * @d: the dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}