#include "main.h"

/**
 * cap_string - Capitalize all words of string
 *
 * @str: String
 *
 * Return: capitalized char string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if ((int)str[i] >= 97 && (int)str[i] <= 122)
			{
				str[i] = (int)str[i] - 32;
			}
		}
		else if (str[i] == '\n' || str[i] == ',' || str[i] == '!' ||
				str[i] == '\t' || str[i] == ' ' || str[i] == '{' || str[i] == '}' ||
				str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' ||
				str[i] == ';' || str[i] == '.')
		{
			if ((int)str[i + 1] >= 97 && (int)str[i + 1] <= 122)
			{
				str[i + 1] = (int)str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
