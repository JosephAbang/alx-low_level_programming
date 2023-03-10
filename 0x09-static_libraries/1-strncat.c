#include "main.h"

/**
 * _strncat - Concatenate n size of two strings
 *
 * @dest: destination
 * @src: source
 * @n: Size of source
 *
 * Return: Pointer to dest (char)
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (; c < n && src[c] != '\0'; c++)
	{
		dest[len + c] = src[c];
	}

	dest[len + c] = '\0';

	return (dest);
}
