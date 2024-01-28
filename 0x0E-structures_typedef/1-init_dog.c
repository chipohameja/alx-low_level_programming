#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog
 * @d: point to dog being initialized
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Nothing
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
