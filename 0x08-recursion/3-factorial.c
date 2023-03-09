#include "main.h"

/**
 * factorial - Calculate the factorial
 *
 * @n: Number
 *
 * Return: Int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
