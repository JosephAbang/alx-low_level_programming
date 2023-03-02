#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b = 0, temp;

	for (; b < n / 2; b++)
	{
		temp = a[b];
		a[b] = a[n - b - 1];
		a[n - 1 - b] = temp;
	}
}
