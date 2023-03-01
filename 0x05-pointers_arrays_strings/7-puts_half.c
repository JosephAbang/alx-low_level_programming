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

	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
