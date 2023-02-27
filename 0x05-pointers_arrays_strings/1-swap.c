#include "main.h"

/**
 * swap_int - Swap two integers that are pointer
 *
 * @a: First int
 *
 * @b: Second int
 *
 * return: Nothing
 */

void swap_int(int *a, int *b)
{
	int new = *a;

	*a = *b;
	*b = new;
}
