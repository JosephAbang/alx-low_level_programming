#include "main.h"
#include <stdlib.h>

/**
 * str_concat - oncatenates two strings
 *
 * @s1: String one
 * @s2: String two
 *
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = len1; i < len1 + len2; i++)
	{
		result[i] = s2[i - len1];
	}
	result[len2 + len1] = '\0';
	return (result);
}
