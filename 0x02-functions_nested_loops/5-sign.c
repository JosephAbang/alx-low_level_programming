#include "main.h"

/**
 * print_sign - Entry point
 *
 * description : Chek if n is a negative or positive number
 *
 * @n : int to be checked
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		_putchar(44);
		_putchar(32);
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else
	{
		_putchar(48);
		_putchar(44);
		_putchar(32);
		return (0);
	}
}
