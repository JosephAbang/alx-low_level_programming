#include "main.h"

/**
 * _strspn - Get length of initial segment of specified string
 *
 * @s: String
 * @accept: Specified string
 *
 * Return: Length of string (unsigned int)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int match = 0;
	char *a = accept;

	while (*s != '\0')
	{
		match = 0;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				match = 1;
				break;
			}
			a++;
		}
		if (match == 0)
		{
			break;
		}
		len++;
		s++;
		a = accept;
	}
	return (len);
}
