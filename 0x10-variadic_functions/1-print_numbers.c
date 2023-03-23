#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - Print nu.bers
 *
 * @separator: separator
 * @n: number
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, param;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		param = va_arg(args, int);
		printf("%d", param);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
