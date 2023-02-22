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
	while (n < 98 || n > 98)
	{
		if (n < 98)
		{
			putchar(n);
			n++;
		}
		else if (n > 98)
		{
			putchar(n);
			n--;
		}
		else
		{
			return (n);
		}
	}
}
