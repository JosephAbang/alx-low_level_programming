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
	if (n > 0)
	{
		while (n >= 0)
		{
			_putchar('_');
			n--;
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
