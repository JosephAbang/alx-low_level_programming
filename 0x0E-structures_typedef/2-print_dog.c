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
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
