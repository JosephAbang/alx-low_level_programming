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
			for (n = n; n < 98; n++)
				_putchar(n);	
		}
		else if (n > 98)
		{
			for (n = n; n > 98; n--)
				_putchar(n);
		}
		else
		{
			_putchar(n);
		}
}
