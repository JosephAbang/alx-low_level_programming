#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Print struct with format
 *
 * @d: pointer to character
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)\n";
		}
		if (d->age == 0)
		{
			d->age = 0;
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)\n";
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		return;
}
