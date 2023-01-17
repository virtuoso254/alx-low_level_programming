#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize struct dog
 * @d:pointer
 * @name: pointer to name
 * @age: pointer of type age
 * @owner: owner of the dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
