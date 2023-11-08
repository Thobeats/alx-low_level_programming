#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Creates a dog structure
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure contains the profile of a dog blueprint.
 *
 *
 */

struct  dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
