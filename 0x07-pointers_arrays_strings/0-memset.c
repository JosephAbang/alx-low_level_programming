#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 *
 * @b: character (constant byte)
 * @s: Pointer to b
 * @n: number of bytes
 *
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
