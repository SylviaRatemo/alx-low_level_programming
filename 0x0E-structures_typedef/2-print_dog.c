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

	d.name->name;
	d.age->age;
	d.owner->owner;

	if (d.name == NULL)
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", d.age, d.owner);
	if (d.age == NULL)
		
