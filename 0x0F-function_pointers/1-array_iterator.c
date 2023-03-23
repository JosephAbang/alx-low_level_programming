#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Execute function on each elememt of array
 *
 * @array: array
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (size == 0 || array == NULL)
		return;
	for (; i < size; i++)
	{
		action(array[i]);
	}
}
