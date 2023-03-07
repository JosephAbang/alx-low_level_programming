#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: String
 * @accept: bytes of string
 *
 * Return: Pointer to bytes in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ((void *)0);
}
