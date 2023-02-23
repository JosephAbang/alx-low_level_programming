#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * description : Print all natural numbers to 98
 *
 * @n : int argument for function
 *
 * return: void type generated from @n
 */

void print_to_98(int n)
{
		if (n < 98)
		{
			while (n < 99)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
				n++;
			}
		}
		else if (n > 98)
		{
			while (n > 99)
			{
				_putchar(n + '0');
				_putchar(',');
                                _putchar(' ');
				n--;
			}
		}
		else
		{
			_putchar(n + '0');
			_putchar('\n');
		}
}
