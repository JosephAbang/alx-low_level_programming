#include "main.h"

/**
 * print_alphabet - Entry point
 * description : print alphabet in lower case using putchar
 *
 * Return void
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
