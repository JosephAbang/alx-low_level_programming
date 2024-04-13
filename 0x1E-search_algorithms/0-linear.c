#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - function that uses linear search for a value in an array
 * @array: Array of integers
 * @size: size of array
 * @value: target value
 * Return: Targeted int
 */

int linear_search(int *array, size_t size, int value)
{
<<<<<<< HEAD
	size_t i ;
=======
	size_t i;
>>>>>>> cf2df5730bca9a3cacf50f72a7dd2e734051437f

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
<<<<<<< HEAD
			return i;
=======
			return (i);
>>>>>>> cf2df5730bca9a3cacf50f72a7dd2e734051437f
	}

	return (-1);
}
