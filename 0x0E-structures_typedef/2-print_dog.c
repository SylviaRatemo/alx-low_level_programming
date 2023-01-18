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

	if (d->name == NULL)
	{
		if (d->age == 0)
			printf("Name: (nil)\nAge: (nil)\nOwner: %s\n", d->owner);
		else if (d->owner == NULL)
			printf("Name: (nil)\nAge: %f\nOwner: (nil)\n", d->age);
		else
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
	}
	else if (d->age == 0)
	{
		if (d->owner == NULL)
			printf("Name: %s\nAge: (nil)\nOwner: (nil)\n", d->name);
		else
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	}
	else if (d->owner == NULL)
		printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
