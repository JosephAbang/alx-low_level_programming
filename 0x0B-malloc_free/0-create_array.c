#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: Size of array
 * @c: char
 *
 * Return: Pointer ot address of char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
