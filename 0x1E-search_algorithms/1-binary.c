#include "search_algos.h"

/**
 * binary_search - Uses binary search for a value in a sorted array of integers
 * @array: array of sorted integers
 * @size: size of array
 * @value: targeted value
 * Return: -1 if not present or if array is null
 **/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	return (-1);
}
