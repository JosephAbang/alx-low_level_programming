#include "main.h"

/**
 * puts_half - Print half of a string
 *
 * @str: Pointer string
 *
 * return: void
 */

void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (i > (len / 2))
			_putchar(str[i]);
	}
	_putchar('\n');
}
