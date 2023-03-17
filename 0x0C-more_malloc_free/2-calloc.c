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
	char *k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointr = malloc(nmemb * size);
	if (pointr == NULL)
		return (NULL);
	k = pointr;
	for (i = 0; i < (nmemb * size); i++)
	{
		k[i] = 0;
	}
	return (k);
}
