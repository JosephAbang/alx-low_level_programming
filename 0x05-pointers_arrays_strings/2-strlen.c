#include "main.h"

/**
 * _strlen - Print the length of the string
 *
 * @s: String
 *
 * Return: integer ch length of array
 */

int _strlen(char *s)
{
	int ch = 0;

	while (s[ch] != '\0')
	{
		ch++;
	}
	return (ch);
}
