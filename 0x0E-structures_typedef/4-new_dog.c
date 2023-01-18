#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - fucnction creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = 0, len2 = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	while (*(name + len1) != '\0')
	{
		len1++;
	}
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	while (*(owner + len2) != '\0')
	{
		len2++;
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->owner);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
