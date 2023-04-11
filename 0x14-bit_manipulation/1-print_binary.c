#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int shift_count = sizeof(unsigned long int) * 8 - 1;

	while (shift_count >= 0)
	{
		if (n & (mask << shift_count))
			_putchar('1');
		else
			_putchar('0');
		shift_count--;
	}
}
