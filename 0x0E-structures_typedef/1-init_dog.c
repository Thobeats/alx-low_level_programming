#include "dog.h"

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
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		exit(0);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
