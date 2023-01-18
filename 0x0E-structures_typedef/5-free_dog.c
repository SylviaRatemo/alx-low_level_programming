#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: input dog struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
		return;
	}
	free(d->name);	
	free(d->owner);
	free(d);
}
