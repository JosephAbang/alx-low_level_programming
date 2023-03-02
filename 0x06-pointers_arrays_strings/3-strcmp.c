#include "main.h"

/**
 * _strcmp - Compares if two strings are equal
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (s1[j] == s2[j] && s1[j] != '\0' && s2[j] != '\0')
	{
		j++;
	}
	if (s1[j] == s2[j])
	{
		return (0);
	}
	else
	{
		return (s1[j] - s2[j]);
	}
}
