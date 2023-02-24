#include "main.h"

/**
 * print_most_numbers - print numbers with exception
 *
 * return: void
 */

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}
