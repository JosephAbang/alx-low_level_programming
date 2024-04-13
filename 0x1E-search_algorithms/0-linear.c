#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * linear_search - function that uses linear search for a value in an array
 * @array: Array of integers
 * @size: size of array
 * @value: target value
 * Return: Targeted int
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	int j = (int)size;

	if (!array)
		return (-1);
	while(i < j)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			break;
		}
		else if (i == j)
			return (-1);
		else
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}
