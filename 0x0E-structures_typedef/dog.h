#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for new type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#define struct dog dog_t

#endif
