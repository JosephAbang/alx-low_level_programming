#include "main.h"

/**
 * _print_rev_recursion - Print string in reverse
 *
 * @s: String
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
