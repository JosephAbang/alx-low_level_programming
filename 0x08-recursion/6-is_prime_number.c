#include "main.h"

/**
 * is_prime_number -Check if number is prime
 *
 * @n: mNumber
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n < 2 || n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	return (prime_num_helper(n, 5));
}

/**
 * prime_num_helper - Checks if a number is prime (helper)
 *
 * @n: number
 * @i: divisor
 *
 * Return: int
 */

int prime_num_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_num_helper(n, i + 2));
}
