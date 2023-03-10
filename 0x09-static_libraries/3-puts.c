#include "main.h"

/**
 * _puts - Prints a string of text
 *
 * @str: string to be printed
 *
 * return: void
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
