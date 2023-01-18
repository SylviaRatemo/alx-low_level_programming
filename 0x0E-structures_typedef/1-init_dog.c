#include "dog.h"

/**
 * init_dog - initializes dog
 * @d: structure dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
