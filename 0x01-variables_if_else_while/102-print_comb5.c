#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Mirror two different combinatons of numbers
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int a, b, c, d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			d = b + 1;
			c = a;
			while (c <= '9')
			{
				while (d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a < '9' || b < '8' || c < '9' || d < 9)
					{
					putchar(',');
					putchar(' ');
					}
					d++;
				}
				c++;
				d = '0';
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
