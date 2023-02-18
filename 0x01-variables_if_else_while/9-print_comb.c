#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all combination of single digits
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
