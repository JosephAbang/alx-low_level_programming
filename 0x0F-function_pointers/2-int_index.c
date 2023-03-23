#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - returns ths index of first appearance of nunber
 *
 * @array: array
 * @size: array size
 * @cmp: function pointer
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
