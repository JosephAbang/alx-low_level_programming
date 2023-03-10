#include "main.h"

/**
 * _strcpy - Copies pointed string to another
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: Pointer to destination buffer (Char)
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
