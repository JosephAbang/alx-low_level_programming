#include "main.h"

/**
 * puts2 - Print every other character starting with the first character
 *
 * @str: Pointer string
 *
 * return: void
 */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
