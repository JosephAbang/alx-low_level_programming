#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print a - z
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	return (0);
}
