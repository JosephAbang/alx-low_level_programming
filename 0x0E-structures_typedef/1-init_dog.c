#include "dog.h"

/**
 * init_dog - Initializes struct dog
 *
 * @d: identifier
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != ((void *)0))
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
