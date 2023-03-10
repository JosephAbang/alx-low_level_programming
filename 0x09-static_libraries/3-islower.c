#include "main.h"

/**
 * _islower - Entry point
 *
 * description : Checks int c for lowercase
 *
 * @c: character to be checked
 *
 * Return: 1 (True), 0 (False)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
