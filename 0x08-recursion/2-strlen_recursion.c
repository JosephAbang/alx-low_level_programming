#include "main.h"

/**
 * _strlen_recursion - Print length of string
 *
 * @s: String
 *
 * Return: length of string (int)
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}
	len++;
	return (len + _strlen_recursion(s + 1));
}
