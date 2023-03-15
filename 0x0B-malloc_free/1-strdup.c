#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates string
 *
 * @str: string
 *
 * Return: Duplicated char
 */

char *_strdup(char *str)
{
	unsigned int len = 0;
	unsigned int i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	arr = malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}
