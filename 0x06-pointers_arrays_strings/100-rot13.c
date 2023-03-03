#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 *
 * @str: string
 *
 * Return: Encoded string (char)
 */

char *rot13(char *str)
{
	int i = 0, j;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		j = 0;
		while (rot1[j] != '\0')
		{
			if (str[i] == rot1[j])
			{
				str[i] = rot2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
