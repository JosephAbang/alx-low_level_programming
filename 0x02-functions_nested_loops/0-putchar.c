#include "main.h"

/**
 * main - Entry point
 *
 * Description - Print text using main header file
 *
 * Return: Always 0
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
