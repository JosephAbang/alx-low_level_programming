#include "main.h"

/**
 * leet - Encode string into 1337
 *
 * @str: String
 *
 * Return: Encoded string (char)
 */

char *leet(char *str)
{
	int m = 0, n;

	char str_ls[] = "aAeEoOtTlL";
	char num_ls[] = "4433007711";

	while (str[m] != '\0')
	{
		n = 0;
		while (str_ls[n] != '\0')
		{
			if (str[m] == str_ls[n])
			{
				str[m] = num_ls[n];
				break;
			}
			n++;
		}
		m++;
	}
	return (str);
}
