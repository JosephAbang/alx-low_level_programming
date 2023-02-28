#include "main.h"

/**
 * print_rev - Print string s in reverse
 * @s: String
 *
 * return: void
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
