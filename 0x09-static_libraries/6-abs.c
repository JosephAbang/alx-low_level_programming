#include "main.h"

/**
 * _abs - Entry point
 *
 * description : Prints the absolute value of int
 *
 * @n : Character to be printed
 *
 * Return: int
 */

int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
