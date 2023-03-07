#include "main.h"

/**
 * _memcpy - Copy memory area
 *
 * @dest: Pointer to the destination memory
 * @src: Pointer to the source memory
 * @n: Number of bytes
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest - n);
}
