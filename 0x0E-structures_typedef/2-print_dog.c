#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints struct dog
 * @d: structure dog
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	if (d.name == NULL)
		d.name = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s", d.name, d.age, d.owner);
}
