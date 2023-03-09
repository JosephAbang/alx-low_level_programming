#include "main.h"

/**
 *  _sqrt_recursion - Return the square root of a number
 *
 * @n: Number
 *
 * Return: Int
 */

int  _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	if (n == 1 || n == 1)
		return (n);
	return (sqrt_helper(n, n / 2));
}


/**
 * sqrt_helper - Help _sqrt_recursion function calculate sqrt
 *
 * @n: Number
 * @guess: Square root guess
 *
 * Return: int
 */

int sqrt_helper(int n, int guess)
{
	if (guess == n)
	{
		return (guess);
	}
	else if ((guess * guess) < n || (guess * guess) > n)
	{
		return (sqrt_helper(n, guess + 1));
	}
	else
	{
		return (-1);
	}
}
