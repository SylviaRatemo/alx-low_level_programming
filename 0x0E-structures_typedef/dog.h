#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
