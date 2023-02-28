#include "main.h"

/**
 * puts2 - Reverses a string
 *
 * @str: String
 *
 *
 * return: void
 */

void puts2(char *str)
{
	int i = 0, len = 0;
	char temp;

	while (str[i] != '\0')
	{
		i++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
