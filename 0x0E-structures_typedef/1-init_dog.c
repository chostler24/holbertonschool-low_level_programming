#include "dog.h"

/**
 * init_dog - initialized struct
 *
 * @d: dog data
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 *
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
