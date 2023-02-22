#include "main.h"

/**
 * _abs - Entry point
 *
 * description : Prints the absolute value of int
 *
 * @int : Value must be whole number
 *
 * Return: int
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * (n);
		_putchar(n);
	}
	return n;
}
