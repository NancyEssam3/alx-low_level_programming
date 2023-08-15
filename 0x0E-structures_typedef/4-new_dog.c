#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create new dog struct
 * @name: dog naame
 * @age: dog age
 * @owner: dog owner
 * Return: Dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *namecopy, *ownercopy;
	int namelen = 0, ownlen = 0, i = 0;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	while (name[namelen])
	{
		namelen++;
	}
	while (owner[ownlen])
	{
		ownlen++;
	}

	newDog = malloc(sizeof(dog_t));
	namecopy = malloc(namelen + 1);
	ownercopy = malloc(ownlen + 1);
	if (newDog == NULL || namecopy == NULL || ownercopy == NULL)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	while (i < namelen)
	{
		namecopy[i] = name[i];
		i++;
	}
	namecopy[i] = '\0';
	i = 0;
	while (i < ownlen)
	{
		ownercopy[i] = owner[i];
		i++;
	}
	ownercopy[i] = '\0';
	return (newDog);
}
