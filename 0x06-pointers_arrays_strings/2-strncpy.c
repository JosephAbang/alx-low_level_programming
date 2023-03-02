#include "main.h"

/**
 * _strncpy - Copy one string to another
 *
 * @dest: destination
 * @src: source
 * @n: size of string
 *
 * Return: Pointer to dest (char)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}

	dest[c] = '\0';

	return (dest);
}
