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
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
}
