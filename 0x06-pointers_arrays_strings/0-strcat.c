#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: Pointer to destination (dest)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
