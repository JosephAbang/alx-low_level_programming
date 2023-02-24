#include"main.h"

/**
 * print_diagonal - Print diagonal line
 *
 * @n: number of times to print
 *
 * return: void
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
			j = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
