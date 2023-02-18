#include <stdio.h>

/**
 * main - Entry points
 *
 * Description: Print single base10 numbers using putchar
 *
 * Return: Always 0
 */

int main(void)
{
	int b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
