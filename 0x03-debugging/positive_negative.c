#include <stdio.h>
#include <stdlib.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: Assign a random number to a variable with if statements
 *
 * Return: void
 *
 */

void positive_or_negative(int i)
{
	/* if else statement */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
