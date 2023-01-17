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

#define dog_t (struct dog)
dog_t *ne_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d,char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
