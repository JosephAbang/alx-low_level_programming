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
	int a, b, c, d, ab_max;

	a = 48;
	ab_max = 58;
	while (a < 51)
	{
		if (a == 50)
		{
			ab_max = 52;
		}
		b = 48;
		while (b < ab_max)
		{
			c = 48;
			while (c < 54)
			{	d = 48;
				while (d < 58)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				c++;
				d = 48;
			}
			b++;
			c = 48;
		}
		a++;
		b = 48;
	}
}
