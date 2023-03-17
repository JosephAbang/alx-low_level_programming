#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to arrah of integers
 */

int *array_range(int min, int max)
{
	int j, len;
	int *arr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
		arr[j] = min + j;
	return (arr);
}
