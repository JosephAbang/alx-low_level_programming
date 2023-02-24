#include "main.h"

/**
 * print_square - Print squares using size
 *
 * @size: argument used to print square
 *
 * return: void
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
	}
	else
		_putchar('\n');
}
