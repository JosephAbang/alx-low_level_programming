#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers
 *
 * @a: array
 *
 * @n: number of array elements
 *
 * return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			printf("\n");;
		}
		else if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
}
