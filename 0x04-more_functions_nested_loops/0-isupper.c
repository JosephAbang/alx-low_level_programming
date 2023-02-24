#include "main.h"

/**
 * _isupper - Entry point
 *
 * description - Check if int c is alphabet
 *
 * @c : Character to be checked
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
