#include "main.h"

/**
 * _puts - Prints a string of text
 *
 * @str: string to be printed
 *
 * return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
