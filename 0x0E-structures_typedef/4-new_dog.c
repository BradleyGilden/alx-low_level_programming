#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create new struct dog
 * @name: dogs name to be copied to new struct
 * @age: age to be copied to new struct
 * @owner: owners name to be copied to new struct
 *
 * Return: pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, n_len = 0, o_len = 0;
	dog_t *r;

	r = malloc(sizeof(dog_t));
	if (r == NULL)
		return (NULL);

	r->age = age;
	while (name[i++])
		n_len++;
	i = 0;
	while (owner[i++])
		o_len++;

	r->name = malloc(sizeof(r->name) * (n_len + 1));
	if (r->name == NULL)
	{
		free(r->name);
		free(r);
		return (NULL);
	}
	r->owner = malloc(sizeof(r->owner) * (o_len + 1));
	if (r->owner == NULL)
	{
		free(r->owner);
		free(r);
		return (NULL);
	}
	for (i = 0; i < n_len; i++)
		r->name[i] = name[i];
	for (i = 0; i < o_len; i++)
		r->owner[i] = owner[i];

	return (r);
}
