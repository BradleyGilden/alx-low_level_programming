#include "dog.h"

/**
 * init_dog - initializes struct dog
 * @d: pointer to struct dog
 * @name: dogs name
 * @age: dogs age as a flointing pt num
 * @owner: owners name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner =  owner;
}
