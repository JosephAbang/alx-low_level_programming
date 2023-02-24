#include "main.h"

/**
 * print_line - prints line on console
 *
 * @n: number of lines to print
 *
 * return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
