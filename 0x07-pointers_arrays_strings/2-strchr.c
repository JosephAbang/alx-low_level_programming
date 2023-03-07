#include "main.h"

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
	while (*s && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ((void *)0);
	}
}
