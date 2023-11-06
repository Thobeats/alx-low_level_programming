#include "dog.h"
#define NULL 0

/**
 * init_dog - creates an instance if a dog struct
 *
 * @d: The dog struct address
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner
 *
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
