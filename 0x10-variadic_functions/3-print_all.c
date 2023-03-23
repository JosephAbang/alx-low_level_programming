#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Print all formats
 *
 * @format: format identifier
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str_arg;
	char *separator = "";
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str_arg = va_arg(args, char *);
				if (str_arg != NULL)
					printf("%s%s", separator, str_arg);
				else
					printf("%s(nil)", separator);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
