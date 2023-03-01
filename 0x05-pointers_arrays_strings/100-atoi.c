#include "main.h"

/**
 * _atoi - Convert a string to an integer
 *
 * @s: String
 *
 * Return: Integer digit of the string (int)
 */

int _atoi(char *s)
{
	int digit = 0, sign = 1, first_digit = 0;

	while (*s)
	{
		if (*s == '-' && !first_digit)
		{
			sign = sign * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			first_digit = 1;
			digit = digit * 10 + (*s - '0');
		}
		else if (first_digit)
		{
			break;
		}
		s++;
	}
	return (sign * digit);
}
