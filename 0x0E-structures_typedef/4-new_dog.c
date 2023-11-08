#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner of the dog
 *
 * Return: new dog on success, NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	char *name_t;
	char *owner_t;
	dog_t *doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		continue;
	name_t = malloc((i + 1) * sizeof(char));
	if (name_t == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		name_t[i] = name[i];
	name_t[i] = '\0';
	for (i = 0; owner[i]; i++)
		continue;
	owner_t = malloc(sizeof(char) * (i + 1));
	if (owner_t == NULL)
	{
		free(doggy);
		free(name_t);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		owner_t[i] = owner[i];
	owner_t[i] = '\0';
	doggy->name = name_t;
	doggy->age = age;
	doggy->owner = owner_t;
	return (doggy);
}
