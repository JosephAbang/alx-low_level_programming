#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free memory allocated
 *
 * @d: pointer to dog_t struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
