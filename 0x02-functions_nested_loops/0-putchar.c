#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * return: Always 0
 */

int main(void)
{
	char put_text[] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(put_text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
