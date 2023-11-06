#include "dog.h"

/**
 * print_dog - Prints the details of the dog struct
 *
 * @d: The dog structure address
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

}
