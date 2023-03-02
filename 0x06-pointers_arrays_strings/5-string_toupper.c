#include "main.h"

/**
 * string_toupper - Change lowercase string to uppercase
 *
 * @str: String
 *
 * Return: Uppercase Char
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((int)str[i] >= 97 && (int)str[i] <= 122)
		{
			str[i] = (int)str[i] - 32;
		}
		i++;
	}
	return (str);
}
