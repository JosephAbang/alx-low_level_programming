#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * description : Print every minute of Jack Bauer
 *
 * return void
 */

void jack_bauer(void)
{
	int a, b, c, d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;

	while (a < 51)
	{
		while (b < 52)
		{
			while (c < 54)
			{
				while (d <= 57 && c < 54)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
			}
			c++;
		}
		b++;
	}
	a++;
}
