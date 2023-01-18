#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: input dog struct
 */

void free_dog(dog_t *d)
{
	free(d.name);
	free(d.age);
	free(d.owner);
	free(d);
}
