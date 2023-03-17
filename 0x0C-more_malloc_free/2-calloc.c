#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of members
 * @size: sixe of bytes
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *pointr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointr = malloc(nmemb * size);
	if (pointr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *) pointr + 1) = 0;
	}
	return (pointr);
}
