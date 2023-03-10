#include "main.h"

/**
 * _isdigit - Entry point
 *
 * description - Check if int c is digit
 *
 * @c : Character to be checked
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
