/**
 * init_dog - function to initialize struct dog
 * @d: structure dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
