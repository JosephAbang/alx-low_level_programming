#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Print all three combinations possible
 *
 * Return: Always 0
 */

int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';

	while (a <= '8')
	{
		b = a + 1;
		while (b < '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a < '8' || b <= '8' || c <= '9')
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
