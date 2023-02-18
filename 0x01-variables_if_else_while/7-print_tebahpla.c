#include <stdio.h>

/**
 * main - ENtry point
 *
 * Description: Print alphabets in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char r = 'z';

	while (r >= 'a')
	{
		putchar(r);
		r--;
	}
	putchar('\n');
	return (0);
}
