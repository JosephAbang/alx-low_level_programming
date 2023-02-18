#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: Print hexadecimals
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char n = '0';
	char h = 'a';

	while (n <= '9')
	{
		if (isxdigit(n) != 0)
		{
			putchar(n);
		}
		n++;
	}
	while (h <= 'z')
	{
		if (isxdigit(h) != 0)
		{
			putchar(h);
		}
		h++;
	}
	putchar('\n');
	return (0);
}
