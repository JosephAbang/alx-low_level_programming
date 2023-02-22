#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * description : Print last digit of n
 *
 * @n : integer to consider
 *
 * Return: last digit of n
 */


int print_last_digit(int n)
{
	int i = n % 10;

	if (n < 0)
	{
		i = (-1) * i;
	}
	_putchar(i + '0');
	return (i);
}
