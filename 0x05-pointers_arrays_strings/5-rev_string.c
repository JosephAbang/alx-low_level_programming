#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @str: Pointer string
 *
 *
 * return: void
 */

void rev_string(char *str)
{
	int i = 0, len = 0;
	char temp;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
