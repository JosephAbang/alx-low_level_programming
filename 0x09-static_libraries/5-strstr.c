#include "main.h"

/**
 * _strstr - Locate a substring
 *
 * @haystack: String
 * @needle: substring
 *
 * Return: Pointer to located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		j = 0;
		i++;
	}
	return ((void *)0);
}
