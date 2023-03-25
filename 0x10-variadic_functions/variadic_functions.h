#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct op - Struct op
 *
 * @c: The data type (char)
 * @f: The function pointer
 */

typedef struct op
{
	char c;
	void (*f)(va_list args);
} op_t;

void print_all(const char * const format, ...);


#endif
