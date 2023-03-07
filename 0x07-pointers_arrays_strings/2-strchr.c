#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 *
 * @s: String
 * @c: Character to be located
 *
 * Return: Pointer to character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
