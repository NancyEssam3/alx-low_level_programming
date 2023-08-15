#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - fun that init a variable of type dog.
 * @d: struct to init.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
