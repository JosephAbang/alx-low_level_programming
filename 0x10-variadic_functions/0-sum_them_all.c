#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all parameters
 *
 * @n: constant number
 *
 * Return: integer sum of params
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, param, result = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		param = va_arg(args, unsigned int);
		result += param;
	}
	va_end(args);
	return (result);
}
