#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * description : Prints alphabets in lower case 10 times
 *
 * return void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar('\n');
	}
}
