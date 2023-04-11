#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int found = 0;	
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
			found = 1;
		}
		else if (found == 1 || mask == 1)
			_putchar('0');
		mask >>= 1;
	}
}
