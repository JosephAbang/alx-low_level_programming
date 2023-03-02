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
		if (str[i] == '\n' || str[i] == ',' || str[i] == '.' || str[i] == '!')
		{
			if ((int)str[i + 1] >= 97 && (int)str[i + 1] <= 122)
			{
				str[i + 1] = (int)str[i + 1] - 32;
			}
		}
		else if (str[i] == '\t' || str[i] == ' ' || str[i] == '{' || str[i] == '}')
		{
			if ((int)str[i + 1] >= 97 && (int)str[i + 1] <= 122)
			{
				str[i + 1] = (int)str[i + 1] - 32;
			}
		}
		else if (str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')')
		{
			if ((int)str[i + 1] >= 97 && (int)str[i + 1] <= 122)
			{
				str[i + 1] = (int)str[i + 1] - 32;
			}
		}
		else if (i == 0 || str[i] == ';')
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
