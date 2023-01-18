#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - commpute length of string
 * @s: string input
 * Return: the length
 */

int _strlen(char *s)
{
	int i = o;

	for (; *(s + i) != '\0'; i++)
	{
	}

	return (i);
}

/**
 * _strcpy - copy src to dest
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	for (; *(src + len) != '\0'; len++)
	{
	}
	for (; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function to create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (new_dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;
	return (new_dog);
}
