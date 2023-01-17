#include "dog.h"

/**
 * new_dog - function to create a new dog
 * @name: name of dog
 * @age: age of dog
 * owner: owner of dog
 * Return: Nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
}
