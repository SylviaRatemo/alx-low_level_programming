#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function prints struct dog
 * @d: input struct dog
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
