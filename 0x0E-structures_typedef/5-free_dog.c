#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - free struct dog
 * @d: struct to be freed
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
