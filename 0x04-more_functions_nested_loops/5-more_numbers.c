#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14 (10 times)
 *
 * return: void
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j <= 14)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
